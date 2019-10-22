#include<iostream>
using namespace std;

void pypatr(int n){
	for(int i=0; i<=n; i++){
		for(int j=0; j<=i; j++){
			cout<<"*";
		}cout<<"\n";
	}
}

int main(){
	int n;
	cin>>n;
	pypatr(n);
	return 0;
	
}
