#include<iostream>
#include<vector>

bool SortedArray(std::vector<int>& arr){

    for(int i=1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]){
            
        }else{
            return false;
        }
    }
    return true; 
}
int main(){
    std::vector<int>arr1={1,2,2,4,5};
    bool sorted=SortedArray(arr1);
    if(sorted){
        std::cout<<"The array is sorted"<<std::endl;
    }else{
        std::cout<<"The array is not sorted"<<std::endl;
    }


    std::vector<int>arr2={1,2,7,4,5};
    bool sorted1=SortedArray(arr2);
    if(sorted1){
        std::cout<<"The array is sorted"<<std::endl;
    }else{
        std::cout<<"The array is not sorted"<<std::endl;
    }

    std::vector<int>arr3={1,2,3,4,5};
    bool sorted2=SortedArray(arr3);
    if(sorted2){
        std::cout<<"The array is sorted"<<std::endl;
    }else{
        std::cout<<"The array is not sorted"<<std::endl;
    }

    return 0;
}