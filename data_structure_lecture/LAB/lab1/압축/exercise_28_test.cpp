// exercise_28_test.cpp
// 
#include <iostream>
#include "exercise_28.h"
#include "exercise_28.cpp"
#include <cstdlib>

int main() {
    SquareMatrix<int> square1;
    SquareMatrix<int> square2;
    square1.MakeEmpty(8);
    square2.MakeEmpty(8);
    
    square1.StoreValue(0, 0, 9);
    square2.Copy(square1);

    SquareMatrix<int> square3;
    square3.MakeEmpty(8);

    // operator+ ó�� �����ϰ� ����!
    // �ӽ� ��ü�� ����� ����� ���� ��.
    // �Լ����� local variable�� return �ص� const�� ���� �� �� �˾Ҵµ�...
    // ��ü�� return �������� �Ҹ��� �ι� ȣ��. Add�� subtract�� �����ؾ��մϴ�!
    //square3 = square2.Add(square1); // �� ���� �ּ�ó�� �ϸ� ���� �˴ϴ�!
}