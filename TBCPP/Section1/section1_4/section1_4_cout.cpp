#include <iostream> //cout, cin, endl
#include <cstdio> //printf

int main_cout()
{
	//cout�� std��� �̸����� �ȿ� ����Ǿ� ����
	// <<�� stream�� �ǹ�   ���ϴ� ���� -> stream -> cout
	std::cout << "I love this lecture" << std::endl;
	
	int x = 1024;
	double pi = 3.141592;

	std::cout << "x is " << x << "\n"; //endl ��ſ� \n ��� ����
	std::cout << "pi is " << pi << std::endl;

	// \t�� �� ���� ����
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	//������ std�� ������ �ʾƵ� ��
	using namespace std;
	
	//audio(�Ҹ�)�� ���
	cout << "\a";

	return 0;
}