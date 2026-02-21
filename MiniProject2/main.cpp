// main.cpp
#include "Queue.h"
#include <iostream>
using namespace std;

int main() {
    int cap;
    cout << "Queue Management System\n";
    cout << "Enter queue capacity: ";
    cin >> cap;

    Queue myQueue(cap);

    int choice, value;

    do {
        cout << "\nMenu\n"
             << "1. Enqueue\n"
             << "2. Dequeue\n"
             << "3. Peek (Front)\n"
             << "4. Check Size\n"
             << "5. Print Queue\n"
             << "6. Check if Empty\n"
             << "7. Check if Full\n"
             << "8. Clear Queue\n"
             << "9. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter integer to enqueue: ";
                cin >> value;
                myQueue.enqueue(value);
                break;

            case 2:
                if (myQueue.isEmpty()) {
                    cout << "Error: Queue is empty. Cannot dequeue.\n";
                } else {
                    value = myQueue.dequeue();
                    cout << "Dequeued value: " << value << "\n";
                }
                break;

            case 3:
                if (myQueue.isEmpty()) {
                    cout << "Error: Queue is empty. No front element.\n";
                } else {
                    value = myQueue.front();
                    cout << "Front value: " << value << "\n";
                }
                break;

            case 4:
                cout << "Current queue size: " << myQueue.getSize() << "\n";
                break;

            case 5:
                myQueue.print();
                break;

            case 6:
                cout << (myQueue.isEmpty() ? "Queue is EMPTY\n" : "Queue is NOT empty\n");
                break;

            case 7:
                cout << (myQueue.isFull() ? "Queue is FULL\n" : "Queue is NOT full\n");
                break;

            case 8:
                myQueue.clear();
                break;

            case 9:
                cout << "Exiting... \n";
                break;

            default:
                cout << "Invalid choice! Please enter 1-9.\n";
        }

    } while (choice != 9);

    return 0;
}