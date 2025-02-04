"""
The Split Brain problem in Distributed Systems
occurs when network partitions cause nodes to become
isolated, leading to multiple independent
clusters that operate as if they are the primary 
cluster. This issue arises in distributed databases,
consensus protocols, and leader election 
mechanism. 

1. Node Class: Represents individual nodes with voting abilities
2. Cluster Class: Handles leader election and quorum based resolution.
3. Network Partition Simulation: Splits the cluster and observes the issue.
"""

import random
import time

class Node:
    def __init__(self, node_id):
        self.node_id = node_id
        self.is_leader = False

    def vote(self, candidates):
        """
        Simulate voting: each node votes for one candidate.
        """
        return random.choice(candidates)
    
class Cluster:
    def __init__(self, nodes):
        self.nodes = nodes
        self.leader = None

    def elect_leader(self):
        """
        Conducts a leader election based on majority votes.
        """
        votes = {}
        candidates = [node.node_id for node in self.nodes]

        #Nodes vote for a random candidate
        for node in self.nodes:
            vote = node.vote(candidates)
            votes[vote] = votes.get(vote, 0) + 1

        # Determine the winner (leader)
        leader_id = max(votes, key = votes.get)
        if votes[leader_id] > len(self.nodes) / 2:
            self.leader = leader_id
            print(f" Leader elected: Node {self.leader}")
        else:
            print("No leader elected (no majority)")

        def simulate_split_brain(self):
            """
            Splits the cluster and each parition attempts to elect a leader.
            """
            half = len(self.nodes) // 2
            partition1 = Cluster(self.nodes[:half])
            parition2 = Cluster(self.nodes[half:])

            print("\n Simulating network partition")
            time.sleep(1)

            print("\n Partition 1 attempting election...")
            partition1.elect_leader()

            print("\n Partition 2 attempting election...")
            parition2.elect_leader()

