#include<iostream>
#include<vector>

std::vector<int> getConcatenation(std::vector<int>&arr){
    std::vector<int>ans(2*arr.size());
    int n=arr.size();
    for(int i=0;i<n;i++){
        ans[i]=arr[i];
        ans[i+n]=arr[i];  
    }
    return ans;
}
int main() {
    std::vector<int> arr = {1, 2, 3};
    std::vector<int> result = getConcatenation(arr);

    for (int val : result) {
        std::cout << val << " ";
    }
    return 0;
}