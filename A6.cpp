//Solving 8-Queen using functions ok, printBoard, backtrack, and calling them in main program

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool ok(int q[],int c)
{
        for (int i=0;i<c;i++)
        {
                if ( (q[i] == q[c]) || (abs(q[c]-q[i]) == (c-i)) )
                {
                        return false;
                }
        }
        return true;
}

void printBoard (int b[], int c)
{
        cout << "Solution #" << c << ": \n";
        for ( int i = 0; i < 8; i++)
        {
                cout << b[i] << " ";
        }
        cout << endl;
}

void backtrack (int &c)
{
        c--;
        if ( c == -1)
        {
                exit(0);
        }
}

int main ()
{
        int q[8];
        q[0] = 0;
        int c = 0;
        int counter = 0;

        while (true)
        {
                c++;
                if ( c == 8 )
                {
                        printBoard (q,++counter);
                        backtrack(c);
                }
                else
                {
                        q[c] = -1;
                }

                while (true)
                {
                        q[c]++;
                        if (q[c] == 8)
                        {
                                backtrack(c);
                                continue;
                        }
                        if (ok(q,c))
                        {
                                break;
                        }
                } //end row while
        } //end col while
}

