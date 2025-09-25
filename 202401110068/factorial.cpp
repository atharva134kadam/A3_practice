#include<iostream>
using namespace std;
class fact{
	private:
		int n;
		int facto;
	public:
		int calculation(int n){
			facto=1;
			for(int i=1;i<n+1;i++){
				facto=facto*i;
			}
			return facto;
		}
		void display(){
			cout<<facto;
		}
		
};
int main(){
	fact obj;
	obj.calculation(4);
	obj.display();
}
