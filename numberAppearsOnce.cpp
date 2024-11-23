#include<iostream>
#include<vector>



int getSingleElement(std::vector<int>&arr){
    int XOR=0;
    for(int i=0;i<arr.size();i++){
        XOR=XOR^arr[i];
    }
    return XOR; 
}


int main(){
    std::vector<int>arr={1,1,2,3,3};
    int result=getSingleElement(arr);
    std::cout<<result;
    return 0;
}