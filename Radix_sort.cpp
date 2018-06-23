#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

/*
 *  Code by Noé Cruz | Zurck'z | niko
 *  Email: contactozurckz@gmail.com
 *  Facebook: https://www.facebook.com/zurckzte
 *  YouTube: https://www.youtube.com/user/noezurckz
 *  Twitter: https://twitter.com/Zurckz
 *  
 */

void radix(int[], int);
void print(int[], int);

vector<vector<int>> Vec;

int main()
{

    int totalElements;
    cin >> totalElements;
    int elements[totalElements];
    for (int i = 0; i < totalElements; i++)
    {

        cin >> elements[i];
    }

    radix(elements, totalElements);
}

void radix(int a[], int n)
{
    Vec.resize(10);
    int temp, m = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp = (int)(a[j] / pow(10, i)) % 10;
            Vec[temp].push_back(a[j]);
        }
        for (int k = 0; k < 10; k++)
        {
            for (int l = 0; l < Vec[k].size(); l++)
            {
                a[m] = Vec[k][l];
                m++;
            }
            Vec[k].clear();
        }
        m = 0;
    }
    print(a, n);
}

void print(int a[], int tam)
{
    cout << "\t\tOrdered elements: \n\n";
    for (int i = 0; i < tam; i++)
        cout << "\t[" << a[i] << "] ";
}
