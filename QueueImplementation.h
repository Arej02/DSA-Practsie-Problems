#include<iostream>
using namespace std;

class Queue{
    protected:
    int start=-1,end=-1;
    int array[5];
    int currentSize=0;
    int maxSize=5;

    public:
    void push(int number);
    int pop();
    int top();
    int size();

};