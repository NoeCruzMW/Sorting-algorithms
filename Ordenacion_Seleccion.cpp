#include <iostream>

using namespace std;

/*
 *  Code by Noé Cruz | Zurck'z | niko
 *  Email: contactozurckz@gmail.com
 *  Facebook: https://www.facebook.com/zurckzte
 *  YouTube: https://www.youtube.com/user/noezurckz
 *  Twitter: https://twitter.com/Zurckz
 *  
 */

void Seleccion(int[], int);
void Imprimir(int[], int);

int main()
{

    int n;
    cout << "Cunatos elementos va a ingresar " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << (i + 1) << " del arreglo" << endl;
        cin >> a[i];
    }

    Seleccion(a, n);
    Imprimir(a, n);
}

void Seleccion(int a[], int n)
{

    //Variables a utilizar
    int k, menor, i, j;

    for (i = 0; i < n; i++)
    {
        menor = a[i];
        k = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < menor)
            {
                menor = a[j];
                k = j;
            }
        }

        a[k] = a[i];
        a[i] = menor;
    }
}

void Imprimir(int a[], int n)
{
    cout << "Numeros Ordenados de Menor a Mayor" << endl;

    for (int i = 0; i < n; i++)
        cout << "[ " << a[i] << " ]";
}
