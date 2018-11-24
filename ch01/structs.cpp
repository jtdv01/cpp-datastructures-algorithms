#include <iostream>
#include <string>
using namespace std;

enum MealType{NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};
struct Passenger{
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

int main(){
    Passenger p = {"John Smith", VEGETARIAN, true, "20123"};
    Passenger* pp = &p;

    cout << p.name << endl;
    p.name = "Pcokahontas";
    cout << p.name << endl;
    cout << &p << endl;

    cout << &p.name << endl;
    return 0;
}
