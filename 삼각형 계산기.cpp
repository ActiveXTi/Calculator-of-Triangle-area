#include <iostream> 
#include <cmath>

int main()
{
	int 밑변; //변수선언
	int 높이;
	std::cout << "원하시는 삼각형의 밑변의 길이를 0 이상의 수로 입력해 주세요." << std::endl; //메시지 출력
	std::cin >> 밑변; //입력하도록 지시
	std::cout << "원하시는 삼각형의 높이의 길이를 0 이상의 수로 입력해 주세요." << std::endl;
	std::cin >> 높이;

	std::cout << "삼각형의 넓이는 " << 밑변 * 높이 / 2 << " 입니다." << std::endl; //최종적으로 계산한값 출력
	std::cout << "참고: 소숫점 이하의 수는 버림 처리합니다." << std::endl;
	return 0;
}