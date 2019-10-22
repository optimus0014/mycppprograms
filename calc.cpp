#include<iostream>

using namespace std;

void no(int n){
	if(n<1){
		return;
		
	}
	else{
		cout<<n<<" ";
		no(n-1);
		cout<<n<<" ";
	}
}

int main(){
	int n=3;
	no(3);
}
