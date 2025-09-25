//problem statement:count frequency of am element in an array
#include<iostream>
using namespace std;

class freq{
	int arr[50],x,n;
	public:
		void input(){
			cout<<"enter size of array:";
			cin>>n;
			cout<<"Enter elemetns";
			for(int i=0;i<n;i++)
				{
				cin>>arr[i];
				}
			cout<<"Enter elemtent to be searched:";
			cin>> x;
			}
		void freqcount()
		{
			
		int count=0;
		for(int i=0;i<n;i++){
			if(arr[i]==x)count++;
		}
		cout<<"Frequency of "<<x<<" = "<<count<<endl;
		}
};
int main(){
	freq obj;
	obj.input();
	obj.freqcount();
}
