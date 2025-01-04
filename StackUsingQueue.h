#ifndef STACKUSINGQUEUE_H
#define STACKUSINGQUEUE_H
#include<queue>
using namespace std;

class Stack{
    protected:
    queue<int>qt;
    int data;

    public:
    void push(int data);
    int pop();
    int top();
    int size();
};

#endif