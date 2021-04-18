#include <iostream>

using namespace std;

//main문과 같은 값을 출력하지만 주소는 다름
//매개변수가 배열이 아니고 배열로 선언할 것이다라는 것을 알려줌
//배열을 통채로 가져오는 것이 아니라 배열의 첫번째 주소값만 복사함
//즉, 넘겨받은 배열의 첫번째 주소값을 저장하는 포인터 변수이다.
void printarray(int students_scores[20])
{
	cout << (int)&students_scores << endl; //19921452
	cout << (int)&students_scores[0] << endl; //19921664

	cout << (int)students_scores[0] << endl; //1
	cout << (int)students_scores[1] << endl; //2
	cout << (int)students_scores[2] << endl; //3

	//array가 아니라 포인터기 때문의 4의 size를 가짐
	cout << sizeof(students_scores) << endl; //4
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5, };

	//array변수 자체의 주소는 첫번째 요소의 주소와 같음
	cout << (int)&students_scores << endl; //19921664
	cout << (int)&students_scores[0] << endl; //19921664
	cout << (int)&students_scores[1] << endl; //19921668
	cout << (int)&students_scores[2] << endl; //19921672

	cout << (int)students_scores[0] << endl; //1
	cout << (int)students_scores[1] << endl; //2
	cout << (int)students_scores[2] << endl; //3

	cout << sizeof(students_scores) << endl; //80

	printarray(students_scores);

	return 0;
	
}