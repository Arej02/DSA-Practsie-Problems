#include<iostream>
int main(){
    //Take limit from the user:
    int array[500],limit,s,flag=0;
    xyz:std::cout<<"Enter a limit:";
    std::cin>>limit;
    if(limit>500){
        std::cout<<"Please enter a limit less than 500"<<std::endl;
        goto xyz;
    }
    else{
        std::cout<<"Enter the elements in an array:"<<std::endl;
        for(int i=0;i<limit;i++){
            std::cin>>array[i];
        }
        std::cout<<"Enter a number for searching:"<<std::endl;
        std::cin>>s;
        flag=0;
        for(int i=0;i<limit;i++){
            if(array[i]==s){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        std::cout<<"Searching Success";
    }else{
        std::cout<<"The element does not exist in this array.";
    }
    return 0;

}