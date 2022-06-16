#include <iostream>
#include "q2.h"
using namespace std;
int main()
{
    CPilha<int> pInt;
    int aux;
    try
    {
        // usando a pilha de inteiros
        cin >> pInt;
        cout << "Valor no topo da pilha: " << pInt.pop(aux) << endl;
        cout << pInt;
    }
    catch (runtime_error &rt)
    {
        cout << rt.what() << endl;
    }
    return 0;
}