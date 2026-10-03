#include<iostream>
using namespace std;
int main(){
	int n,loc=-1;
	int arr[5]={1,2,3,4,5};
	cout<<"Enter any value: ";
	cin>>n;
	for(int i=0;i<=4;i++){
		if(arr[i]==n){
		loc=i+1;
	    }
	}
	if(loc==-1){
	cout<<"Value not found";
    }
	else{
	cout<<"Values of Index is: "<<loc;
    }
}

