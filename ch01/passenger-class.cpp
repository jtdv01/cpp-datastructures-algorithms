#include <iostream>
#include <string>
using namespace std;

enum MealType{ NO_PREF};

class Passenger {                      // Passenger (as a class)
    public:
        Passenger();                         // constructor
        Passenger(const string& name);
        bool isFrequentFlyer() const;        // is this a frequent flyer?
        // can be done inline bool isFrequentFlyer() const {return isFreqFlyer;}
        string getName();
        void makeFrequentFlyer(const string& newFreqFlyerNo);
  // ... other member functions
    private:
         string     name;                     // passenger name
         MealType   mealPref;                 // meal preference
         bool       isFreqFlyer;              // is a frequent flyer?
         string     freqFlyerNo;              // frequent flyer number
};
/**
bool Passenger::isFrequentFlyer() const {
  return isFreqFlyer;
}
**/
void Passenger::makeFrequentFlyer(const string& newFreqFlyerNo) {
  isFreqFlyer = true;
  freqFlyerNo = newFreqFlyerNo;
}

Passenger::Passenger(const string& _name){
    name = _name;
}

string Passenger::getName(){
    return name;
}

int main(){
    Passenger *p = new Passenger("poca");
    // not allowed because its private cout << p->name << endl;
    cout << p->getName() << endl;
    return 0;
}
