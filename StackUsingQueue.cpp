#include "StackUsingQueue.h"

void Stack::push(int data){
    qt.push(data);
    for(int i=0;i<qt.size();i++){
        qt.push(top());
        qt.pop();
    }
}
int Stack::pop(){
    int n=qt.front();
    pop();
    return n;
}
int Stack::top(){
    return qt.front();
}
int Stack::size(){
    return qt.size();
}