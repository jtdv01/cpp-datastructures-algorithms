#include <iostream>
using namespace std;

typedef string Elem;
class CNode{
    private:
        Elem elem;
        CNode* next;
        friend class CircleList;
};

class CircleList{
    public:
        CircleList();
        ~CircleList();
        bool empty() const;
        const Elem& front() const;//object is not allowed to modify contents
        const Elem& back() const;//object is not allowed to modify contents
        void advance();
        void add(const Elem& e);
        void remove();
    private:
        CNode* cursor;

};
CircleList::CircleList()
    : cursor(NULL) {}
CircleList::~CircleList(){
    while(!empty()){
        remove();
    }
}
bool CircleList::empty() const{
    return cursor == NULL;
}
// Element following the current cursor
const Elem& CircleList::front() const{
    return cursor->next->elem;
}
//Elem at cursor
const Elem& CircleList::back() const{
    return cursor->elem;
}
// Move cursor on the next
void CircleList::advance(){
    cursor = cursor->next;
}

void CircleList::add(const Elem& e){
    // Insert a node just after the cursor
    CNode* newNode = new CNode;
    newNode->elem = e;
    // If empty
    if(cursor == NULL){
        newNode->next = newNode; //go back to itself
        cursor = newNode;
    }
    else{
        newNode->next = cursor->next;
        cursor->next = newNode;
    }
}

/**
 * IF this is the last node, set cursor to null
 * Otherwise, we skip over the removed node and delete;
 */
void CircleList::remove(){
    CNode* toBeRemoved = cursor->next;
    if(toBeRemoved == cursor){
        cursor = NULL;
    }else{
        cursor->next = toBeRemoved->next;
    }
    delete toBeRemoved;
}


int main(){
    CircleList playlist;
    playlist.add("Stayin Alive");
    playlist.add("Bohemian Raphsody");
    playlist.advance();
    cout << playlist.back() << endl;
    playlist.advance();
    cout << playlist.back() << endl;
    playlist.remove();
    cout << playlist.back() << endl;
    return 0;
}
