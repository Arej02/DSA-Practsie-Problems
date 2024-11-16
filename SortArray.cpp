#include<iostream>
#include<vector>

void insertArray(std::vector<int>&arr,int temp){
    if(arr.size()==0 || arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return;
    }
    int value=arr[arr.size()-1];
    arr.pop_back();
    insertArray(arr,temp);
    arr.push_back(value);

    return;

}

void sortArray(std::vector<int>& arr){
    if(arr.size()==0)
    return;
    int temp=arr[arr.size()-1];
    arr.pop_back();
    sortArray(arr);
    insertArray(arr,temp);
}
void print(std::vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    std::vector<int>arr={15,1,6,9,2,3};
    std::cout<<"The original array is:";
    print(arr);
    std::cout<<std::endl;
    sortArray(arr);
    std::cout<<"The sorted array is:";
    print(arr);
    return 0;
}