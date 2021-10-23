#include <iostream>
#include <memory>

using namespace std;

int getResult()
{
	return 100 * 100;
}

void doSomething(int& lref)
{
	cout << "L-value ref" << endl;
}

// parameter가 lref일 때와는 다른 함수라는 것을 인정해줌
void doSomething(int&& rref)
{
	cout << "R-value ref" << endl;
}

int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	// L-value reference 

	int& lr1 = x;			// modifiable l-value
	//int &lr2 = cx;		// Non-modifiable l-value
	//int &lr3 = 5;			// R-values

	const int& lr4 = x;		// modifiable l-value
	const int& lr5 = cx;	// Non-modifiable l-value
	const int& lr6 = 5;		// R-values

	// R-value references
	// 곧 사라질 것들을 reference, move되어도 문제 없는 것들
	
	//int &&rr1 = x;			// modifiable l-value
	//int &&rr2 = cx;			// Non-modifiable l-value
	int&& rr3 = 5;			    // R-values
	int&& rrr = getResult();

	cout << rr3 << endl; // 5 
	rr3 = 10;
	cout << rr3 << endl; // 10

	//const int &&rr4 = x;		// modifiable l-value
	//const int &&rr5 = cx;		// Non-modifiable l-value
	const int&& rr6 = 5;		// R-values

	// L/R-value reference parameter
	doSomething(x);
	//doSomething(cx);
	doSomething(5);
	doSomething(getResult());

	return 0;
}