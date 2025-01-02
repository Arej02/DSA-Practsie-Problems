#include "StackLL.h"
#include<iostream>
using namespace std;

Node::Node(int d){
    data=d;
    next=nullptr;
}

Stack::Stack() {
    Stacktop=nullptr;
    Stacksize=0;
}

void Stack::push(int data){
    Node*newNode=new Node(data);
    newNode->next=Stacktop;
    Stacktop=newNode;
    Stacksize++;
}

void Stack::pop(){
    if(Stacktop==NULL){
        return;
    }
    Node*temp=Stacktop;
    Stacktop=Stacktop->next;
    delete temp;
    Stacksize--;
}
int Stack::size(){
    return Stacksize;
}
int Stack::top(){
    if(Stacktop==NULL){
        return;
    }
    return Stacktop->data;
}