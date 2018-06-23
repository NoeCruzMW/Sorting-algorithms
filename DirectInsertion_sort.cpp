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
void print(int a[], int n)
{
    cout << "Ordered elements: " << endl;

    for (int i = 0; i < n; i++)
        cout << "[ " << a[i] << " ]";
}

void directInsertion(int a[], int n)
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
    cout << "Enter total elements: " << endl;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element:  " << (i + 1) << endl;
        cin >> num[i];
    }
    directInsertion(num, n);
    print(num, n);

    return 0;
}
