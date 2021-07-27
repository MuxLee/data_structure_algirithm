// To use Korean, we need to use Unicode.
// In linux 
// �ش� ��ü�� return ���� ���ο� ��ü�� return �� ��.
// �� ã��.


// We user Literal like L"literal"

#include <iostream>
#include <string>


class Coordinate2D
{
    int x_;
    int y_;
public:
    Coordinate2D(int const x, int const y);
    int& access_x() { return x_; };
    int get_x() { return x_; };


    
    //
    void get_stat() const;

    // ���� �̷��� �ؼ� private��ü�� ������ return�� �ʿ� ����.
    //Coordinate2D& set_point(int x, int y);
    void set_point(int x, int y);
    
    // operand, operator
    Coordinate2D& operator+(const Coordinate2D& operand);
    // �ΰ��� ���ؼ� ���ο� ��ü�� ����.
    /*const Coordinate2D operator+(const Coordinate2D& arg) const;*/
    /*const Coordinate2D operator++(int);*/
    Coordinate2D operator++(int);
};

void Coordinate2D::set_point(int x, int y)
{
    x_ = x;
    y_ = y;
}

void Coordinate2D::get_stat() const
{
    std::cout << x_ << ',' << y_ << std::endl;
}

Coordinate2D::Coordinate2D(int x, int y) : x_(x), y_(y) {};

//l value�� return��.
Coordinate2D& Coordinate2D::operator+(const Coordinate2D& operand)
{
    x_ = x_ + operand.x_;
    y_ = y_ + operand.y_;
    return *this;
}
 //reference�� return�ϴ� ��� �ӽ� ��ü�� return�Ǵ� ���� �ƴϰ�, shallow copy�Ǳ� ������
 //private�� �ִ� ������ ���� �� �� ����.


// �������� ���� �ִ� �������� ���������� �̻��� �� �� �����Ƿ�,
// �ӽ� ��ü�� �Ѱ���.�ӽ� ��ü �����ؼ� ��!
//const Coordinate2D Coordinate2D::operator+(const Coordinate2D& arg) const
//{
//    auto added_x = x_ + arg.x_;
//    auto added_y = y_ + arg.y_;
//    Coordinate2D pt(added_x, added_y);
//    return pt;
//}


//const Coordinate2D Coordinate2D::operator++(int)
//{
//    Coordinate2D pt(++x_, ++y_);
//    return pt;
//}

Coordinate2D Coordinate2D::operator++(int)
{
    Coordinate2D pt(++x_, ++y_);
    return pt;
}


//w_main
int main(int arg, char* chars[])
{

    int x = 1, y = 2;
    Coordinate2D point_2d1(x, y);
    Coordinate2D point_2d2(10, 20);
    const Coordinate2D point_2d4(0, 1);
    //point_2d4++;
    //Coordinate2D& ptr = point_2d1++; // reference�� �ƴѵ� reference�� ����. �Լ��� return ���� �ӽ� ���̹Ƿ� ������ ������� ��.
    
    bool controller;
    std::cout << "True or False\n";
    std::cin >> controller;

    if (controller)
        point_2d1.set_point(8, 6);

    Coordinate2D point_2d3 = (point_2d1 + point_2d1).operator+(point_2d1);
    


    // append�� ���� ���� �ʾƵ� �ٲ�!
    // point_2d1 + point_2d2 + point_2d2;

    point_2d1.get_stat();
    point_2d1++;
    point_2d1.get_stat();
    point_2d1++;
    point_2d1.get_stat();
    &point_2d1++;

    
    //const�� �����ϸ� l-value�̱� ������ ���� �� �ƴѰ�?
    //point_2d1++ = point_2d2;
    (((point_2d1++)++)++)++;
    point_2d1++; //�̰� ����, ������ reference�� �ϴ°� �ƴѰ�?

    std::cout <<&(point_2d1 + point_2d2); //= point_2d1; //reference�� return�� ���� �ƴϱ� ������ ������ �ȵǾ� ���� �ƴ�?
    //point_2d1 + point_2d1 = point_2d1;
    //point_2d3.get_stat();
    
    //(point_2d1 + point_2d1).get_stat();
    //point_2d1.get_stat();
    
    //std::wstring ws1 = L"hello �ѱ���";

    //std::wcout << ws1;
    //
    //std::wcin >> ws1;

    //std::wcout << ws1;
    //std::cout << "�ѱ���asfd";
    point_2d1.access_x() = 3; //reference �̱⿡ ���� L value�� return��,
    // point_2d1.get_x() = 6;  r-value�̱� ������ �Ұ���.
    int asdf = point_2d1.access_x();
}