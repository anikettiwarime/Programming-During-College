#include <iostream>
#include <stdio.h>
using namespace std;
class List
{
private:
    class node {
    public:
        int item;
        node* next;
    };
    node* start;
public:
    List() { start = NULL; }

    void addAtStart(int data) {
        node* n = new node;
        n->item = data;
        n->next = start;
        start = n;
    }

    void addAtLast(int data) {
        node* n = new node;
        n->item = data;
        n->next = NULL;
        if (start == NULL) {
            start = n;
        }
        else {
            node* temp = start;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }
    }

    void viewList() {
        node* temp = start;
        while (temp->next != NULL)
        {
            cout << temp->item << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void deleteFirst() {
        if (start->next == NULL)
            cout << "List is already Empty";
        else {
            node* r;
            r = start;
            start = start->next;
            delete r;
        }
    }
    void deleteLast() {
        if (start == NULL)
            cout << "List is already Empty";
        else if (start->next == NULL)
            delete start;
        else {
            node* temp = start;
            node* r = start;
            while (temp->next != NULL) {
                r = temp;
                temp = temp->next;
            }
            r->next = NULL;
            delete temp;
            temp = NULL;
        }
    }

    ~List() {
        while (start->next != NULL)
            deleteFirst();
    }
};

int main()
{
    List l1;
    l1.addAtLast(10);
    l1.addAtLast(20);
    l1.addAtLast(40);
    l1.addAtLast(30);
    l1.viewList();
    l1.deleteLast();
    l1.viewList();
    l1.deleteLast();
    l1.viewList();
}