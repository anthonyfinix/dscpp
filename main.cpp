#include <iostream>
#include "linkedlist.cpp"
using namespace std;

int main() {
    LinkedList linkedList = LinkedList();
    linkedList.add(10);
    linkedList.add(20);
    linkedList.add(30);
    linkedList.add(40);
    linkedList.remove(30);
    linkedList.view();
    return 0;
}