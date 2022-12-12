#include<iostream>

using namespace std;

int main(){
	int a, b;
	cin>>a;
	cin>>b;
	
	while(a!=b){
		while(a>b){
			a=a-b;
		}
		
		while(a<b){
			b=b-a;
		}
	}
	cout<<a;
	
	
}
