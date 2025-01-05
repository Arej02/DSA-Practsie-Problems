#include<iostream>
#include<string>
#include<stack>
using namespace std;

int priority(char ch){
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3; 
    return 0; 

}

void infixToPostfix(string s){
    stack<char>st;
    string answer;
    int i=0;
    int n=s.length();
    while(i<n){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            answer+=s[i];
        }
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                answer+=st.top();
                st.pop();
            }
            st.pop(); 
        }
        else{
            while(!st.empty() && priority(s[i])<=priority(st.top())){
                answer+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()){
        answer+=st.top();
        st.pop();
    }
    cout<<"Postfix expression:"<<answer<<endl;

}

int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    return 0;
}