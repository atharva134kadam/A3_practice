#include<iostream>
using namespace std;
class fab{
	private:
		int n, t1 = 0, t2 = 1, nextTerm;
	public:
		int fabnaci(int n){
			cout << "Enter the number of terms: ";
    		cin >> n;

    		cout << "Fibonacci Series: ";

    		for (int i = 1; i <= n; ++i) {
       	 		 cout << t1 << " ";
        		nextTerm = t1 + t2; // sum of previous two terms
       			t1 = t2;
        		t2 = nextTerm;
    	}
    	
			}
};
int main(){
	fab obj;
	obj.fabnaci(5);
}
