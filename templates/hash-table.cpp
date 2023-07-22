// Title: HashTable
// Parameters: None
// Returns: A hash table data structure that can be used to store and retrieve elements
// Description: Implements a basic hash table data structure that can be used to solve problems involving hash tables
// Time Complexity = O(1) for insert, search, and delete
// Space Complexity = O(n)
// A template for a hash table

template <typename T>
class HashTable {
private:
    struct Node {
        T data;
        Node* next;

        Node(T data) : data(data), next(nullptr) {}
    };

    vector<Node*> buckets;
    int size;

public:
    // Create a new hash table with the given number of buckets
    HashTable(int numBuckets) {
        buckets.resize(numBuckets);
        size = 0;
    }

    // Insert an element into the hash table
    void insert(T element) {
        int bucketIndex = hash(element) % buckets.size();
        Node* newNode = new Node(element);

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

    // Search for an element in the hash table
    T search(T element) {
        int bucketIndex = hash(element) % buckets.size();
        Node* current = buckets[bucketIndex];

        while (current != nullptr) {
            if (current->data == element) {
                return current->data;
            }

            current = current->next;
        }

        return nullptr;
    }

    // Delete an element from the hash table
    void deleteElement(T element) {
        int bucketIndex = hash(element) % buckets.size();
        Node* current = buckets[bucketIndex];
        Node* prev = nullptr;

        while (current != nullptr) {
            if (current->data == element) {
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

    // Get the size of the hash table
    int size() {
        return size;
    }

private:
    // Hash function to calculate the bucket index for a given element
    int hash(T element) {
        return (int)element % buckets.size();
    }
};

// Notes: 
// The insert(), search(), and deleteElement() methods are used to add, search, and remove elements from the hash table.
// The size() method is used to get the size of the hash table.
// The hash() method is used to calculate the bucket index for a given element.
