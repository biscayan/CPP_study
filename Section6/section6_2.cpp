#include <iostream>

using namespace std;

//main���� ���� ���� ��������� �ּҴ� �ٸ�
//�Ű������� �迭�� �ƴϰ� �迭�� ������ ���̴ٶ�� ���� �˷���
//�迭�� ��ä�� �������� ���� �ƴ϶� �迭�� ù��° �ּҰ��� ������
//��, �Ѱܹ��� �迭�� ù��° �ּҰ��� �����ϴ� ������ �����̴�.
void printarray(int students_scores[20])
{
	cout << (int)&students_scores << endl; //19921452
	cout << (int)&students_scores[0] << endl; //19921664

	cout << (int)students_scores[0] << endl; //1
	cout << (int)students_scores[1] << endl; //2
	cout << (int)students_scores[2] << endl; //3

	//array�� �ƴ϶� �����ͱ� ������ 4�� size�� ����
	cout << sizeof(students_scores) << endl; //4
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5, };

	//array���� ��ü�� �ּҴ� ù��° ����� �ּҿ� ����
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