#include <iostream>
using namespace std;

int recursiveFactorial(int n){
    if(n == 1){
        return n;
    }
    else{
        return n * recursiveFactorial(n-1);
    }
}

int main(){
    int n;
    int* npointer;
    // Point to the address of n
    npointer = &n;

    n = recursiveFactorial(1);
    cout << "The value pointed by npointer is: " << *npointer << endl;

    n = recursiveFactorial(3);
    cout << "The value pointed by npointer is: " << *npointer << endl;

}
