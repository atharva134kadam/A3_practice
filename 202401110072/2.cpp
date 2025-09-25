//problem statement:reverse a number
#include<iostream>
using namespace std;

class reversenumber
{
	int n;
	public:
		void input()
		{
			cout<<"Enter a number: ";
			cin>>n;
		}
		void reverse(){
			int rev=0,temp=n;
			while(temp>0){
				rev=rev*10+temp%10;
				temp/=10;
			}
			cout<<"reversed number= "<<rev<<endl;
		}
};
int main(){
	reversenumber obj;
	obj.input();
	obj.reverse();
}
