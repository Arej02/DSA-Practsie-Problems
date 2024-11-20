
#include<iostream>
#include<vector>
std::vector<int>intersectionArray(std::vector<int>&arr1,
std::vector<int>&arr2){
    int i=0,j=0;
    int n=arr1.size();
    int m=arr2.size();
    std::vector<int>intersection;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return intersection;
}


int main() {
    
  std::vector < int > A {1,2,3,3,4,5,6,7};
  std::vector < int > B {3,3,4,4,5,8};

  std::vector<int> ans = intersectionArray(A,B);
  
  for (int i = 0; i < ans.size(); i++) {
    std::cout << ans[i] << " ";
  }

  return 0;
}