// Title: HashMap
// Parameters: None
// Returns: A hash map data structure that can be used to store and retrieve elements
// Description: Implements a basic hash map data structure that can be used to solve problems involving hash maps
// Time Complexity = O(1) for insert, search, and delete
// Space Complexity = O(n)
// A template for a hash map

template <typename K, typename V>
class HashMap {
private:
    struct Node {
        K key;
        V value;

        Node(K key, V value) : key(key), value(value) {}
    };

    vector<Node*> buckets;
    int size;

public:
    // Create a new hash map with the given number of buckets
    HashMap(int numBuckets) {
        buckets.resize(numBuckets);
        size = 0;
    }

    // Insert an element into the hash map
    void insert(K key, V value) {
        int bucketIndex = hash(key) % buckets.size();
        Node* newNode = new Node(key, value);

        Node* current = buckets[bucketIndex];
        if (current == nullptr) {
            buckets[bucketIndex] = newNode;
        } else {
            while (current->next != nullptr) {
                current = current->next;
            }

            current->next = newNode;
        }

        size++;
    }

    // Search for an element in the hash map
    V search(K key) {
        int bucketIndex = hash(key) % buckets.size();
        Node* current = buckets[bucketIndex];

        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }

            current = current->next;
        }

        return nullptr;
    }

    // Delete an element from the hash map
    void deleteElement(K key) {
        int bucketIndex = hash(key) % buckets.size();
        Node* current = buckets[bucketIndex];
        Node* prev = nullptr;

        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    buckets[bucketIndex] = current->next;
                } else {
                    prev->next = current->next;
                }

                delete current;
                size--;
                return;
            }

            prev = current;
            current = current->next;
        }
    }

    // Get the size of the hash map
    int size() {
        return size;
    }

private:
    // Hash function to calculate the bucket index for a given key
    int hash(K key) {
        return (int)key % buckets.size();
    }
};

// Notes: 
// This code is similar to the code for a hash table, but it uses a different data structure to store the elements. 
// In a hash map, each element is stored in a linked list, where the key of the element is used as the pointer to the next element in the list. 
// This allows us to quickly find the element that we are looking for, even if the hash function for the key returns the same bucket index for multiple elements.
// The time complexity for insert, search, and delete operations in a hash map is O(1), just like in a hash table. 
// However, the space complexity for a hash map is slightly higher than for a hash table, because each element in a hash map is stored in a linked list.
