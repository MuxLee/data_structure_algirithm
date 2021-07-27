#pragma once

//template<typename int_double>
class Point
{
private:
    int x_;
    double y_;

public:
    //constructor
    Point();
    Point(int x, int y);

    //copy constructor. default constructor is shallow copy
    Point(Point& point);

    //print corrdinate
    void get_point() const;

    void set_point(const int x, const int y);

    // const ���Ŀ� set�� �ҷ����� �ʴ´�.
    // �� ���� const�� �̹������� ������ ��ȭ���� ��Ÿ����.
    // const��ü�� ������ const member funcion���θ� �ٲ� �� �ֱ� ������,
    // operator+ ���Ŀ� �ش��ٿ��� set_point���� ��ȭ�� ���� ��, ������ �� ���̴�.
    const Point operator+(const Point& _point) const;

    // ���� ���� �����ڴ� �������� ������ �̷����� ������, �տ��� const�� ������.
    // ���� �ڿ��� const�� ������ ((pt++)++)++�� ���Ǳ� �����̴�.
    const Point operator++(int);

};