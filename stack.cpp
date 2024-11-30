#include <iostream>
using namespace std;

class Stack {
    // Properties
    public:
    int *arr;
    int top; 
    int size;

    // Constructor
    Stack(int size) {
        this->size = size; 
        arr = new int[size];
        top = -1;
    }

    // Push method
    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element; // Corrected assignment
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop method
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    // Peek method
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
};

int main() {
    // Create a stack with a size of 5
    Stack st(5);

    // Test stack methods
    st.push(22);
    st.push(33);

    cout << "Top element: " << st.peek() << endl;

    st.pop();
    cout << "Top element after pop: " << st.peek() << endl;

    st.pop();
    st.pop(); // This should show "Stack Underflow"

    return 0;
}


