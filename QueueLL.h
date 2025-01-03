#ifndef QUEUE_H
#define QUEUE_H

class Node{
    public:
    int data;
    Node*next;

    Node(int data);
};
class Queue{
    protected:
    int currentSize;
    Node*start;
    Node*end;

    public:
    Queue();
    void push(int data);
    int pop();
    int size();
    int top();
    
};


#endif