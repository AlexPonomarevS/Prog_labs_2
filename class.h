#include <iostream>
#include <complex>

using namespace std;

class complexdigit {
private:
    complex <double> z;
    double length;
    double Re;

public:
//Умножение комплексных числа на вещественное число.
    void MultiplyByRealDigit(double x);

//Сложение двух комплексных чисел.
    void SummationOfComplex(complex <double> z2);

//Умножение двух комплексных чисел.
    void MultiplicationOfComplex(complex <double> z2);

//Длина комплексного числа.
    void LengthOfComplex();

//Вывод на экран.
    void PrintComplex();


    complexdigit(complex <double> z_0,double x);
    complexdigit(const complexdigit& copy);

};