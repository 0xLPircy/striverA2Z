#include<iostream>
using namespace std;

int main() {
	// Write your code here
		int n;
	cin>>n;
	int even=0, odd=0;
	while(n>0){
		int cur = n%10;
		if (cur%2==0){
			even += cur;
		} else{
			odd += cur;
		}
		n = (n - n%10)/10;
	}
	cout<<even<<" "<<odd;	
}
