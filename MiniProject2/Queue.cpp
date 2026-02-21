// Queue.cpp
#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int cap) {
    capacity   = cap;
    queueArray = new int[capacity];
    frontIndex = 0;
    rearIndex  = 0;
    count      = 0;
}

Queue::~Queue() {
    delete[] queueArray;
}

void Queue::enqueue(int item) {
    if (isFull()) {
        cout << "Error: Queue is full. Cannot enqueue " << item << ".\n";
        return;
    }
    queueArray[rearIndex] = item;
    rearIndex = (rearIndex + 1) % capacity;
    count++;
    cout << item << " enqueued successfully.\n";
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue is empty. Cannot dequeue.\n";
        return -1;
    }
    int item = queueArray[frontIndex];
    frontIndex = (frontIndex + 1) % capacity;
    count--;
    cout << item << " dequeued successfully.\n";
    return item;
}

int Queue::front() const {
    if (isEmpty()) {
        cout << "Error: Queue is empty. No front element.\n";
        return -1;
    }
    return queueArray[frontIndex];
}

bool Queue::isEmpty() const {
    return count == 0;
}

bool Queue::isFull() const {
    return count == capacity;
}

int Queue::getSize() const {
    return count;
}

void Queue::clear() {
    frontIndex = 0;
    rearIndex  = 0;
    count      = 0;
    cout << "Queue cleared.\n";
}

void Queue::print() const {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue: ";
    for (int i = 0; i < count; i++) {
        cout << queueArray[(frontIndex + i) % capacity];
        if (i < count - 1) cout << ", ";
    }
    cout << "\n";
}