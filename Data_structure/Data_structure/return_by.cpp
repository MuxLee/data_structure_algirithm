#include "turn_by_reference_const_type.hpp"


int main()
{
    Point p1(1, 2);
    Point p2(0, 1);
    //(p1 + p2)++;// ++�� const method�� �ƴϱ� ������ �Ұ��� ��.
    
    
    // ���� �����ڸ� ȣ����?
    (p1 + p2).get_point();
    // p1.operator+(p2)
    // debug mode�� ȣ���� ��, �Ѱ��� ȣ���ϴٺ��� ���� �����ڵ� ȣ����.
    // release�� compile�ϴ� ���� �۵���.
}