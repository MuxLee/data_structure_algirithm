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
    square2.StoreValue(0, 0, 9);
    SquareMatrix<int> square4;
    square4.Copy(square2);

    // �ӽ� ��ü�� ����� ����� �����ϴ� ��.
    // �Լ����� local variable�� return �ص� const�� ���� �� �� �˾Ҵµ� ,
    // free�� �� ��...
    // SquareMatrix<int> square3 = square1.Add(square2);
}