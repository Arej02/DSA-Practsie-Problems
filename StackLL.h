#ifndef STACKLL_H
#define STACKLL_H
class Node{
    public:
    int data;
    Node*next;
    Node(int d);

};

class Stack{
    private:
    int Stacksize;
    Node*Stacktop;

    public:
    Stack();
    void push(int data);
    void pop();
    int size();
    int top();
};

#endif