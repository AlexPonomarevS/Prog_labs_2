#include "class.h"

complexdigit::complexdigit(complex <double> z_0, double x) {
    z=z_0;
    Re=x;
}
complexdigit::complexdigit(const complexdigit &copy) {
cout << "Copy constructor" << endl;
this->z=copy.z;
this->Re=copy.Re;
}
//Умножение комплексных числа на вещественное число.
void complexdigit::MultiplyByRealDigit(double x) {
    z*=x;
}

//Сложение двух комплексных чисел.
void complexdigit::SummationOfComplex(complex <double> z2) {
    z+=z2;
}

//Умножение двух комплексных чисел.
void complexdigit::MultiplicationOfComplex(complex <double> z2) {
z*=z2;
}

//Длина комплексного числа.
void complexdigit::LengthOfComplex() {
   length=abs(z);
   cout << length << endl;
};

//Вывод на экран.
void complexdigit::PrintComplex() {
double Re=real(z);
double Im= imag(z);
cout <<"z = " << Re;
if(Im<0){
    Im=Im/(-1);
    cout << " - " << Im << "i" << endl;
}
else{
    cout << " + " << Im << "i" << endl;
}
}
