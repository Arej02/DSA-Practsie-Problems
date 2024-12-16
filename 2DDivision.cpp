#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>firstArray;
    vector<vector<int>>secondArray;
    vector<vector<int>>divisionArray;

    int cols,rows;
    cout<<"\nEnter the number of rows:";
    cin>>rows;
    cout<<"\nEnter the number of columns:";
    cin>>cols;
    firstArray.resize(rows, vector<int>(cols));
    secondArray.resize(rows, vector<int>(cols));
    divisionArray.resize(rows, vector<int>(cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"\nEnter the elements for first array:";
            cin>>firstArray[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"\nEnter the elements for second array:";
            cin>>secondArray[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            divisionArray[i][j]=firstArray[i][j]/secondArray[i][j];
        }
    }
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<divisionArray[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}