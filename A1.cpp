//Assignment 1

#include <iostream>
using namespace std;

int main ()
{
        bool isFound = false;
        int i = 1;
        while ( i++ )
        {
                int ps = i * i;
                int ld = ps % 10;
                int sld = ps / 10 % 10;

                if ( ld % 2 == 1 && sld % 2 == 1 )
                {
                        isFound = true;
                }
        cout << ps << endl;
        }

}
