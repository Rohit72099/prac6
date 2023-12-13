#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	int sum=0;
	for(int i=0;i<t;i++){
//		int n;
		cin>>n;
//		int sum=0;
		for(int j=1;j<n;j++){
			if(j%3==0 || j%5==0){
			
//					sum+=j;
//					cout<<j;
				
//				cout<<j<<" ";
				sum+=j;
				
			}		
			
		}
//		cout<<sum;
	}
	cout<<sum;
}
