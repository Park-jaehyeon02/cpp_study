#include <iostream>


//��� C�� ��ũ�� �Լ�ó�� ���Ŀ� ������ �����ʴ°� �ƴϴ�.
//�̴� ���߿� ���ø��� �̿��� ������ �� �� �̴� ���� �����ϰ� ������ ���Ŀ� ��� ���ø��� Ȯ������
inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}