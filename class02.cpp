#include<iostream>
#include <string.h>
using namespace std;

class Student{
	int sid;	//instance data
	char sname[20];
	static int coll_code;	//class data - 046
	static char coll_name[20];
	public:
		void setdata(int id,char nm[20]) // instance function/methodz
		{
			sid = id;
			strcpy(sname,nm);
		}
		
		void getdata()
		{
			cout << "Sid = " << sid << endl;
			cout << "Sname =" << sname << endl;
			cout << "Coll_code =" << coll_code << endl;
			cout << "Coll_name =" << coll_name << endl;
			}	
};

int Student::coll_code = 046;
char Student::coll_name[20]= "MPEC";

int main()
{
	Student s1,s2;
	s1.setdata(101,"Naitik");
	s1.getdata();
	return 0;
}
