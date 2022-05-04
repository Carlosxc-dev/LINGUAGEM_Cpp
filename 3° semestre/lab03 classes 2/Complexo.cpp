#include <iostream>
#include <cmath>
#include "complexo.h"
using namespace std;

// inicialização do membro estático
int Complexo::count = 0;

// função somar - recebe um complexo como parâmetro e retorna um complexo
Complexo Complexo::somar(Complexo objB)
{
    Complexo aux(getReal() + objB.getReal(), getImaginario() + objB.getImaginario());
    return aux;
}

// função subtrair - recebe um complexo como parâmetro e retorna um complexo
Complexo Complexo::subtrair(Complexo objB)
{
    Complexo aux(getReal() - objB.getReal(), getImaginario() - objB.getImaginario());
    return aux;
}

// função multiplicar - recebe um complexo como parâmetro e retorna um complexo
Complexo Complexo::multiplicar(Complexo objB)
{
    Complexo aux(
        getReal() * objB.getReal() - getImaginario() * objB.getImaginario(),
        getReal() * objB.getImaginario() + getImaginario() * objB.getReal());
    return aux;
}

// função dividir - recebe um complexo como parametro e retorna um complexo
Complexo
Complexo::dividir(Complexo _c)
{
    double a = (real * _c.real + imaginario * _c.imaginario) /
               (pow(_c.real, 2) + pow(_c.imaginario, 2));

    double b = (_c.real * imaginario - real * _c.imaginario) /
               (pow(_c.real, 2) + pow(_c.imaginario, 2));
    Complexo aux(a, b);

    return aux;
}

// função modulo - calcula o modulo do complexo
double Complexo::modulo()
{
    return sqrt(pow(getReal(), 2) + pow(getImaginario(), 2));
}
// função print - imprime um complexo com o formato desejado
void Complexo::print()
{
    cout << getReal() << " ";
    if (getImaginario() < 0)
        cout << getImaginario() << "i" << endl;
    else
        cout << "+" << getImaginario() << "i" << endl;
}