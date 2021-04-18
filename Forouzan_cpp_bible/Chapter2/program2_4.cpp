#include <iostream>

using namespace std;

int main()
{
	//화폐당 금액
	const unsigned int pennyValue = 1;
	const unsigned int nickleValue = 5;
	const unsigned int dimeValue = 10;
	const unsigned int quarterValue = 25;
	const unsigned int dollarValue = 100;

	//화폐의 개수를 담을 변수 생성
	unsigned int pennies;
	unsigned int nickles;
	unsigned int dimes;
	unsigned int quarters;
	unsigned int dollars;

	//모든 화폐의 값을 담을 변수 생성
	unsigned int totalValue;

	//화폐의 개수를 입력받음
	cout << "페니의 수를 입력하세요 : ";
	cin >> pennies;

	cout << "니켈의 수를 입력하세요 : ";
	cin >> nickles;

	cout << "다임의 수를 입력하세요 : ";
	cin >> dimes;

	cout << "쿼터의 수를 입력하세요 : ";
	cin >> quarters;

	cout << "달러의 수를 입력하세요 : ";
	cin >> dollars;

	//전체 값 계산
	totalValue = pennyValue * pennies + nickleValue * nickles + dimeValue * dimes + 
					quarterValue * quarters + dollarValue * dollars;

	//전체 값 출력
	cout << "전체 값은 " << totalValue << " 페니입니다." << endl;

	return 0;
}