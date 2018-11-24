#include <iostream>

using namespace std;

int main(){
    char ch = 'Q';
    char *p = &ch; // p holds the address of ch
    cout << "&ch:" << &ch << endl;
    cout << "ch:" << ch << endl;
    cout << "p:" << p << endl;
    cout << "*p:" << *p << endl;
    cout << "&p Address of p" << &p << endl;

    // ch now hold X
    *p = 'X';
    cout << ch << endl;
    cout << &ch << endl;
    cout << &p << endl;

    return 0;
}
