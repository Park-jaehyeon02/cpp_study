#include "CarInline.h"

int main(void)
{
	Car run99;
	char name[] = "run99";
	run99.InitMembers(name, 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;

}