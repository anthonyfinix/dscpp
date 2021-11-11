#include <iostream>
#include "linkedlist.cpp"
using namespace std;

int main() {
    LinkedList linkedList = LinkedList();
    linkedList.add(10);
    linkedList.add(30);
    linkedList.add(60);
    linkedList.view();
    return 0;
}