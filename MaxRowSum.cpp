#include <iostream>
#include<climits>
using namespace std;
int findMax(int matrix[2][3]){
    
    int maxSum=INT_MIN;
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=matrix[i][j];
        }
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}

int main() {
    int matrix[2][3]={{1,2,3},{4,5,6}};
    int result=findMax(matrix);
    cout<<result;
    return 0;
}