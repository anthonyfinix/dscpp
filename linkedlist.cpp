#include <iostream>
using namespace std;

struct nodeStruct
{
    int value;
    nodeStruct *next;
};

class LinkedList
{
public:
    nodeStruct *head, *tail;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void add(int value)
    {
        nodeStruct *tempNode = new nodeStruct;
        tempNode->value = value;
        tempNode->next = NULL;
        if (head == NULL)
        {
            head = tempNode;
            tail = tempNode;
        }
        else
        {
            tail->next = tempNode;
            tail = tail->next;
        }
    };

    void view()
    {
        nodeStruct *tempNode;
        tempNode = head;
        while (tempNode != NULL)
        {
            cout << tempNode->value << endl;
            tempNode = tempNode->next;
        }
    };

    void remove(int value)
    {
        cout << "remove\n";
        nodeStruct *tempNode;
        nodeStruct *prevNode;
        tempNode = head;
        if (head == NULL)
        {
            cout << "List is empty";
        }
        else
        {
            do
            {
                if (tempNode->value == value)
                {
                    prevNode->next = tempNode->next;
                }
                prevNode = tempNode;
                tempNode = tempNode->next;
            } while (tempNode != NULL);
        }
    }
};