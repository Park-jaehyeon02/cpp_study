#include <iostream>

int main(void)
{
	double val1;
	std::cout << "첫번째 숫자입력: ";
	std::cin >> val1;

	double val2;
	std::cout << "첫번째 숫자입력: ";
	std::cin >> val2;

	double result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;

	char str[100];
	std::cin >> str;
	std::cout << str;

	return 0;
}