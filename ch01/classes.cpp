#include <iostream>

using namespace std;

class Counter {
    public:
        Counter();
        int getCount();
        void increaseBy(int x);
    private:
        int count;
};
Counter::Counter()                 // constructor
  { count = 0; }
int Counter::getCount()            // get current count
  { return count; }
void Counter::increaseBy(int x)    // add x to the count
  { count += x; }

int main(){
    Counter ctr;
    cout << ctr.getCount() << endl;
    ctr.increaseBy(10);
    cout << ctr.getCount() << endl;
    return 0;
}
