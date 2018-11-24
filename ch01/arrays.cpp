#include <iostream>
using namespace std;
int main(){
    double f[5];

    f[0] = 0.0;
    f[1] = 0.1;

    cout << f[1] <<endl;

    // declare on the go
    int a[] = {1,2,3};
    cout << a << endl;

    // pointers and arrays
    char c[] = {'c', 'a', 't'};
    char* p = c;
    char* q = &c[0];

    // pointers and arrays are the same
    cout << p[2] << q[0] <<endl;

    // Warning: same address but doesnt mean its the same values

    return 0;
}
