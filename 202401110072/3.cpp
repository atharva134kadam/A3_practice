//problem statement:find sum of array elemets
#include<iostream>
using namespace std;

class arraysum{
	int arr[50],n;
	public:
		void input()
		{
			cout<<"Enter array size:";
			cin>>n;
			cout<<"Enter elemetns:";
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
		void sum(){
			int s=0;
			for(int i=0;i<n;i++)
			{
				s+=arr[i];
			}
			cout<<"Sum of array elements= "<<s<<endl;
		}
};
int main()
{
	arraysum obj;
	obj.input();
	obj.sum();
}
