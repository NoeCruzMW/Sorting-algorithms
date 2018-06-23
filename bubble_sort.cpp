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

void bubble(int[], int);
void print(int[], int);

int main()
{
    int a[] = {45, 3, 5, 6, 76, 345, 23, 23, 5, 8};
    bubble(a, 10);
    print(a, 10);
}

void bubble(int a[], int n)
{
    int aux, i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            if (a[j - 1] > a[j])
            {
                aux = a[j - 1];
                a[j - 1] = a[j];
                a[j] = aux;
            }
        }
    }
}

void print(int a[], int n)
{
    cout << "Ordered numbers:" << endl;
    for (int i = 0; i < n; i++)
        cout << "[ " << a[i] << " ]";
}
