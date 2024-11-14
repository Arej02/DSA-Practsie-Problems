#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int>&arr){
    if(arr.empty()){
        cout<<"The array is empty"<<endl;
        return -1;
    }
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

