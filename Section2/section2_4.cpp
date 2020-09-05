
void my_function()
{

}

int main()
{
	int i = 123;
	float f = 123.456f;

	void *my_void;

	//데이터의 타입이 다르고 그 사이즈가 달라도 데이터의 주소를 표현하는 데이터양은 동일
	my_void = (void*)&i; //정수형 변수의 주소
	my_void = (void*)&f; //실수형 변수의 주소

	return 0;

}