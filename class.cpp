#include<iostream>
using namespace std;

class a{
	int a,b;
	static int c,d;
	public:
		void nsm(int x,int y)
		{
			a = x;
			b = y;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			cout << "c = " << c << endl;
			cout << "d = " << d << endl;
		}
		static void sm()
		{
			cout<<"c ="<<c<<endl;
		}
};
int a::c = 30;
int a::d = 40;
int main(){
	a::sm();
	return 0;
}
