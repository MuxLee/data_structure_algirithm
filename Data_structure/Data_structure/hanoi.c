#include <stdio.h>

void reculsive_example(int called_num)
{
	// end condition 
	if (called_num > 3)
		return;
	called_num++;

	printf("%d \n", called_num);
	reculsive_example(called_num);
	printf("%d end\n", called_num);
}


int factorial(int num)
{
	// end condition
	if( num == 0 )
		return 1;

	// error occur
	if( num < 0 )
		return -1;

	// 
	return num * factorial(num - 1);
}


int fibonacci(int index)
{
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;

	return fibonacci(index - 1) + fibonacci(index - 2);
}



int getMidum(int first_index, int last_index)
{
	int medium = (first_index + last_index) / 2;
	return 0;
}


// range_len�� ���� �ʿ� ����. pointer�� arr�� ũ�⸦ ���� ���� �ʱ� ������ ����.
// ������ ������ index�� �޴� �������� last index + 1�� size�� ��.
// int const range_len,
int binarySearch(int* const sorted_range, 
	             int const target,
	             int first_index, int last_index)
{
	// error
	if (first_index > last_index)
		return -1;
	
	int medium_index = (first_index + last_index) / 2;
	int medium_val = sorted_range[medium_index];
	
	if (medium_val == target)
		return medium_index;

	//else�� ���� ������ �ڿ� �� ���� ����. �ƴϸ�, binarySearch �տ� return�� ������!
	else if (medium_val < target)
		return binarySearch(sorted_range, target, /*first_index =*/medium_index + 1, last_index);
	
	else if (medium_val > target)
	    return binarySearch(sorted_range, target, first_index, /*last_index =*/ medium_index - 1);
}


void hanoi(int stack_size, int const from_stack, char const temporal_stack, char const to_stack)
{
	//global variable should be formated constant
	/*int static to_stack_size = 0;
	if (stack_size == to_stack_size)
		return;*/

	//stack size�� 1�� �� ������ �ݺ���.
	if (stack_size == 1)
	{
		printf("%d��° ���� %c���� %c��. \n", stack_size, from_stack, to_stack);
	}
	else // ������ �ٲٸ� �ȵ�? �ʹ� �߻����ΰ� �ƴѰ�?
	{// �� �Ʒ� �ϳ��� Ÿ���� �ű�� ���ؼ��� ���� �ϳ��� Ÿ������ ġ������. 
	 // stack�� 1�� �ɶ����� ���� Ÿ���� ã��.
		hanoi(stack_size - 1, from_stack, to_stack, temporal_stack);
		printf("%d��° ���� %c���� %c��. \n", stack_size, from_stack, to_stack);
		hanoi(stack_size - 1, temporal_stack, from_stack, to_stack);
	}
}
