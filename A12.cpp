#include <iostream>
using namespace std;

typedef double(*FUNC)(double);

double integrate(FUNC f, double x, double y){
        double totalarea = 0.0;
        for (double i =x;i<y;i+=0.0001){
                totalarea += (0.0001)*(f(i));
        }
        return totalarea;
}

double line(double x){
        return x;
}

double square(double y){
        return y*y;
}

double cube(double z){
        return z*z*z;
}

int main(){
        cout << "The integral of f(x)=x between 1 and 5 is: " << integrate(line,1,5) << endl;
        cout << "The integral of f(x)=x^2 between 1 and 5 is: " << integrate(square,1,5) << endl;
        cout << "The integral of f(x)=x^3 between 1 and 5 is: " << integrate(cube,1,5) << endl;
}
