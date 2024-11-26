#include<iostream>
#include<vector>
#include<algorithm>

int longestSubArrayLength(std::vector<int>&arr,int k){
    int right=0;
    int left=0;
    int sum=arr[0];
    int maxLen=0;
    int n=arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxLen=std::max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
        

    }
    return maxLen;

}


int main(){
    std::vector<int>arr={1,2,3,1,1,1,4,5,3,6};
    int result=longestSubArrayLength(arr,6);
    std::cout<<result;
    return 0;
}