// exercise_28.h
// TODO : Add Substract �޸� ���� ���� �ذ�
// TODO : operator+�� ���� ��������, �ӽ� ��ü�� return�ϵ��� �����
#pragma once
#include <iostream>

#ifndef _TESTTEMP_H_
#define _TESTTEMP_H_


// ��ü�� ���� ��, �ݵ�� MakeEmpty(������ ���)���� �ʱ�ȭ�ؾ��մϴ�.
template<typename T>
class SquareMatrix {
    int x_y_lenth_;
    T** ptr_array;

public:
    explicit SquareMatrix() = default;

    ~SquareMatrix();

    // alike constructor, make n by n empty array
    // using dynamic allocation.
    void MakeEmpty(const int n);

    // change index (i+1, j+1) to parameter value.
    void StoreValue(const int i, const int j, T const value);

    // !caution! operand lenth must be same with caller matrix lenth
    // !caution! this method return temporal object. save return value!
    // !caution! free ������ ������ ����.
    // operator+�� �Ȱ��� �����ϰ� ����.
    const SquareMatrix Add(const SquareMatrix& matrix) const;

    // !caution! operand lenth must be same with caller matrix lenth
    // !caution! this method return temporal object. save return value!
    // !caution! free ������ ������ ����.
    // operator-�� �Ȱ��� �����ϰ� ����.
    const SquareMatrix Subtract(const SquareMatrix& matrix) const;

    // !caution! operand length must be same with caller matrix lenth
    void Copy(const SquareMatrix& matrix);

    // Get index value. 
    // 2���� �迭�̶� pointer type�� �� ����, T type�� �� ���� �־, auto ��ȯ.
    auto operator[](const int index) const;
};
#endif



