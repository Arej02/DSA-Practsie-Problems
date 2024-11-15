#include <iostream>
#include <vector>
//Roatate the array by 1 or by x in left direction
void leftRoatatebyone(std::vector<int>&arr){
    int temp=arr[0];
    for(int i=0;i<arr.size()-1;i++){
        arr[i]=arr[i+1];
    }
    arr[arr.size()-1]=temp;
}

void leftRoatatebyx(std::vector<int>&arr,int x){
    x=x%arr.size();
    std::vector<int>temp(x);
    //Copy x elements to temp
    for(int i=0;i<x;i++){
        temp[i]=arr[i];
    }
    //Move the elements by x
    for(int i=x;i<arr.size();i++){
        arr[i-x]=arr[i];
    }
    //Put the temp back to array
    for(int i=0;i<x;i++){
        arr[arr.size()-x+i]=temp[i];
    }

}
void print(std::vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    std::vector<int>arr={1,2,3,4,5,6};
    std::cout<<"The original array is:"<<std::endl;
    print(arr);

    leftRoatatebyx(arr,3);
    std::cout<<"The left rotated array is:";
    print(arr);
    return 0;

}