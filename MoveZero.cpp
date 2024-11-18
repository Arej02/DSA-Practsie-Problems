//Moves the Zero to the end:
#include<iostream>
#include<vector>

void moveZero(std::vector<int>&arr){
    int j=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    
    
}
void print(std::vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
 
}
int main(){
    std::vector<int>arr={0, 1, 2, 0, 3, 4, 0, 5};
    std::cout<<"The original array is:"<<std::endl;
    print(arr);

    std::cout<<std::endl;

    moveZero(arr);

    std::cout<<"The array zeros at the end is:"<<std::endl;
    print(arr);
    return 0;
}