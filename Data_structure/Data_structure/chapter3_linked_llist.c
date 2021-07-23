// 2���� ���� node���� ����� �̵��� �����Ѵ�.
// STL�� �ڷᱸ���� ������ ���°� ȿ�������� �ʳ�?
// �׳� ���丸 �˰� ���� �� �� �˸� �Ǵ� �� �ƴѰ�?

#include <stdio.h>
#include <Windows.h>
#include <assert.h>

// 2D point type
typedef struct Coordinate2D {
    int x_;
    int y_;
}Coordinate2D;

// 
typedef struct node {
    Coordinate2D* p_coordinate;
    struct node* p_next_node;
}Node;

// 
typedef struct LinkedList {
    Node *p_current_node;
    Node *p_header_node;
}LinkedList;

// pointer�� return �Ϸ���, const�� ����� return �� �� ���� �ʳ�?
// �̰��� const�� ������ � ��������..
// malloc���� �ִ� ������ heep memory�� �����Ƿ�, return�ص� �������� �ʴ±�.
// literal�� �Լ� stack�� ������� �����Ƿ�, char* name = "blabla" return �ص� �Ǵ� ��!
// literal�� dynamic allocated pointer�� return�ص� ��.
Node* NodeConstructor(const int x, const int y)
{
    Node*         const p_new_node   = (Node*)malloc(sizeof(Node));
    Coordinate2D* const p_2d         = (Coordinate2D*)malloc(sizeof(Coordinate2D));
    
    assert(p_new_node != NULL);
    assert(p_2d       != NULL);

    p_new_node->p_coordinate = p_2d;
    p_new_node->p_coordinate->x_ = x;
    p_new_node->p_coordinate->y_ = y;
    p_new_node->p_next_node = NULL;

    return p_new_node;
}

// 
void ListInit(LinkedList* list)
{
    Node* p_dummy_node = NodeConstructor(/*x = */0, /*y = */ 0);
    list->p_current_node = NULL;
    list->p_header_node = p_dummy_node;
}

// x�� �������� 
// y�� ��������


void PrintList(LinkedList* list)
{
    list->p_current_node = list->p_header_node;
    while (list->p_current_node != NULL)
    {
        printf("x coordinate : %d \n", list->p_current_node->p_coordinate->x_);
        printf("y coordinate : %d \n", list->p_current_node->p_coordinate->y_);
        printf("               | \n");
        printf("               V \n");
        list->p_current_node = list->p_current_node->p_next_node;
    };
    printf("             NULL\n\n");
}

// dumy�� ������ �� �ƴ�? dumpy ������ ������ �ǳ�.
void AppendFront(LinkedList* list, Node* node)
{
    node->p_next_node = list->p_header_node->p_next_node;
    list->p_header_node->p_next_node = node;
}

void Insert();


void DeleteList(LinkedList* list)
{
    list->p_current_node = list->p_header_node;
    while (list->p_current_node != NULL)
    {
        Node* p_delete_node  = list->p_current_node;
        list->p_current_node = list->p_current_node->p_next_node;
        free(p_delete_node->p_coordinate);
        free(p_delete_node);
    };
}


int main()
{
    LinkedList coordinate_list; // ���� �̷��� format�� �ؾ� �ϴ����� �ǹ�,
    ListInit(&coordinate_list); // constructor�� ������ ��, format�ؼ� return ���ָ� �� ��? Time_T ó��.
    PrintList(&coordinate_list);
    Node* new_nodes[5];
    Node* p_new_node = NodeConstructor(1, 6);
    AppendFront(&coordinate_list, p_new_node);
    PrintList(&coordinate_list);
    DeleteList(&coordinate_list);
    return 0;
}