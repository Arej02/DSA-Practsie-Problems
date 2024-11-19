#include<iostream>
#include<stack>
void insert(std::stack<int>&s,int temp){
    if(s.size()==0 || s.top()>=temp){ //To reverse the array chnage the sign.
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}

void sortStack(std::stack<int>&s){
    if(s.size()==1) return;
    int temp=s.top();
    s.pop();
    sortStack(s);
    insert(s,temp);
}
void print(std::stack<int>&s){
    std::stack<int> tempStack=s;
    while(!tempStack.empty()){
        std::cout<<tempStack.top()<<" ";
        tempStack.pop();
    }
    std::cout<<std::endl;
}

int main(){
     std::stack<int> s;
    s.push(15);
    s.push(1);
    s.push(6);
    s.push(9);
    s.push(2);
    s.push(3);

    std::cout << "The original stack is: ";
    print(s);

    // Sort the stack
    sortStack(s);

    std::cout << "The sorted stack is: ";
    print(s);

    return 0;
    
}