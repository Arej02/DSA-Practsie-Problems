//Delete Middle element form stack

#include<iostream>
#include<stack>

void midDelete(std::stack<int>&s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    midDelete(s,k-1);
    s.push(temp);
}


int main() {
    std::stack<int> s;

    // Adding elements to the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int middle = (s.size() + 1) / 2;  // Calculate the middle index (1-based)
    midDelete(s, middle);

    // Print remaining elements in the stack
    std::cout << "Stack after deleting the middle element: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }

    return 0;
}