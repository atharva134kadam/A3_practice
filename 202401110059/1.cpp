/*Problem Statement: 1. Write a program to check whether a given number is perfect or not. */
#include<iostream>
using namespace std;
class PerfectNo {
	int n;
	public:
		void getNo(){
			cout<<"Enter a number: ";
			cin>>n;
		}
		void check(){
			int sum=0;
			for(int i=1;i <= n/2;i++){
				if(n%i==0)
					sum+=i;
			}
			if(sum==n){
				cout<<n<<" is a Perfect Number"<<endl;
			}
			else{
				cout<<n<<" is not a Perfect Number"<<endl;
			}
		}
		
};

int main(){
	PerfectNo obj;
	obj.getNo();
	obj.check();
	return 0;
	}

