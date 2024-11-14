#include<iostream>
#include<vector>
#include<climits>

int secondLargest(std::vector<int>& arr){
    if(arr.empty()){
        std::cout<<"The array is empty."<<std::endl;
        return -1;
    }
    if(arr.size()<2){
        std::cout<<"The array doesnot have two elemets"<<std::endl;
        return -1;
    }
    int largest=arr[0];
    int sLargest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];

        }else if(arr[i]<largest && arr[i]>sLargest ){
            sLargest=arr[i];
        }
    }
    //If the array doesnot have a distinct second element
    if(sLargest==INT_MIN){
        std::cout<<"There is no distict second largest element."<<std::endl;
        return -1;
    }
    return sLargest;
}
int main(){
    std::vector<int> arr={1,6,9,5,10,21};
    int sLargest=secondLargest(arr);
    if(sLargest!=-1){
        std::cout<<"The second largest element is:"<<sLargest<<std::endl;
    }
    return 0;
}