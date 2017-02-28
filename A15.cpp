#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

bool ok( int b[], int c )
{ 
        int table[8][5] = {     {-1}, 
                        {0, -1}, 
                        {0, -1}, 
                        {0, 1, 2, -1}, 
                        {0, 1, 3, -1}, 
                        { 1, 4, -1}, 
                        { 2, 3, 4, -1}, 
                        {3, 4, 5, 6, -1}   }; 
        for ( int i = 0; i < c; ++i) 
                if ( b[i] == b[c] ) return false; 
        for ( int i = 0; table[c][i] != -1; ++i)
        { 
                if ( 1 == abs( b[c] - b[ table[c][i] ] ) ) return false; 
        } 
        return true; 
}  

void print ( int b[] )
{ 
        static int count = 0; 
        cout << "Solution #" << ++count << endl; 
        cout << "  " << b[0]+1 << " " << b[1]+1 << ' ' << endl; 
        cout << b[2]+1 << " " << b[3]+1 << " " << b[4]+1 << " " << b[5]+1 
<< ' ' << endl; 
        cout << "  " << b[6]+1 << " " << b[7]+1 << ' ' << endl; 
} 

void move(int* q, int i)
{
        if ( i==8 )
        {
                print(q);
                return;
        }
        for (int j=1;j<=8;j++)
        {
                q[i]=j;
                if(ok(q,i)) move(q,i+1);
        }
}

int main()
{
        int q[8];
        move(q,0);
        return 0;
}
