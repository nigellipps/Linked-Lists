// Nigel Lipps
// Test the functions
// main.cpp

#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    //test the get function
    LinkedList bs;
    cout << endl << "This tests the get function: " << endl;
    bs.insertToRear("Carl");
    bs.insertToRear("Hariette");
    bs.insertToRear("Eddie");
    bs.insertToRear("Laura");
    bs.insertToRear("Judy");          /*this is chillin too*/
    bs.insertToRear("Steve");
    for (int k = 0; k < bs.size(); k++)
    {
        string x;
        bs.get(k, x);
        cout << x << endl;
    }

    //print list and reverse list
    cout << endl << "This tests the printReverse function: " << endl;
    LinkedList ls;
    cout << "Forward: " << endl;
    ls.insertToRear("Cory");
    ls.insertToRear("Topanga");
    ls.insertToRear("Shawn");         /*this is chillin*/
    ls.insertToRear("Eric");
    ls.insertToRear("peter");
    ls.insertToRear("Jes");
    ls.insertToRear("Nigel");
    ls.printList();
    cout << "Reverse: " << endl;
    ls.printReverse();

    //append function
    cout << endl << "This tests the append function: " << endl;
    LinkedList a;
    a.insertToRear("devoe");
    a.insertToRear("biv");
    a.insertToRear("bell");
    LinkedList b;                     /*this is chillin*/
    b.insertToRear("Big Boi");
    b.insertToRear("Andre");
    a.append(b); // adds contents of b to the end of a
    a.printList();
    string s;
    assert(a.size() == 5 && a.get(3, s) && s == "Big Boi");
    assert(b.size() == 2 && b.get(1, s) && s == "Andre");

    //reverse list function
    cout << endl << "this is the test for the reverseList function: " << endl;
    LinkedList e1;
    e1.insertToRear("Norm");
    e1.insertToRear("Cliff");
    e1.insertToRear("Carla");                 //wow
    e1.insertToRear("Sam");
    e1.printList();
    e1.reverseList(); // reverses the contents of e1
    e1.printList();
    string d;
    assert(e1.size() == 4 && e1.get(0, d) && d == "Sam");

    //swap list function
    cout << endl << "This tests the swap function: " << endl;
    LinkedList e2;
    cout << "1: " << endl;
    e2.insertToRear("D");
    e2.insertToRear("C");
    e2.insertToRear("B");
    e2.insertToRear("A");
    e2.printList();
    cout << "2: " << endl;
    LinkedList e3;                /*this is chillin too*/
    e3.insertToRear("Z");
    e3.insertToRear("Y");
    e3.insertToRear("X");
    e3.printList();
    e2.swap(e3); // exchange contents of e1 and e2
    cout << "new 1: " << endl;
    e2.printList();

    string g;
    assert(e2.size() == 3 && e2.get(0, g) && g == "Z");
    assert(e3.size() == 4 && e3.get(2, g) && g == "B");

    return 0;
}

/*
 Virtual Destructors
    when using inheritance/polymorphism use virtual destructors
 
 Pure Virtual Functions (Abstract Functions)
    For virtual fuctions that will never be set in the base class, set these functions
    to be = 0
 
    Must be overridden by the derived class
    unless the derived class is an abstract class
 
 Abstract Base Class (ABC)
    Has at least one pure virtual function
 
    cannot instantiate an object from an abstract base class
 
    dervived classes have to provide the code for all pure virtual functions
    or be abstact itself
 
    force the user to implement certain functions -> prevents bugs
 
    helps use avoid writing "dummy" logic
 
 
 *//*
    Recursion
    1) there must be a base case
    2) every recursive function must have a simplifying step
        recursive function will call itself and solve a smaller sub-problem
        will eventually reach the stopping condition
    3) use only local variable and parameters!
    
    2 ways of simplification
    1) divide the input problem in half like MergeSort (DIVIDE AND CONQUER)
    2) reduce the problem size by 1
    
    steps to write
    1) write the function header: void eatCandy(int layer)
    2) define the magic function
    3) add the code for base case
        if(layer == 0) {
            cout << "eat center!" << endl;
            return;
        }
    4) solve the problem with the magic function
    5) remove the magic
    6) validate your recursive function
        a) Base case (5)
        b) Check at least 1 recursive case
    */
//void printArr(int arr[],int size){
//    if(size == 0){
//        return;
//    }
//    cout << arr[size-1] << endl;
//    printArr(arr, size-1);
//}




