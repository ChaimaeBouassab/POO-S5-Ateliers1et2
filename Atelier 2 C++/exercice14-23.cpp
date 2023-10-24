#include <iostream>

class Stack {
private:
    static const int SIZE = 100;
    int stack[SIZE];
    int count; 

public:
    Stack() {
        count = 0;
    }

    void push(int value) {
        if (count < SIZE) {
            stack[count++] = value;
            std::cout << "\nInsertion success!!!" << std::endl;
        } else {
            std::cout << "\nStack is Full!!! Insertion is not possible!!!" << std::endl;
        }
    }


    void pop() {
        if (count > 0) {
            std::cout << "\nDeleted: " << stack[--count] << std::endl;
        } else {
            std::cout << "\nStack is Empty!!! Deletion is not possible!!!" << std::endl;
        }
    }

    void display() {
        if (count == 0) {
            std::cout << "\nStack is Empty!!!" << std::endl;
        } else {
            std::cout << "\nStack elements are:" << std::endl;
            for (int i = count - 1; i >= 0; i--) {
                std::cout << stack[i] << std::endl;
            }
        }
    }   
};

int main() {
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    myStack.display();

    myStack.pop();
    myStack.display();

    return 0;
}
