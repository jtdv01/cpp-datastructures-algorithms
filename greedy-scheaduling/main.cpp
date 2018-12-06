#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

class Scheadule{
    public:
        Scheadule(int w, int l);
        void printWeight();
    private:
        int weight;
        int length;
};

Scheadule::Scheadule(int w,int l){
    weight = w;
    length = l;
}
void Scheadule::printWeight(){
    cout << weight;
};

void readFile(){
    string filename = "scheaduling.txt";
    ifstream inFile;
    inFile.open(filename);
    char head[256];
    char data[256];
    int counter = 0;

    vector<Scheadule> scheds;

    while (!inFile.eof()) {
        string line;
        if(counter == 0){
            inFile.getline(head,256);
            cout << string(head) << endl;
        }
        else{
            inFile.getline(data, 256);
            string str_data = string(data);
            cout << data << endl;
        }
        counter ++;
    }
    inFile.close();

}

vector<string> split(){
    std::string text = "Let me split this into words";
    std::vector<std::string> results;
    boost::split(results, text, boost::is_any_of(" "));
    return results;
}
void playAroundSplit(){
    auto s = split();
    auto it = s.begin();
    cout << *it << endl;
    auto nxt = std::next(it, 2);
    cout << *nxt << endl;
}

void playAroundList(){
    vector<Scheadule> scheds;
    Scheadule s = Scheadule(10,10);
    scheds.push_back(s);
    scheds.push_back(s);
    auto it  = scheds.begin();
    it->printWeight();

    Scheadule sit = *it;
    sit.printWeight();
}

int main(){
    return 0;
}
