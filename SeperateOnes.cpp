#include<iostream>
#include<vector>

void separateZeroOne(std::vector<int>&arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }else if(arr[end]==1){
                end--;
            }
        else{
            int temp=arr[end];
            arr[end]=arr[start];
            arr[start]=temp;
            start++;
            end++;
        }
    }

}
void print(std::vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
}

