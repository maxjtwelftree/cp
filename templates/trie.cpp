// Title: Trie
// Parameters: None
// Returns: A trie data structure that can be used to store and retrieve elements
// Description: Implements a basic trie data structure that can be used to solve problems involving tries
// Time Complexity = O(m) for insert, search, and startsWith
// Space Complexity = O(m)
// m = the length of the longest string in the trie
// A template for a trie

template <typename T>
class Trie {
private:
    struct Node {
        T value;
        bool isLeaf;
        Node* children[26];

        Node() : value(T()), isLeaf(false) {
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };

    Node* root;

public:
    // Create a new trie
    Trie() {
        root = new Node();
    }

    // Insert a word into the trie
    void insert(string word, T value) {
        Node* currentNode = root;

        for (char c : word) {
            int index = c - 'a';

            if (currentNode->children[index] == nullptr) {
                currentNode->children[index] = new Node();
            }

            currentNode = currentNode->children[index];
        }

        currentNode->isLeaf = true;
        currentNode->value = value;
    }

    // Search for a word in the trie
    T search(string word) {
        Node* currentNode = root;

        for (char c : word) {
            int index = c - 'a';

            if (currentNode->children[index] == nullptr) {
                return nullptr;
            }

            currentNode = currentNode->children[index];
        }

        if (!currentNode->isLeaf) {
            return nullptr;
        }

        return currentNode->value;
    }

    // Check if the trie contains a prefix
    bool startsWith(string prefix) {
        Node* currentNode = root;

        for (char c : prefix) {
            int index = c - 'a';

            if (currentNode->children[index] == nullptr) {
                return false;
            }

            currentNode = currentNode->children[index];
        }

        return true;
    }
};

// Notes:
// This code implements a basic trie data structure. A trie is a data structure that can be used to store and retrieve strings. 
// It is a tree-like data structure, where each node in the tree represents a character in the string.
// The insert(), search(), and startsWith() methods are used to add, search, and check if the trie contains a prefix of a string.
