#include <iostream>
int main()
{
	using namespace std;
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};
	double *pw = wages;
	short *ps = &stacks[0];
	
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "add 1 to the pw pointer:\n";
	pw = pw + 1;
	cout << "pw = " << pw << ", *pw = " << *pw << endl << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	cout << "add 1 to the ps pointer:\n";
	ps = ps + 1;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	
	cout << "access two elements with array notation\n"
	     << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] 
	     << endl;
	cout << "access two elements with array notation\n"
	     << "ps[0] = " << ps[0] << ", ps[1] = " << ps[1] 
	     << endl;
	cout << "access two elements with pointer notation\n"
	     << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1)  
	     << endl;
	cout << "access two elements with pointer notation\n"
	     << "*ps = " << *ps << ", *(ps + 1) = " << *(ps + 1)  
	     << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";

	int *p;
	cout << sizeof(p);
	return 0;

}