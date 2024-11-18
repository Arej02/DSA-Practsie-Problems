//Removes Duplicate Elements from an sorted Array:
#include<iostream>
#include<vector>

void removeDuplicte(std::vector<int>&arr){
    int i=0;
       for(int j=0;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int k=i+1;k<arr.size();k++){
            arr[k]=0;
    }
  
    
}
void print(std::vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
 
}
int main(){
    std::vector<int>arr={1,2,2,3,3,3,4};
    std::cout<<"The original array is:"<<std::endl;
    print(arr);

    std::cout<<std::endl;

    removeDuplicte(arr);
    std::cout<<"The array without duplicates is:"<<std::endl;
    print(arr);
    return 0;
}