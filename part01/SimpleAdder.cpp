#include <iostream>

int main(void)
{
	double val1;
	std::cout << "ù��° �����Է�: ";
	std::cin >> val1;

	double val2;
	std::cout << "ù��° �����Է�: ";
	std::cin >> val2;

	double result = val1 + val2;
	std::cout << "�������: " << result << std::endl;

	char str[100];
	std::cin >> str;
	std::cout << str;

	return 0;
}