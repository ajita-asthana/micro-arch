#include <iostream>
#include "TokenBucket.h"

TokenBucket::TokenBucket(int rate, int interval) : maxRate(rate), timeInterval(interval) {
    bucketSize = maxRate * (timeInterval / 1000.0);
    tokens = bucketSize;
}

void TokenBucket::addTokens() {
    tokens += maxRate * (timeInterval /  1000.0);
    if(tokens > bucketSize) {
        tokens = bucketSize; //Cap the tokens at bucket size
    }
}

bool TokenBucket::canSend(Packet packet) {
    return tokens >= packet.size;
}

void TokenBucket::sendPacket(NetworkNode& node, Packet packet) {
    if(canSend(packet)) {
        node.sendPacket(packet);
        tokens -= packet.size;
    } else {
        std::cout << "Throttling: Not enough tokens to send packet of size " << packet.size << " bytes. " << std::endl;
    }
}