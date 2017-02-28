//Solving 8-Queen Algorithm using a single array

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
        int q[8];
        q[0] = 0;
        int c = 0;
        int count = 0;


NC: c++;
        if ( c == 8 ) goto print;
        q[c] = -1;  //r=-1

NR: q[c]++;
        if (q[c] == 8) goto backtrack;

//TEST
        for ( int i = 0; i < c; i++)
                if ( q[i] == q[c] || (c-i) == abs(q[c]-q[i]))
                        goto NR;
        goto NC;

backtrack: c--;
        if (c == -1)
                return 0;
        goto NR;

print: count++;
        cout << "Solution #" << count << ":" << endl;
        for ( int i = 0; i < 8; i++)
                cout << q[i];
        cout << endl;

goto backtrack;
}
