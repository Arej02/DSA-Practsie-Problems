#include<iostream>

int main(){
    int rows=3;
    int cols=4;
    int matrix[rows][cols]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    std::cout<<"The matrix is:"<<std::endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}