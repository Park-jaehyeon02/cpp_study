#include <iostream>


//사실 C의 매크로 함수처럼 형식에 영향을 받지않는건 아니다.
//이는 나중에 템플릿을 이용해 공부해 볼 것 이니 만약 공부하고 싶은면 이후에 배울 템플릿을 확인하자
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