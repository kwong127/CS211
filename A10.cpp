//Pointer Practice

#include <iostream>
using namespace std;

int main()
{
        int b[3][2];

        cout << sizeof (b) << endl; //prints the size of bytes of array b: 24 bytes

        cout << sizeof (b+0) << endl; //prints the size of bytes for pointer of b+0: 8 bytes

        cout << sizeof (*(b+0)) << endl; //prints the size of bytes of the index for pointer b+0: 8 bytes

        // next line prints 0012FF68

        cout << "The address of b is: " << b << endl; //prints the address of b: 0012FF68

        cout << "The address of b+1 is: " << b+1 << endl; //prints the address of pointer location b+1: 0012FF70

        cout << "The address of &b is: " << &b << endl; //prints the address of array b: 0012FF68

        cout << "The address of &b+1 is: " << &b+1 << endl << endl; //prints the address of array b+1: 0012FF80

        return 0;
}
