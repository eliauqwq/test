#include <iostream>
#include <cmath> // ������ѧ����ʹ�� pow ����
using namespace std;

class Complex
{
public:
    double _real; // ʵ��
    double _imaginary; // �鲿

    Complex(double real = 0, double imaginary = 0)
        : _real(real), _imaginary(imaginary) {}

    friend ostream& operator<<(ostream& out, const Complex& a); // ��Ԫ�������������
    friend istream& operator>>(istream& in, Complex& a); // ��Ԫ���������븴��

    Complex operator+(const Complex& a) const; // �����ӷ�
    Complex operator-(const Complex& a) const; // ��������
    Complex operator*(const Complex& a) const; // �����˷�
    Complex operator/(const Complex& a) const; // ��������

    Complex& operator+=(const Complex& a); // ���ϸ�ֵ�ӷ�
    Complex& operator-=(const Complex& a); // ���ϸ�ֵ����
    Complex& operator*=(const Complex& a); // ���ϸ�ֵ�˷�
    Complex& operator/=(const Complex& a); // ���ϸ�ֵ����

    bool operator==(const Complex& a) const; // �ж����������Ƿ����
    bool operator!=(const Complex& a) const; // �ж����������Ƿ����

    bool operator>(const Complex& a) const; // �жϸ���ģ�Ĵ�С
    bool operator<(const Complex& a) const; // �жϸ���ģ�Ĵ�С
};

ostream& operator<<(ostream& out, const Complex& a)
{
    out << a._real;
    if (a._imaginary > 0)
    {
        out << '+' << a._imaginary << 'i'; // ����鲿������鲿Ϊ��������ʾ�Ӻ�
    }
    else if (a._imaginary < 0)
    {
        out << a._imaginary << 'i'; // ����鲿������鲿Ϊ��������ʾ�Ӻ�
    }
    return out;
}

istream& operator>>(istream& in, Complex& a)
{
    in >> a._real >> a._imaginary;
    return in;
}

Complex Complex::operator+(const Complex& a) const
{
    return Complex(_real + a._real, _imaginary + a._imaginary);
}

Complex Complex::operator-(const Complex& a) const
{
    return Complex(_real - a._real, _imaginary - a._imaginary);
}

Complex Complex::operator*(const Complex& a) const
{
    return Complex(_real * a._real - _imaginary * a._imaginary,
        _real * a._imaginary + _imaginary * a._real);
}

Complex Complex::operator/(const Complex& a) const
{
    double denominator = a._real * a._real + a._imaginary * a._imaginary;
    return Complex((_real * a._real + _imaginary * a._imaginary) / denominator,
        (_imaginary * a._real - _real * a._imaginary) / denominator);
}

Complex& Complex::operator+=(const Complex& a)
{
    *this = (*this + a);
    return *this;
}

Complex& Complex::operator-=(const Complex& a)
{
    *this = (*this - a);
    return *this;
}

Complex& Complex::operator*=(const Complex& a)
{
    *this = (*this * a);
    return *this;
}

Complex& Complex::operator/=(const Complex& a)
{
    *this = (*this / a);
    return *this;
}

bool Complex::operator==(const Complex& a) const
{
    return _real == a._real && _imaginary == a._imaginary;
}

bool Complex::operator!=(const Complex& a) const
{
    return !(*this == a);
}

bool Complex::operator>(const Complex& a) const
{
    // �Ƚ�����������ģ��ƽ��
    double modulusSquareThis = _real * _real + _imaginary * _imaginary;
    double modulusSquareA = a._real * a._real + a._imaginary * a._imaginary;
    return modulusSquareThis > modulusSquareA;
}

bool Complex::operator<(const Complex& a) const
{
    // �Ƚ�����������ģ��ƽ��
    double modulusSquareThis = _real * _real + _imaginary * _imaginary;
    double modulusSquareA = a._real * a._real + a._imaginary * a._imaginary;
    return modulusSquareThis < modulusSquareA;
}

int main()
{
    Complex p(2.0, 2.0);
    Complex q(3.0, 4.0);
    p += q;
    p -= q;
    p *= q;
    p /= q;
    cout << (p > q) << endl;
    cout << (p < q) << endl;
    cout << (p == q) << endl;
    cout << p;
}

