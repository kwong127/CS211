//A program run to shift an array

#include <iostream>
using namespace std;

void right_shift (int a[], int size)
{
        int temp = a[size - 1];
        for (int i = size - 1; i > 0; i--)
                a[i] = a[i-1];
        a[0] = temp;
}

bool equivalent (int a[], int b[], int n)
{
        for ( int i = 0; i < n; i++ )
        {
                bool isSame = true;
                // right shift by
                for (int j = 0; j < n; j++)
                {
                        if (a[j] != b[j]) isSame = false;
                }
                if (isSame) return true;
        }
}                         

void printA (int a[], int n)
{
        for (int i = 0; i < n; i++)
        {
                cout << a[i] << " ";
        }
}


int main()
{
        int a[6] = {1,2,3,4,5,1};
        int b[6] = {3,4,5,1,1,2};
        cout << "a: ";
        printA (a,6);
        cout << endl << "b: ";
        printA (b,6);
        string equiv = "";
        if (!equivalent(a,b,6)) equiv = " not";
        cout << endl << "are" << equiv << " shift equivalent!" << endl;
        return 0;
}

