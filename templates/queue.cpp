// Title: Queue
// Parameters: None
// Returns: A queue data structure that can be used to enqueue and dequeue elements
// Description: Implements a basic queue data structure that can be used to solve problems involving queues
// Time Complexity = O(1)
// Space Complexity = O(n)
// A template for a queue

template <typename T>
class Queue {
private:
    vector<T> data;

public:
    // Enqueue an element into the queue
    void enqueue(T element) {
        data.push_back(element);
    }

    // Dequeue an element from the queue
    T dequeue() {
        T element = data.front();
        data.erase(data.begin());
        return element;
    }

    // Check if the queue is empty
    bool empty() {
        return data.empty();
    }

    // Get the size of the queue
    int size() {
        return data.size();
    }
};

// Notes: 
// The enqueue() and dequeue() methods are used to add and remove elements from the queue
// The empty() method is used to check if the queue is empty
// The size() method is used to get the size of the queue
