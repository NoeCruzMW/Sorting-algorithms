
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

void print(int[], int n);
void shell(int[], int n);

int main()
{
    int total;
    cout << "Enter total elements: " << endl;
    cin >> total;
    int num[total];
    for (int i = 0; i < total; i++)
    {
        cout << "Enter the element [ " << (i + 1) << " ] :" << endl;
        cin >> num[i];
    }
    shell(num, total);
}

void shell(int a[], int n)
{

    int ints, i, aux;
    bool band;
    ints = n;
    while (ints > 1)
    {
        ints = (ints / 2);
        band = true;
        while (band == true)
        {
            band = false;
            i = 0;
            while ((i + ints) <= n)
            {
                if (a[i] > a[i + ints])
                {
                    aux = a[i];
                    a[i] = a[i + ints];
                    a[i + ints] = aux;
                    band = true;
                }
                i++;
                print(a, n);
            }
        }
    }
}

void print(int a[], int n)
{
    cout << "Ordered elements: " << endl;

    for (int i = 0; i < n; i++)
        cout << "[ " << a[i] << " ]";
}
