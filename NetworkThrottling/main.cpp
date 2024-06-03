#include <thread>
#include <chrono>
#include "NetworkNode.h"
#include "TokenBucket.h"
#include "Packet.h"

void simulateNetworkTraffic() {
    NetworkNode node; 
    TokenBucket tokenBucket(1000, 1000); //1000 bytes per second, 10second interval

    //Add some packets to the node's queue
    node.packetQueue.push(Packet(500)); // 500 bytes
    node.packetQueue.push(Packet(300)); // 300 bytes
    node.packetQueue.push(Packet(800)); // 800 bytes
    node.packetQueue.push(Packet(600)); // 600 bytes

    //Simulate sending packets while throttling
    while(!node.packetQueue.empty()) {
        tokenBucket.addTokens();
        Packet packet = node.packetQueue.front();

        if(tokenBucket.canSend(packet)) {
            tokenBucket.sendPacket(node, packet);
            node.packetQueue.pop();
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(tokenBucket.timeInterval)); //Wait for the next interval
    }
}
int main() {
    simulateNetworkTraffic();
    return 0;
}