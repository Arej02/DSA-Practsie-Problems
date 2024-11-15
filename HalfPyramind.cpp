#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the size:"<<std::endl;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return 0;
}