#include<iostream>
int main(){
    int array[50];
    int number;
    std::cout<<"How many elements do you need:";
    std::cin>>number;
    std::cout<<"Enter an array of number:";
    
    for(int i=0;i<number;i++){
        std::cin>>array[i];
    }
    std::cout<<"The array is: ";
    for(int i=0;i<number;i++){
        std::cout<<array[i]<<"\t";
    }

    return 0;
}