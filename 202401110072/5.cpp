//problem statement:area and perimenter of triangle
#include<iostream>
using namespace std;

class rect
{
	int length ,width;
	public:
	void input()
	{
		cout<<"Enter length and width of triangle: ";
		cin>>length>>width;	
	}
	void area()
	{
		cout<<"Area= "<<length*width<<endl;
	}
	void perimeter(){
		cout<<"Perimeter= "<<2*(length+width)<<endl;
	}
	
};
int main()
{
	rect obj;
	obj.input();
	obj.area();
	obj.perimeter();	
}
