#include <iostream>
#define MAX 1000

/*
 *  Code by Noé Cruz | Zurck'z | niko
 *  Email: contactozurckz@gmail.com
 *  Facebook: https://www.facebook.com/zurckzte
 *  YouTube: https://www.youtube.com/user/noezurckz
 *  Twitter: https://twitter.com/Zurckz
 *  
 */
using namespace std;

void quickSort(int[], int);
void print(int[], int);

int main()
{
    int n;
    cout << "Enter total elements:" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << i + 1 << " : " << endl;
        cin >> a[i];
    }
    quickSort(a, n);
    print(a, n);
}

void quickSort(int a[], int n)
{
    int tope, ini, fin, pos;
    int may[MAX], menor[MAX];
    tope = 0;
    menor[tope] = 0;
    may[tope] = n - 1;
    while (tope >= 0)
    {
        ini = menor[tope];
        fin = may[tope];
        tope--;

        int izq, der, aux;
        bool band;
        izq = ini;
        der = fin;
        pos = ini;

        band = true;

        while (band == true)
        {
            while ((a[pos] < a[der]) && (pos != der))
                der--;

            if (pos == der)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[der];
                a[der] = aux;
                pos = der;
            }

            while ((a[pos] > a[izq]) && (pos != izq))
                izq++;

            if (pos == izq)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[izq];
                a[izq] = aux;
                pos = izq;
            }
        }

        if (ini <= (pos - 1))
        {
            tope++;
            menor[tope] = ini;
            may[tope] = pos - 1;
        }

        if (fin >= (pos + 1))
        {
            tope++;
            menor[tope] = pos + 1;
            may[tope] = fin;
        }
    }
}

void print(int a[], int n)
{
    cout << "Ordered elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[" << a[i] << "]";
    }
}
