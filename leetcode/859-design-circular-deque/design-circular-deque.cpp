struct MyCircularDeque {
    deque<int> deque{};
    int size, tracker = 0;

    MyCircularDeque(int k) : size(k) {}

    [[nodiscard]] bool insertFront(int value) {
        if (tracker < size) {
            deque.push_front(value);
            tracker++;
            return true;
        }
        return false;
    }
    
    [[nodiscard]] bool insertLast(int value) {
        if (tracker < size) {
            deque.push_back(value);
            tracker++;
            return true;
        }
        return false;
    }
    
    [[nodiscard]] bool deleteFront() {
        if (tracker > 0) {
            deque.pop_front();
            tracker--;
            return true;
        }
        return false;
    }
    
    [[nodiscard]] bool deleteLast() {
        if (tracker > 0) {
            deque.pop_back();
            tracker--;
            return true;
        }
        return false;
    }
    
    [[nodiscard]] int getFront() {
        return deque.empty() ? -1 : deque.front();
    }
    
    [[nodiscard]] int getRear() {
        return deque.empty() ? -1 : deque.back();
    }
    
    [[nodiscard]] bool isEmpty() {
        return deque.empty();
    }
    
    [[nodiscard]] bool isFull() {
        return deque.size() == size;
    }
};
