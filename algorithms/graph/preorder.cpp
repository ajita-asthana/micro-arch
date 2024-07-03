#include <vector>
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

//Recursive preorder traversal
void preorderHelper(Node* root, vector<int>& result) {
    if(root == nullptr) {
        return;
    }
    result.push_back(root->val);
    for(Node* child : root->children) {
        preorderHelper(child, result); //Recursively visit each child
    }
}

vector<int> preorder(Node* root) {
    vector<int> result;
    preorderHelper(root, result);
    return result;
}

int main() {
    //Creating an N-ary tree for demonstration
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);

    vector<Node*> children3;
    children3.push_back(node5);
    children3.push_back(node6);

    Node* node3 = new Node(3, children3);
    Node* node2 = new Node(2);
    Node* node4 = new Node(4);

    vector<Node*> children1;
    children1.push_back(node2);
    children1.push_back(node3);
    children1.push_back(node4);
    Node* root = new Node(1, children1);

    //Recursive preorder traversal
    vector<int> recursiveResult = preorder(root);
    cout << "Recursive preorder traversal ";
    for(int val : recursiveResult) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}