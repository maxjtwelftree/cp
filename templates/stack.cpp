// Title: Stack
// Parameters: None
// Returns: A stack data structure that can be used to push and pop elements
// Description: Implements a basic stack data structure that can be used to solve problems involving stacks
// Time Complexity = O(1)
// Space Complexity = O(n)
// A template for a stack

template <typename T>
class Stack {
private:
    vector<T> data;

public:
    // Push an element onto the stack
    void push(T element) {
        data.push_back(element);
    }

    // Pop an element from the stack
    T pop() {
        T element = data.back();
        data.pop_back();
        return element;
    }

    // Check if the stack is empty
    bool empty() {
        return data.empty();
    }

    // Get the size of the stack
    int size() {
        return data.size();
    }
};

// Notes:
// The push() and pop() methods are used to add and remove elements from the stack.
// The empty() method is used to check if the stack is empty.
// The size() method is used to get the size of the stack.
