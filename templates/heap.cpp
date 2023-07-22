// Title: Heap
// Parameters: None
// Returns: A heap data structure that can be used to store and retrieve elements
// Description: Implements a basic heap data structure that can be used to solve problems involving heaps
// Time Complexity = O(log n) for insert, extractMax, and decreaseKey
// Space Complexity = O(n)
// A template for a heap

template <typename T>
class Heap {
private:
    vector<T> data;

public:
    // Create a new heap
    Heap() {}

    // Insert an element into the heap
    void insert(T element) {
        data.push_back(element);
        heapifyUp(data.size() - 1);
    }

    // Extract the maximum element from the heap
    T extractMax() {
        T maxElement = data[0];
        data[0] = data.back();
        data.pop_back();
        heapifyDown(0);

        return maxElement;
    }

    // Decrease the key of an element in the heap
    void decreaseKey(int index, T newKey) {
        data[index] = newKey;
        heapifyUp(index);
    }

private:
    // Heapify up the element at the given index
    void heapifyUp(int index) {
        while (index > 0 && data[(index - 1) / 2] < data[index]) {
            swap(data[index], data[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    // Heapify down the element at the given index
    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;

        int largest = index;
        if (leftChild < data.size() && data[leftChild] > data[largest]) {
            largest = leftChild;
        }

        if (rightChild < data.size() && data[rightChild] > data[largest]) {
            largest = rightChild;
        }

        if (largest != index) {
            swap(data[index], data[largest]);
            heapifyDown(largest);
        }
    }
};

// Notes: 
// This code implements a basic heap data structure.
// A heap is a data structure that satisfies the heap property.
// Which states that for every node in the heap, the value of the node is less than or equal to the value of its parent.
// The insert(), extractMax(), and decreaseKey() methods are used to add, remove, and update elements in the heap. 
// The heapifyUp() and heapifyDown() methods are used to maintain the heap property.
