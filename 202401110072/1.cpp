//problem statement:Count digits in a number
#include<iostream>
using namespace std;
class digitcounter
{
	int n;
	public:
		void input(){
		cout<<"Enter a number";
		cin>>n;
	}
	
	void countdigit()
	{
		int count=0,temp=n;
		if(temp==0)count=1;
		while(temp>0){
			count++;
			temp/=10;
		}
		cout<<"Number of digits= "<<count<<endl;
	}
};
int main()
{
	digitcounter obj;
	obj.input();
	obj.countdigit();
}
