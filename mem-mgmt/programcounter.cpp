#include <iostream>
#include <pthread.h>

//Shared variable
int counter = 0;

//Lock for synchronization
pthread_mutex_t lock;

void* increment_counter(void* arg) {
    for(int i=0; i<1000000; i++) {
        //Uncomment the next line to see the effect of 
        // synchronization

        //pthread_mutex_lock(&lock);
        ++counter;
        //pthread_mutex_unlock(&lock);
    }
    return nullptr;
}

int main() {
    //Initialize the mutex
    pthread_mutex_init(&lock, nullptr);

    //Creating the thread identifiers
    pthread_t thread1, thread2;

    //Creating the threads
    pthread_create(&thread1, nullptr, increment_counter, nullptr);
    pthread_create(&thread2, nullptr, increment_counter, nullptr);

    //Waiting for thread to finish
    pthread_join(thread1, nullptr);
    pthread_join(thread2, nullptr);

    //Destroy the mutex
    pthread_mutex_destroy(&lock);

    std::cout << "Final Counter Value: " << counter << std::endl;
    return 0;
}