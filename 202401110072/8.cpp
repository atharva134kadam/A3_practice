//problem statement:find sum of first n natural number using recursion
#include <iostream>
using namespace std;

int sumnatural(int n)
{
	if(n==0)
		return 0;
	return n+sumnatural(n-1);
}
int main()
{
	int n;
	cout<<"Enter a positive integer: ";
	cin>>n;
	
	cout<<"Sum of first "<<n<<" natural number is"<<sumnatural(n)<<endl;
	return 0;
}
