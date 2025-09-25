//problem statement:area and circumference of circle
#include<iostream>
using namespace std;

class circle{
	float radius;
	public:
		void input()
		{
			cout<<"Enter radius: ";
			cin>>radius;
		}
		void area()
		{
			cout<<"Area= "<<3.14*radius*radius<<endl;
		}
		void circum()
		{
			cout<<"Circumference= "<<2*3.14*radius<<endl;
		}
};
int main()
{
	circle obj;
	obj.input();
	obj.area();
	obj.circum();	
}
