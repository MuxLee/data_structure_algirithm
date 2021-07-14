#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
// linked list(dynamic allocation) vs sequential list(array)
// �ڷ���� �ߺ��� ����ؼ�,�޸� �������� ������ �̾��� ����.
// ADT : ��� ����.
// method(���)�� ������. �׷��ٺ���, �̷��� �ڷᱸ���� ����.
// ����� �����ϰ�, �����ض�. method�� ����� ��, structure class�� ������.

typedef struct List {
	int current_index;
	int list_size; // end index.
	int buffer[50];
} List;

typedef struct Point {
	int x;
	int y;
} Point;


// List�� type�� ����.
// LData�� type�� -> �ȿ� ����� data type, template ���� �ͳ�...
// LData�� int���̶�.

// initialize, constructor
void listInit(List* plist);

// insert data to plist's current index
void insert(List* plist, int* data);

// data save, list��, data��
bool beginValue(List* plist, int* data);

// move current index to next index
bool nextValue(List* plist, int* data);

// lremove : ���� �ִ� iterator�� ���� �����Ѵ�.
int listRemove(List* plist);

// lcount : ���� ����Ǿ� �ִ� ���� ��ȯ
int listCount(List* const count);

void printList(List* const plist);

int main()
{
	Point ppos;

	List student_scores;
	listInit(&student_scores);
	
	for (int i = 0; i < 10; i++)
		insert(&student_scores, &i);
	
	printList(&student_scores);
	int ptr_f = 151;
	int* temp_test = &ptr_f;//1563; //PE file�� �ִ� read only memory�� �ٲ� �� ������..
	nextValue(&student_scores, temp_test);
	nextValue(&student_scores, temp_test);
	printList(&student_scores);
	listRemove(&student_scores);
	printList(&student_scores);
	return 0;
}

void listInit(List* plist)
{
	*(plist->buffer);
	plist->current_index = 0;
	plist->list_size = 0;
}

void insert(List* plist, int* data) //append�� �����ؾ���.
{
	//assert(/*buffer over flow*/ plist->buffer < plist->list_size); // test code ���� ���� ����.
	//plist->current_index++;
	plist->buffer[plist->list_size] = *data;
	plist->list_size++;
	//plist->buffer[plist->current_index] = &data;
	
}

bool beginValue(List* plist, int* data) //vector�� iterator�� start
{
	plist->current_index = 0;
	*data = plist->buffer[plist->current_index];
	if (plist->current_index > plist->list_size)
		return false;
	else
		return true;
}

bool nextValue(List* plist, int* data)
{
	*data = plist->buffer[plist->current_index];
	printf("current index = %d\n", ++plist->current_index);
	if (plist->current_index > plist->list_size)
		return false;
	else
		return true;
}

// lremove : ���� �ִ� iterator�� ���� �����Ѵ�.
int listRemove(List* plist)
{
	int move_index   = plist->current_index;
	int rmoved_value = plist->buffer[move_index];
	int last_index   = plist->list_size - 1;

	for (move_index; move_index < last_index; move_index++)
		plist->buffer[move_index] = plist->buffer[move_index + 1];
	plist->list_size--;
	plist->current_index--;
	return plist->current_index;
}

// lcount : ���� ����Ǿ� �ִ� ���� ��ȯ
int listCount(List* const plist);


void printList(List* const plist)
{
	int lenth = plist->list_size;
	for (int i = 0; i < lenth; i++)
		printf("%d\n", plist->buffer[i]);
}
