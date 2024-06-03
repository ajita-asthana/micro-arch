#ifndef NETWORKNODE_H
#define NETWORKNODE_H

#include<queue>
#include "Packet.h"

class NetworkNode {
public:
    std::queue<Packet> packetQueue; //Queue of packets to be sent
    void sendPacket(Packet packet);
};

#endif //NETWORKNODE_H