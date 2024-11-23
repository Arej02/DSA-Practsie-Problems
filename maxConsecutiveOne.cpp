#include<iostream>
#include<vector>
#include<algorithm>//For max


int maxOneCount(std::vector<int>&arr){
    int count=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count+=1;
            maxi=std::max(maxi,count);
        }else{
            count=0;
        }
    }
    return maxi;
}


int main(){
    std::vector<int>arr={1,1,0,1,1,1,0,1,1};
    int result=maxOneCount(arr);
    std::cout<<result;
    return 0;
}