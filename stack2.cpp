#include <iostream>
using namespace std;

#define SIZE 5  

int stack[SIZE];  
int top = -1;     

void push(int element) {
    if (top == SIZE - 1) {
        cout << "Stack is full. Cannot push " << element << endl;
        return;
    }

    top++;
    stack[top] = element;
    cout << "Pushed " << element << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty. Cannot pop." << endl;
        return;
    }

    cout << "Popped " << stack[top] << endl;
    top--;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, element;
    cout << "\nAditya handa\n";
    cout << "\n2334132\n";

    while (true) {
        cout << "\nStack Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                push(element);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}