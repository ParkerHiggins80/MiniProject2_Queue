
#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int capacity; 
    int* queueArray;   
    int frontIndex;    
    int rearIndex;     
    int count;         

public:

    Queue(int cap = 10);
    ~Queue();

    void enqueue(int item);
    int dequeue();
    int front() const;
    bool isEmpty() const;
    bool isFull() const;
    int getSize() const;
    void clear();
    void print() const;
};

#endif