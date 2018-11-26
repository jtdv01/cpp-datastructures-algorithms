#include <iostream>
#include <string>

using namespace std;

class GameEntry{
    public:
        GameEntry(const string& n="", int s=0); // constructor
        // GameEntry(const string& n="", int s=0, int m=10);
        string getName() const;
        int getScore() const;
        void setScore(int newScore);
    private:
        string name;
        int score;
};
GameEntry::GameEntry(const string& n, int s)
    : name(n), score(s) {}
string GameEntry::getName() const{
    return name;
}
int GameEntry::getScore() const{
    return score;
}
void GameEntry::setScore(int newScore) {
    score = newScore;
}


// class IndexOutOfBounds : public std::exception{
//     public:
//         IndexOutOfBounds(const string& err)                   // divide by zero
//             : std::exception(err) { }
// }

class Scores{
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add(const GameEntry& e);
        GameEntry remove(int i);
        // throw(-1);
        int maxEntries;
        void printScores();
    private:
        int numEntries;
        GameEntry* entries;
};
Scores::Scores(int maxEnt){
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}
Scores::~Scores(){
    delete[] entries;
}
void Scores::add(const GameEntry& e){
    int newScore = e.getScore();
    if (numEntries == maxEntries){
        if(newScore <= entries[maxEntries-1].getScore())
        return;
    }
    else numEntries++;

    int i = numEntries-2;
    while(i>= 0 && newScore > entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}

void Scores::printScores(){
    for(int i = 0; i< numEntries; i++){
        GameEntry x = entries[i];
        cout << x.getName()<< x.getScore() << endl;
    }
}


int main(){
    GameEntry g1 = GameEntry("Jack", 10);
    g1.setScore(100);
    GameEntry g2 = GameEntry("Sarah", 20);
    GameEntry g3 = GameEntry("Joan", 30);
    // GameEntry g10 = &g1;

    Scores* s = new Scores();
    s->add(g1);
    s->add(g2);
    s->add(g3);
    s->printScores();

    // cout << s->maxEntries << endl;


    return 0;
}