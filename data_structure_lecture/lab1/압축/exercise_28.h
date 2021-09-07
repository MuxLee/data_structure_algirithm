// exercise_28.h
// TODO : change Add Substract free memory.
// TODO : �ӽ÷� static ó�� �ص�. �ӽ� ��ä�� return �� �� �ֵ���,
// TODO : operator+�� ���� �������� �����
#pragma once
#include <iostream>

#ifndef _TESTTEMP_H_
#define _TESTTEMP_H_


// Client should use MakeEmpty method to initialize
// ex)
// SquareMatrix two_by_two;
// two_by_two.MakeEmpty(2)
template<typename T>
class SquareMatrix {
    // buffer size = x_y_lenth_ * x_y_lenth_ * sizeof(T)
    int x_y_lenth_;

    T** ptr_array;

public:
    explicit SquareMatrix() = default;
    // explicit SquareMatrix();

    // SquareMatrix(int lenth, int element) : x_y_lenth(lenth);
    ~SquareMatrix();

    // alike constructor, make n by n empty array
    // using dynamic allocation
    void MakeEmpty(const int n);

    // change index (i+1, j+1) to parameter value 
    void StoreValue(const int i, const int j, T const value);

    // !caution! operand lenth must be same with caller matrix lenth
    // !caution! this method return temporal object. save return value!
    // ���θ� �ǵ����� �ʴ� �ӽ� ��ü�� ���� return ��.
    // free ���������� ������ ����.
    // �����ڿ��� malloc�� ���� ���� �ͼ��ѵ� method���� ���� ����.
    const SquareMatrix Add(const SquareMatrix& matrix) const;

    // !caution! operand lenth must be same with caller matrix lenth
    // !caution! this method return temporal object
    // ���θ� �ǵ����� �ʴ� �ӽ� ��ü�� ���� return ��.
    // free ���������� ������ ����. 
    // �����ڿ��� malloc�� ���� ���� �ͼ��ѵ� method���� ���� ����.
    SquareMatrix Subtract(const SquareMatrix& matrix) const;

    // !caution! operand lenth must be same with caller matrix lenth
    void Copy(const SquareMatrix& matrix);

    // get index 
    auto operator[](const int index) const;
};
#endif



