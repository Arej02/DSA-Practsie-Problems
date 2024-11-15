#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the size:"<<std::endl;
    std::cin>>n;
    char ch;
    for(int i=1;i<=n;i++){
        ch='A';
        for(int j=1;j<=i;j++){
            std::cout<<ch;
            ch++;
        }
        std::cout<<std::endl;
    }
    return 0;
}