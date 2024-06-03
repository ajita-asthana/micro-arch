#include <iostream>
#include "NetworkNode.h"

void NetworkNode::sendPacket(Packet packet) {
    std::cout << "Sending packet of size " << packet.size << " bytes " << std::endl;
}