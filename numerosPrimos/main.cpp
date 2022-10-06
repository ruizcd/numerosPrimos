#include<iostream>
using namespace std;

int main()
{
    int n = 0, c = 0, c2 = 0, res = 0, nc = 0;
    cout << "Introduce el limite de numeros: "; cin >> n;
    for (c = 1; c <= n; c++)
    {
        for (c2 = 1; c2 <= c; c2++)
        {
            res = c % c2;
            if (res == 0)
            {
                nc = nc + 1;
            }
        }
        if (nc == 2)
        {
            cout << ", " << c ;
        }
        nc = 0;
    }
}

/*
El primer ciclo lleva la cuenta de los números de 1 a n de uno por uno en la variable c
Luego se inicia un ciclo de 1 a c en la variable c2. Este ciclo se hará n veces porque está dentro de el primer ciclo
En la variable res se guarda el residuo de dividir c / c2
Si el residuo es cero, se incremento al contador nc
Si al terminarse el segundo ciclo el contador nc es igual a 2, significa que el número es primo y lo imprime
*/