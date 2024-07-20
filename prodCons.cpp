#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <chrono>

using namespace std;

//Shared Buffer
queue<int> buffer;
const unsigned int maxBufferSize = 10;

//Mutex and state variables
mutex mtx; //used to protect access to shared buffer
condition_variable cv_producer; //used to notify the producer when there is space in the buffer
condition_variable cv_consumer; //used to notify the consumer when there is data in the buffer

//Producer Function 
//Produces data at regular intervals
//Waits if the buffer is full
//Pushes data to the buffer and notifies the consumer
void producer() {
	int data = 0;
	while(true) {
		
		//Simulate data production delay
		this_thread::sleep_for(chrono::milliseconds(100));
		
		unique_lock<mutex> lock(mtx);
		cv_producer.wait(lock, [] {return buffer.size() < maxBufferSize; });

		//Produce data and add to buffer
		buffer.push(data);
		cout << "Produced: " << data << endl;
		data++;

		//Notify Consumer
		cv_consumer.notify_one();
	}
}

//Consumer Function
//Consumes data from the buffer
//Waits if the buffer is empty
//Pops data from the buffer and notifies the producer
void consumer() {
	while(true) {
		unique_lock<mutex> lock(mtx);
		cv_consumer.wait(lock, [] { return !buffer.empty(); });

		//Consume data from buffer
		int data = buffer.front();
		buffer.pop();
		cout << "Consumed: " << data << endl;

		//Notify producer
		cv_producer.notify_one();

		//Simlate data processing delay
		this_thread::sleep_for(chrono::milliseconds(150));
	}
}


int main() {

	//Create producer and consumer threads
	thread prodThread(producer);
	thread consThread(consumer);

	//Join threads
	prodThread.join();
	consThread.join();

	return 0;
}
