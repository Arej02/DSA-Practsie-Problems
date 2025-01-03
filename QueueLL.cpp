#include<iostream>
using namespace std;

#include "QueueLL.h"

Node::Node(int data){
    this->data=data;
    next=nullptr;
}

Queue::Queue(){
    start=nullptr;
    end=nullptr;
    currentSize=0;
}

void Queue::push(int data){
    Node*newNode=new Node(data);
    if(start==nullptr){
        start=end=newNode;
    }
    else{
        end->next=newNode;
        end=newNode;
        
    } 
    currentSize++;
}
int Queue::pop(){
    if(start==NULL) {
        cout<<"The Queue is empty";
        return -1;
    }
    Node*temp=start;
    start=start->next;
    int val=temp->data;
    currentSize-=1;;
    delete temp;
    if(start==nullptr){
        end=nullptr;
    }
    return val;
}
int Queue::top(){
    if(start==NULL){
        cout<<"The Queue is empty";
        return -1;
    }
    return start->data;
}
int Queue::size(){
    return currentSize;
}
   