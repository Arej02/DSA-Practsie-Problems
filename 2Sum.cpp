#include<iostream>
#include<vector>
#include<algorithm>

bool twoSum(std::vector<int>&arr,int target){
    int n=arr.size();
    int left=0,right=n-1;
    std::sort(arr.begin(),arr.end());
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return true;
        }else if(sum<target)left++;
        else right--;
    }
    return false;
}

int main() {
    std::vector<int> arr = {10, 15, 3, 7};
    int target = 17;
    
    if (twoSum(arr, target)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}