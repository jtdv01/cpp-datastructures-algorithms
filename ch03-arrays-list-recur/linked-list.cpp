#include <iostream>
#include <string>
using namespace std;

class StringNode{
    private:
        string elem;
        StringNode* next;
        friend class StringLinkedList;
};

class StringLinkedList{
    public:
        StringLinkedList();
        ~StringLinkedList();
        bool empty() const;
        const string& front() const;
        void addFront(const string& e);
        void removeFront();
    private:
        StringNode* head;
};

StringLinkedList::StringLinkedList()
    : head(NULL) {}

StringLinkedList::~StringLinkedList(){
    while(!empty()){
        removeFront();
    }
}

void StringLinkedList::addFront(const string& e){
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}
void StringLinkedList::removeFront(){
    StringNode* old = head;
    head = old->next;
    delete old;
}

bool StringLinkedList::empty() const
    { return head == NULL;}

const string& StringLinkedList::front() const{
    return head->elem;
}

int main(){
    StringLinkedList s;
    s.addFront("1");
    s.addFront("2");
    cout<< s.front() << endl;
    s.removeFront();
    cout<< s.front() << endl;
    s.removeFront();
    cout<< bool(s.empty()) << endl;
    return 0;
}
