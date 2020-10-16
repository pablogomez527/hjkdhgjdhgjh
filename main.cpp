#include <iostream>

using namespace std;

int main()
{
    int a = 65, b = 0, c = 67;
    //float daniel = 0;
    int *p = &a;
    cout << &a << " " << a << endl;
    cout << p << " " << *p << endl;
    a = 8;
    cout << *p+3 << endl;
    cout << &a << " " << &b << " " << &c <<endl;

    cout << *(p-2) << "-" << b << endl;// esto sucede por que se va para el bloque de memoria que esta al lado
    /* a la direccion almacenada en p le resto 1 e imprimo lo que hay en ella*/
    *(p-2) = 20;
    cout << a << " " << b << " " << c << endl;
    cout << *p - 2 << endl;// al valor de p se le resta 2
    cout << &a - &b << endl;
    return 0;
}
