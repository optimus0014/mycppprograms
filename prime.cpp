#include<iostream>
using namespace std;

int main(){
	int a,n,i;
	cout<<"enter day no u want to check"<<endl;
	cin>>a;
	int flag;
	int m=a/2;
	for(i=2; i<=m; i++){
		if(a%i==0){
			flag=0;
			break;
		}
		
		
	}
	if(flag==0){
		cout<<" no. is not a prime"<<endl;
	}else 
	cout<<" it's a prime no."<<endl;
	
	return 0;
}
