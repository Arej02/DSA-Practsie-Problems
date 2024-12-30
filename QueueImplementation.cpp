#include "QueueImplementation.h"

void Queue::push(int number){
    if(currentSize==maxSize){
        cout<<"The Queue is full.";
        return;
    }
    if(currentSize==0){
        start=0;
        end=0;
    }else{
        end=(end+1)%maxSize;
    }
    array[end]=number;
    currentSize++;
}

int Queue::pop(){
    if(currentSize==0){
        cout<<"The Queue is empty.";
        exit(1);
    }
    int value=array[start];
    if(currentSize==1){
        start=-1,end=-1;
    }else{
        start=(start+1)%maxSize;
    }
    currentSize--;
    return value;
}

int Queue::top(){
    if(currentSize==0){
        cout<<"Queue is empty.";
        exit(1);
    }
    return array[start];
}
int Queue::size(){
    return currentSize;
}