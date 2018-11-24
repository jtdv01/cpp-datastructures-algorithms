#include <iostream>
using namespace std;

void f(int val, int& ref){
    val++;
    // pass by reference, ref gets sideffected outside of this function
    ref++;
    cout << val << endl;
    cout << ref << endl;
}

void g(const int& constRef){
    // this is ILLEGAL! constRef = 30;
    cout << constRef << endl;
}

int main(){
    int passbyvalue =1;
    int passbyref =1;
    cout << passbyvalue << endl;
    cout << passbyref << endl;

    f(passbyvalue, passbyref);

    cout << passbyvalue << endl;
    cout << passbyref << endl;


    cout << endl;
    g(passbyref);
    return 0;
}
