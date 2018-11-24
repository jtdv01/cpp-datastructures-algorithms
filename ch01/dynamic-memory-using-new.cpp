#include <iostream>
using namespace std;

enum MealType{NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};
struct Passenger{
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

int main(){
    // passenger pointer
    Passenger* p;
    // p points to the new passenger
    p = new Passenger;
    p->name = "Pocahontas";
    p->mealPref = NO_PREF;

    cout << p->name << endl;
    cout << p->mealPref << endl;

    delete p;
    cout << p->name;
    return 0;
}
