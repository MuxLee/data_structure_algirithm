#include "turn_by_reference_const_type.hpp"
#include <iostream>
#include <string>

int wmain(int argc, char* argv[])
{
    int a = 1, b = 2;
    int c = a + b;
    Point p1(1, 2);
    Point p2(0, 1);
    //(p1 + p2)++;// ++�� const method�� �ƴϱ� ������ �Ұ��� ��.
    
    
    // ���� �����ڸ� ȣ����?
    (p1 + p2).get_point();
    // p1.operator+(p2)
    // debug mode�� ȣ���� ��, �Ѱ��� ȣ���ϴٺ��� ���� �����ڵ� ȣ����.
    // release�� compile�ϴ� ���� �۵���.


    std::wstring some_contex = L"Some Unicode �ѱ� ����";
    std::wcout << some_contex << std::endl;
    std::cout << argc << std::endl;
    std::cout << argv << std::endl;

}