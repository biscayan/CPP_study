#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

struct Rectangle
{
	int length;
	int width;
};

int main()
{
	int one_student_score; //1 variable
	int student_scores[5]; //5 integers

	one_student_score = 100;
	
	student_scores[0] = 100; //0 index의 element
	student_scores[1] = 80;
	student_scores[2] = 90;
	student_scores[3] = 50;
	student_scores[4] = 0;

	cout << sizeof(one_student_score) << endl; //4bytes
	cout << sizeof(student_scores) << endl; //20bytes

	for (int i = 0; i <= 4; i++)
	{
		cout << student_scores[i] << endl;
	}
	
	Rectangle rect_array[10];

	rect_array[0].length = 1;
	rect_array[0].width = 2;

	cout << rect_array[0].length << endl; //1

	int my_array[5] = { 1,2,3,4,5 };
	//int my_array[] = { 1,2,3,4,5 }; //요소 개수를 안넣어줘도 됨
	
	cout << my_array[1] << endl; //2

	//fixed size array
	int students_scores[NUM_STUDENTS]; 

	const int num_students = 3;
	int students_scores2[num_students];

	return 0;
}