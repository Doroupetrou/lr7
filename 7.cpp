#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double y, x;
    double sum = 0;
    double mult = 1; 
    int n, m;
    
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter your y: ";
    cin >> y;
    
    for(n=1; n<=5; n++){
        sum = sum + cos(n*x) + 5*pow(x, 2);
        }
    for(m=2; m<=5; m++){
        mult = mult * log(m*y);
    }
    mult = cos(mult);
    cout << "Y = " << sum << endl;
    cout << "Z = " << mult;
}