// Title: LinkedList
// Parameters: None
// Returns: A linked list data structure that can be used to insert and delete elements
// Description: Implements a basic linked list data structure that can be used to solve problems involving linked lists
// Time Complexity = O(1) for insert and delete at the front, O(n) for insert and delete at the end
// Space Complexity = O(n)
// A template for a linked list

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;

        Node(T data) : data(data), next(nullptr) {}
    };

    Node* head;
    Node* tail;

public:
    // Create a new linked list
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert an element at the front of the linked list
    void insertFront(T element) {
        Node* newNode = new Node(element);
        newNode->next = head;
        head = newNode;

        if (tail == nullptr) {
            tail = head;
        }
    }

    // Insert an element at the end of the linked list
    void insertBack(T element) {
        Node* newNode = new Node(element);

        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete the element at the front of the linked list
    void deleteFront() {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head == nullptr) {
            tail = nullptr;
        }

        delete temp;
    }

    // Delete the element at the end of the linked list
    void deleteBack() {
        if (tail == nullptr) {
            return;
        }

        Node* prev = head;
        while (prev->next != tail) {
            prev = prev->next;
        }

        tail = prev;
        delete tail->next;
        tail->next = nullptr;
    }

    // Check if the linked list is empty
    bool empty() {
        return head == nullptr;
    }

    // Get the size of the linked list
    int size() {
        int size = 0;
        Node* current = head;
        while (current != nullptr) {
            size++;
            current = current->next;
        }

        return size;
    }
};

// Notes: 
// The insertFront() and insertBack() methods are used to add elements to the linked list.
// The deleteFront() and deleteBack() methods are used to remove elements from the linked list.
// The empty() method is used to check if the linked list is empty.
// The size() method is used to get the size of the linked list.
