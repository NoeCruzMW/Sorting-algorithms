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

void selection(int[], int);
void print(int[], int);

int main()
{
    int n;
    cout << "Enter total elements: " << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << (i + 1) << " :" << endl;
        cin >> a[i];
    }
    selection(a, n);
    print(a, n);
}

void selection(int a[], int n)
{
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

void print(int a[], int n)
{
    cout << "Ordered elements: " << endl;
    for (int i = 0; i < n; i++)
        cout << "[ " << a[i] << " ]";
}
