// �� page������ cpp�� return ��Ŀ� ���Ͽ� �����ϰ� �ǽ���.

#include "turn_by_reference_const_type.hpp"
#include <iostream>

Point::Point() :x_(0), y_(0) { };


Point::Point(int x, int y) : x_(x), y_(y) { };

// �⺻�� shallow copy�� �����ϱ� ������, deepcopy�� ���� �ۼ�
Point::Point(Point& pt)
{
    std::cout << "Copy constructor called" << std::endl;
    //*this = new Point(pt.x_, pt.y_);
}


void Point::get_point() const
{
    std::cout <<"x: " << x_ <<", y: "<< y_ << std::endl;
}


//const�� �θ� �� �־�, const ������ ������
//const������ �׳� ģ���� ���ҷ�.
void Point::set_point(const int x, const int y)
{
    std::cout << "Give me x value" << std::endl;
    x_ = x;
    std::cout << "Give me y value" << std::endl;
    y_ = y;
}

const Point Point::operator+(const Point& _point) const
{
    Point pt;
    pt.x_ = this->x_ + _point.x_;
    pt.y_ = this->y_ + _point.y_;

    // debug mode�� ���� ��, �� ���� �����ؼ� ��.
    // �׷��Ƿ� ���� �����ڸ� ȣ����.
    return pt;
}

const Point Point::operator++(int)
{
    Point pt(++x_, ++y_);
    return pt;
}



