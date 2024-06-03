#ifndef TOKENBUCKET_H
#define TOKENBUCKET_H

#include "NetworkNode.h"
#include "Packet.h"

class TokenBucket {
public:
    int maxRate; //maximum rate in bytes per second
    int bucketSize; //Maximum bucket size in bytes
    int tokens; //Current number of tokens on the bucket
    int timeInterval; //Time interval in milliseconds

    TokenBucket(int rate, int interval);

    void addTokens();
    bool canSend(Packet packet);
    void sendPacket(NetworkNode& node, Packet packet);
};

#endif //TOKENBUCKET_H

