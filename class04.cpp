#include <iostream>
using namespace std;
class SS
{
	public :
		void ns()
		{
			cout << "Non static method";
		}
		
		static void sm()
		{
			cout << "\nStatic Method";
		}
};

int main()
{
	SS obj;
	obj.ns();
	obj::sm();	
	return 0;
}
