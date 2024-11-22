#include<iostream>
#include<vector>
void print(std::vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
}
int missingNumber(std::vector<int>&arr){
    int n=arr.size()+1;
    int sum=(n*(n+1))/2;
    int result=0;
    for(int i=0;i<arr.size();i++){
        result=result+arr[i];
    }
    int finalAns=(sum-result);
    return finalAns;
}

int main(){
    std::vector<int>arr={1,2,4,5};
    print(arr);
    int missing=missingNumber(arr);
    std::cout<<"The missing number is:"<<missing<<std::endl;
    return 0;
}