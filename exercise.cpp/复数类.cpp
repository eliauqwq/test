#include <iostream>
#include <cmath> // 引入数学库以使用 pow 函数
using namespace std;

class Complex
{
public:
    double _real; // 实部
    double _imaginary; // 虚部

    Complex(double real = 0, double imaginary = 0)
        : _real(real), _imaginary(imaginary) {}

    friend ostream& operator<<(ostream& out, const Complex& a); // 友元函数，输出复数
    friend istream& operator>>(istream& in, Complex& a); // 友元函数，输入复数

    Complex operator+(const Complex& a) const; // 复数加法
    Complex operator-(const Complex& a) const; // 复数减法
    Complex operator*(const Complex& a) const; // 复数乘法
    Complex operator/(const Complex& a) const; // 复数除法

    Complex& operator+=(const Complex& a); // 复合赋值加法
    Complex& operator-=(const Complex& a); // 复合赋值减法
    Complex& operator*=(const Complex& a); // 复合赋值乘法
    Complex& operator/=(const Complex& a); // 复合赋值除法

    bool operator==(const Complex& a) const; // 判断两个复数是否相等
    bool operator!=(const Complex& a) const; // 判断两个复数是否不相等

    bool operator>(const Complex& a) const; // 判断复数模的大小
    bool operator<(const Complex& a) const; // 判断复数模的大小
};

ostream& operator<<(ostream& out, const Complex& a)
{
    out << a._real;
    if (a._imaginary > 0)
    {
        out << '+' << a._imaginary << 'i'; // 输出虚部，如果虚部为正数则显示加号
    }
    else if (a._imaginary < 0)
    {
        out << a._imaginary << 'i'; // 输出虚部，如果虚部为负数则不显示加号
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
    // 比较两个复数的模的平方
    double modulusSquareThis = _real * _real + _imaginary * _imaginary;
    double modulusSquareA = a._real * a._real + a._imaginary * a._imaginary;
    return modulusSquareThis > modulusSquareA;
}

bool Complex::operator<(const Complex& a) const
{
    // 比较两个复数的模的平方
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

