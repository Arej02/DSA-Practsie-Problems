#include<iostream>
using namespace std;

int main(){
    int array[50][50];
    int row,cols;
    xyz:cout<<"Enter the number of row:\n";
    cin>>row;
    cout<<"Enter the number of columns:\n";
    cin>>cols;
    if(row!=cols){
        cout<<"Invalid Inputs.We need a square matrix!\n";
        goto xyz;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<"Enter the elements in the matrix:\n";
            cin>>array[i][j];
        }
    }
    //Printing the matrix:
    cout<<"The matrix is:\n";
      for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
    //Printing the diagonal matrix:
    cout<<"The diagonal of the  matirx is:\n";
     cout<<"The matrix is:\n";
      for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                cout<<array[i][j]<<" ";
            } 
        }
    
    }
    return 0;
}