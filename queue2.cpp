#include <iostream>
using namespace std;

#define SIZE 5 

int arr[SIZE];  
int front = 0;  
int rear = -1; 
int count = 0;  

void enqueue(int element) {
    if (count == SIZE) {
        cout << "Queue is full. Cannot enqueue " << element << endl;
        return;
    }

    rear = (rear + 1) % SIZE; 
    arr[rear] = element;
    count++;
    cout << "Enqueued " << element << endl;
}

void dequeue() {
    if (count == 0) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }

    cout << "Dequeued " << arr[front] << endl;
    front = (front + 1) % SIZE;  
    count--;
}


void display() {
    if (count == 0) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue elements: ";
    for (int i = 0; i < count; i++) {
        cout << arr[(front + i) % SIZE] << " ";
    }
    cout << endl;
}


int main() {
    int choice, element;
     cout << "\nKaushal\n";
    cout << "\n2334180\n";

    while (true) {
        cout << "\nQueue Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                enqueue(element);
                break;

            case 2:
                dequeue();
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