#include<iostream>
using namespace std;

class Stack{
    protected:
    int array[5];
    int top=-1;
    int number;
    int n=5;

    public:
    void push(int number);
    int pop();
    int topElement();
    int size();

};
