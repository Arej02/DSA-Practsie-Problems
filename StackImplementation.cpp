#include "StackImplementation.h"

void Stack::push(int number){
    if(top>n-1){
        cout<<"The stack is full.";
    }
    else{
        top=top+1;
        array[top]=number;
    }

}
int Stack::pop(){
    if(top==-1){
        cout<<"The array is empty.";
        exit(1);
    }
    int value=array[top];
    top=top-1;
    return value;
}
int Stack::size(){
    return top+1;
}

int Stack::topElement(){
    return array[top];
}