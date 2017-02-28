#include <iostream> 
#include <cstdlib> 
#include <cmath> 
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

void backtrack ( int &col )
{ 
        --col; 
        if ( col == -1 )
        { 
                exit( 0 ); 
        } 
} 

void print ( int b[] )
{ 
        static int count = 0; 
        cout << "Solution #" << ++count << endl; 
        cout << "  " << b[0]+1 << " " << b[1]+1 << ' ' << endl; 
        cout << b[2]+1 << " " << b[3]+1 << " " << b[4]+1 << " " << b[5]+1 << ' ' << endl; 
        cout << "  " << b[6]+1 << " " << b[7]+1 << ' ' << endl; 
} 

int main()
{ 
        int b[8], c = 0; 
        bool from_backtrack = false; 
        while ( true )
        { 
                while ( c < 8 )
                { 
                        if ( !from_backtrack ) 
                                b[c] = -1; 
                                from_backtrack = false; 

                        while ( b[c] < 8 )
                        { 
                                b[c]++; 
                                if ( b[c] == 8 )
                                {
                                        backtrack( c ); 
                                        continue; 
                                } 
                                if ( ok( b, c ) ) break; 
                        } 
                        c++; 
                } 
                print ( b ); 
                backtrack ( c ); 
                from_backtrack = true; 
        } 
}
