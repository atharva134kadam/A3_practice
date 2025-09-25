/*Problem Statement: 2. Write a program to take the name and marks of students and print the details of the student with the highest marks. */
#include<iostream>
using namespace std;
class Student { 
	public:
		string name;
		int marks;
		void getData(){
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Marks: ";
			cin>>marks;
		}
};
int main(){
	int n;
	cout<<"Enter no of Student: ";
	cin>>n;
	
	Student s, top;
	top.marks=-1;
	for(int i=0;i<n;i++){
	s.getData();
	if(s.marks > top.marks)
		top=s;
}
cout<<"\n Student with Highest Marks: \n"<<endl;
cout<<"Name :"<<top.name<<endl;
cout<<"Marks: "<<top.marks<<endl;
return 0;
}

