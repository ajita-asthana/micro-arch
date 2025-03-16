#include<iostream>
#include<unordered_map>
#include<vector>
#include<memory>
#include<sstream>
 

using namespace std;
class FileSystemNode{
public:
    string name;
    bool isFile;
    string content;
    unordered_map<string, shared_ptr<FileSystemNode> > children;

    // Constructor
    FileSystemNode(string name, bool isFile) : name(name), isFile(isFile) {}
};

class FileSystem {
private:
    shared_ptr<FileSystemNode> root;
    shared_ptr<FileSystemNode> currentDir;

    vector<string> splitPath(const string& path) {
        vector<string> parts;
        stringstream ss(path);
        string part;
        while(getline(ss, part, '/')) {
            if(!part.empty())
                parts.push_back(part);
        }
        return parts;
    }

    shared_ptr<FileSystemNode> traversePath(const string& path, bool create = false, bool isFile = false) {
        auto node = root;
        vector<string> parts = splitPath(path);
        for(size_t i=0; i<parts.size(); ++i) {
            if(node->children.find(parts[i]) == node->children.end()) {
                if(!create)
                    return nullptr;
                node->children[parts[i]] = make_shared<FileSystemNode>(parts[i], (i == parts.size() - 1) && isFile);
            }
            node = node->children[parts[i]];
        }
        return node;
    }
public:
    FileSystem() {
        root = make_shared<FileSystemNode>("/", false);
        currentDir = root;
    }

    void mkdir(const string& path) {
        traversePath(path, true, false);
    }

    void touch(const string& path) {
        traversePath(path, true, true);
    }

    void writeToFile(const string& path, const string& data) {
        auto node = traversePath(path, true, true);
        if(node && node->isFile) {
            node->content = data;
        }
    }

    string readFile(const string& path) {
        auto node = traversePath(path);
        if(node && node->isFile) {
            return node->content;
        }
        return "File not found";
    }

    void ls(const string& path = "") {
        auto node = path.empty() ? currentDir : traversePath(path);
        if (node) {
            for(const auto& entry : node->children) {
                cout << (entry.second->isFile ? "File" : "Dir") << entry.first << endl;
            }
        }
    }
};

int main() {
    FileSystem fs;
    fs.mkdir("/home");
    fs.mkdir("/home/user");
    fs.touch("/home/user/file1.txt");
    fs.writeToFile("/home/user/file1.txt", "Hello, World");

    cout << "Listing /home/user: " << endl;
    fs.ls("/home/user");

    cout << "Reading /home/user/file1.txt: " << fs.readFile("/home/user/file1.txt") << endl;
    return 0;
}