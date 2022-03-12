#include "class.h"

int main() {
    complex <double> z_0(1.2,1.3);
    double x=2.323;
    complexdigit temp(z_0,x);
    complexdigit copy(copy);
    temp.PrintComplex();
    cout << "Multiply By Real Digit x: " << endl;
    temp.MultiplyByRealDigit(x);
    temp.PrintComplex();
    cout << "Summation Of Complex:" << endl;
    complex <double> z2(2,3);
    temp.SummationOfComplex(z2);
    temp.PrintComplex();
    cout << "Multiplication Of Complex:" << endl;
    complex <double> z3(1,1);
    temp.MultiplicationOfComplex(z3);
    temp.PrintComplex();
    cout << "Length Of Complex:" << endl;
    temp.LengthOfComplex();
    return 0;
}
