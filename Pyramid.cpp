#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the size:"<<std::endl;
    std::cin>>n;
    int m=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m-1;j++){
            std::cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            std::cout<<"*";
        }
        m--;
        std::cout<<std::endl;
    }
    return 0;
}