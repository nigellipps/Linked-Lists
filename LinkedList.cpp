// Nigel Lipps
// .cpp (functions)

#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

typedef string ItemType;

    // copy constructor
LinkedList::LinkedList(const LinkedList& rhs){  //so chill
    if (this == & rhs){
        cout << "Nope, don't do that" << endl;
        exit(0);
    }
    //copy
    Node *C = rhs.head;
    head = nullptr;
    while (C != nullptr){
        insertToRear(C->value);
        C = C->next;
    }
}

    // Destroys all the dynamically allocated memory
    // in the list.
LinkedList::~LinkedList(){
    Node * temp = head;     //I think this is chill
    while(temp != nullptr){
        Node* n = temp;
        temp = temp->next;
        delete n;
    }
}

    // assignment operator
const LinkedList& LinkedList::operator=(const LinkedList& rhs){ //awesome opossum
    if (this != & rhs){
        Node *C = head;
        while (C != nullptr){
            Node *temp = C;
            C = C->next;
            delete temp;
        }
        //copy
        Node *C2 = rhs.head;
        head = nullptr;
        while (C2 != nullptr){
            insertToRear(C2->value);
            C2 = C2->next;
        }
    }
    return *this;
}

    // Inserts val at the rear of the list
void LinkedList::insertToRear(const ItemType &val){     //super chill
    Node *temp = head;
    if (temp == nullptr){
        temp = new Node;
        temp->next = nullptr;
        temp->value = val;
        head = temp;
        return;
    }
    while(temp->next !=  nullptr)
        temp = temp->next;
    temp->next = new Node;
    temp->next->next = nullptr;
    temp->next->value = val;
}

    // Prints the LinkedList
void LinkedList::printList() const{             //chill
    for (int k = 0; k < size(); k++)
    {
        ItemType x;
        get(k, x);
        cout << x << " ";
    }
    cout << endl;
}

    // Sets item to the value at position i in this
    // LinkedList and return true, returns false if
    // there is no element i
bool LinkedList::get(int i, ItemType& item) const{  //chill
    Node *temp = head;
    int count = 0;
    while(temp != nullptr){
        if(count == i){
            item = temp->value;
            return true;
        }
    temp = temp->next;
    count++;        
    }
    return false;
}

    // Reverses the LinkedList
void LinkedList::reverseList(){     // wow
    Node *p = NULL;
    Node *c = head;
    Node *n;
    while (c != nullptr) {
        n = c -> next;
        c -> next = p;
        p = c;
        c = n;
    }
    head = p;
}

    // Prints the LinkedList in reverse order
void LinkedList::printReverse() const{              //chill
    for (int k = 1; k <= size(); k++){
        ItemType x;
        get(size()-k, x);
        cout << x << " ";
    }
    cout << endl;
}

    // Appends the values of other onto the end of this
    // LinkedList.
void LinkedList::append(const LinkedList &other){   //chill
    LinkedList temp = other;
    Node *Iterator = other.head;
    //move through list and append values
    while (Iterator != nullptr){
        insertToRear(Iterator->value);
        Iterator = Iterator->next;
    }
}

    // Exchange the contents of this LinkedList with the other
    // one.
void LinkedList::swap(LinkedList &other){        //chill
    LinkedList temp = other;
    other = *this;
    *this = temp;
}

    // Returns the number of items in the Linked List.
int LinkedList::size() const{                    //chill
    Node* p = head;
    int count = 0;
    //add to an int every time it doesn't reach the end
    while (p != nullptr){
        count++;
        p = p->next;
    }
    return count;
}
