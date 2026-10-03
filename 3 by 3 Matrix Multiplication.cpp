#include<iostream>
using namespace std;
int main(){
    int matrix1[3][3], matrix2[3][3], mul[3][3]={0};
    cout<<"Enter numbers for matrix 1:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter numbers for matrix 2:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        	for(int k=0;k<3;k++){
            mul[i][j]+=matrix1[i][k]*matrix2[k][j];
			}
        }
    }
    cout<<"Multiplication of matrices is:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mul[i][j]<<"\t"; 
        }
        cout<<endl; 
    }
    return 0;
}


