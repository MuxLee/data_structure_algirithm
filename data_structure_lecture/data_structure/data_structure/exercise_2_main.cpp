// ��͹����� ������ ����Ű�� �ʴ´�. function call overhead�� �ֱ� �����̴�.
// ��ʹ� stack�� ������ �׿��� ���� �ž� �ϴµ�, stack overflow�� �� �� �� �ִ�.
// ������ �ڵ��� ������ ������ recursive�� ����.

#include <iostream>
using namespace std;

int Fibonacci_recursive(int n);
int FIbonacci_non_recursive(int n);

//A. ��� ��������
int Fibonacci_recursive(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	return Fibonacci_recursive(n - 2) + Fibonacci_recursive(n - 1);
}

int FIbonacci_non_recursive(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;

	int before = 1, result = 2;
	for (int i = 3; i < n; i++)
	{
		int temp = result;
		result += before ;
		before = temp;
	}
	return result;
}


int main()
{
	cout << Fibonacci_recursive(10) << endl;
	cout << FIbonacci_non_recursive(10) << endl;
}