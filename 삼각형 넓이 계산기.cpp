#include <iostream> 
#include <cmath>

int main()
{
	double 밑변; //변수선언
	double 높이;
	std::cout << "삼각형의 넓이 계산기 Made By ActiveX" << std::endl;
	std::cout << std::endl;
	std::cout << "지금부터 삼각형의 넓이를 계산해 보겠습니다." << std::endl;
	std::cout << "입력 후에는 엔터를 눌려 주세요." << std::endl;
	std::cout << std::endl;

	std::cout << "원하시는 삼각형의 밑변의 길이를 입력해 주세요." << std::endl; //메시지 출력
	std::cin >> 밑변; //입력하도록 지시
	std::cout << "원하시는 삼각형의 높이의 길이를 입력해 주세요." << std::endl;
	std::cin >> 높이;
	std::cout << "삼각형의 넓이는 " << 밑변 * 높이 / 2 << " 입니다." << std::endl; //최종적으로 계산한값 출력
	return 0;
}
