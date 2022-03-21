#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref)
{
	cout << ref << endl;
	ref++;
	return ref;
}


int main(void)
{
	int n1 = 1;
	int n2 = RefRetFuncOne(n1);

	n1 += 1;
	n2 += 100;
	cout << "n1 : " << n1 << endl;
	cout << "n2 : " << n2 << endl;

	return 0;
}