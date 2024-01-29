#include <vector>
#include <algorithm>

using namespace std;

struct MyQueue {
    vector<int> stack_1, stack_2;

    void push(int x) {
        stack_1.push_back(x);
    }

    int pop() {
        if (stack_2.empty()) {
            // Transfer all elements from stack_1 to stack_2
            while (!stack_1.empty()) {
                stack_2.push_back(stack_1.back());
                stack_1.pop_back();
            }
        }
        // Get the top element from stack_2
        int top = stack_2.back();
        stack_2.pop_back();
        return top;
    }

    int peek() {
        if (stack_2.empty()) {
            // Transfer all elements from stack_1 to stack_2
            while (!stack_1.empty()) {
                stack_2.push_back(stack_1.back());
                stack_1.pop_back();
            }
        }
        return stack_2.back();
    }

    bool empty() {
        return stack_1.empty() && stack_2.empty();
    }
};
