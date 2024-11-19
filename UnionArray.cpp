#include<iostream>
#include<vector>

void print(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

std::vector<int> UnionArray(std::vector<int>&arr1,std::vector<int>&arr2){
    int i=0,j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    std::vector<int>unionArr;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(unionArr.empty() || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
        i++;
        }else if(arr1[i]>arr2[j]){
            if(unionArr.empty() || unionArr.back()!=arr2[j] ){
                unionArr.push_back(arr2[j]);
            }
            j++;
            }else{  
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while(i<n1 ){
        if(unionArr.empty() || unionArr.back()!=arr1[i]){
            unionArr.push_back(arr1[i]);
            }
            i++;
    }
     while(j<n2 ){
        if(unionArr.empty() || unionArr.back()!=arr2[j]){
            unionArr.push_back(arr2[j]);
            }
            j++;
    }
    return unionArr;
}
int main(){
    std::vector<int>arr1={1,2,3,4,5,5,6};
    std::vector<int>arr2={3,4,5,8,9};
    std::cout<<"The original array are:"<<std::endl;
    print(arr1);
    std::cout<<std::endl;
    print(arr2);

    std::vector<int>result=UnionArray(arr1,arr2);
    std::cout<<"The union array is:"<<std::endl;
    print(result);
   

    return 0;
}