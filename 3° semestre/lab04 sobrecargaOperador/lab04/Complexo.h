#include <iostream>
using namespace std; 
#ifndef COMPLEXO_H
#define COMPLEXO_H
class Complexo
{
private:
    double real, imag;
    static int n;

public:
    Complexo()
    {
        real = 1;
        imag = 1;
        n++;
    }
    Complexo(double a, double b)
    {
        real = a;
        imag = b;
        n++;
    }
    Complexo(const Complexo &c)
    {
        real = c.real;
        imag = c.imag;
        n++;
    }
    ~Complexo() { n--; }
    Complexo operator+(Complexo);
    Complexo operator-(Complexo);
    Complexo operator*(Complexo);
    Complexo operator/(Complexo);
    bool operator==(Complexo);
    bool operator!=(Complexo);
    Complexo somar(Complexo);
    Complexo subtrair(Complexo);
    Complexo multiplicar(Complexo);
    Complexo dividir(Complexo);
    void setReal(double a) { real = a; }
    void setImaginario(double a) { imag = a; }
    double getReal() { return real; }
    double getImaginario() { return imag; }
    int getObjetos() { return n; }
    double modulo();
    void print();
    friend ostream &operator<<(ostream &, const Complexo &);
    friend istream &operator>>(istream &, Complexo &);
};
#endif