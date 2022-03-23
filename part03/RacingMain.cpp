#include "Car.h"

int main(void)
{
	char name[] = "run99";

	Car run99;
	run99.InitMembers(name, 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}