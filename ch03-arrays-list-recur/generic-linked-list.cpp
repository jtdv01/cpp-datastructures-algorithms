#include <iostream>

using namespace std;

template <typename E>
class SNode {
    public:
        E elem;
        SNode<E>* next;
        // Dont know why this doesnt work???
        // friend class SLinkedList<E>;
};

template<typename E>
class SLinkedList {
    public:
        SLinkedList();
        ~SLinkedList();
        bool empty() const;
        const E& front() const;
        void addFront(const E& e);
        void removeFront();
    private:
        SNode<E>* head;
};

// Constructor
template <typename E>
SLinkedList<E>::SLinkedList()
    : head(NULL) {}
// Destructor
template <typename E>
SLinkedList<E>::~SLinkedList(){
    while(!empty()){
        removeFront();
    }
}

template <typename E>
bool SLinkedList<E>::empty() const{
    return head == NULL;
}

template <typename E>
const E& SLinkedList<E>::front() const{
    return head->elem;
}

template <typename E>
void SLinkedList<E>::addFront(const E& e){
    // Create new node and store e on v
    SNode<E>* v = new SNode<E>;
    v->elem = e;
    // Set the old head as v's next
    v->next = head;
    // The new head is now v
    head = v;
}

template <typename E>
void SLinkedList<E>::removeFront(){
    SNode<E>* oldHead = head;
    // The new head should point to the old head's next
    head = oldHead->next;
    delete oldHead;
}


int main(){
    SLinkedList<int> groupOfStuff;
    groupOfStuff.addFront(1);
    groupOfStuff.addFront(2);
    cout << groupOfStuff.front() << endl;
    groupOfStuff.removeFront();
    cout << groupOfStuff.front() << endl;

    return 0;
}
