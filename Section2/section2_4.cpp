
void my_function()
{

}

int main()
{
	int i = 123;
	float f = 123.456f;

	void *my_void;

	//�������� Ÿ���� �ٸ��� �� ����� �޶� �������� �ּҸ� ǥ���ϴ� �����;��� ����
	my_void = (void*)&i; //������ ������ �ּ�
	my_void = (void*)&f; //�Ǽ��� ������ �ּ�

	return 0;

}