#include <iostream>

using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true: " << endl;
	cout << "false" << endl;

	while (true) 
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof True: " << sizeof(true) << endl;
	cout << "sizeof False: " << sizeof(false) << endl;

	return 0;
}