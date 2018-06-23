#include <iostream>

/*
 *  Code by Noé Cruz | Zurck'z | niko
 *  Email: contactozurckz@gmail.com
 *  Facebook: https://www.facebook.com/zurckzte
 *  YouTube: https://www.youtube.com/user/noezurckz
 *  Twitter: https://twitter.com/Zurckz
 *  
 */

using namespace std;
void Imprimir(int a[], int n)
{
    cout << "Numeros Ordenados de Menor a Mayor" << endl;

    for (int i = 0; i < n; i++)
        cout << "[ " << a[i] << " ]";
}

void Insercion_Directa(int a[], int n)
{
    int i, k, aux;

    for (i = 0; i <= n - 1; i++)
    {

        aux = a[i];
        k = i - 1;
        while ((k >= 0) && (aux < a[k]))
        {
            a[k + 1] = a[k];
            k = k - 1;
        }
        a[k + 1] = aux;
    }
}

int main()
{

    int n;
    cout << "Numero de elementos del arreglo" << endl;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << (i + 1) << endl;
        cin >> num[i];
    }
    Insercion_Directa(num, n);
    Imprimir(num, n);

    return 0;
}
