#include <iostream>
using namespace std;
// Classes and Functions Here
class List {
    struct node
    {
        int item;
        node* next;
    };
    node* start;
public:
    List() { start = NULL; }

    //Insetion at beginning

    void insertAtFront(int data)
    {
        node* newNode = new node;
        newNode->item = data;

        if (start == NULL) {
            newNode->next = NULL;
            start = newNode;
        }
        else {
            newNode->next = start;
            start = newNode;
        }
    }

    void insertAtEnd(int data) {
        node* newNode = new node;
        newNode->item = data;
        newNode->next = NULL;

        if (start == NULL) {
            start = newNode;
        }
        else if (start->next == NULL) {
            start->next = newNode;
        }
        else {
            node* temp = start;

            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Inserting After N element
    void insertAfter(int prevEle, int data) {
        if (start == NULL) {
            cout << "Element Not Found!" << endl;
        }
        else {
            node* temp = start;
            node* newNode = new node;
            newNode->item = data;

            while (temp->item != prevEle) {
                temp = temp->next;
                if (temp == NULL) {
                    break;
                }
            }
            if (temp == NULL)
                cout << "Element Not Found!" << endl;
            else
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }

    // Deletion at start 

    void deleteAtBeg()
    {
        if (start == NULL) {
            cout << "List is Empty" << endl;
        }
        else {
            if (start->next == NULL) {
                delete start;
                start = NULL;
            }
            else {
                node* temp = start;
                start = start->next;
                delete temp;
            }
        }
    }

    // Deletion at end
    void deleteAtEnd() {
        if (start == NULL) {
            cout << "List is Empty" << endl;
        }
        else if (start->next == NULL) {
            node* temp = start;
            start = NULL;
            delete temp;
        }
        else {
            node* temp = start;
            node* temp2;
            while (temp->next != NULL) {
                temp2 = temp;
                temp = temp->next;
            }

            temp2->next = NULL;
            delete temp;
        }
    }

    void deleteElement(int value) {
        if (start == NULL) {
            cout << "List is Empty" << endl;
        }
        else {
            node* temp = start;
            while (temp->item != value) {
                temp = temp->next;
                if (!temp)
                    break;
            }

            if (!temp) {
                cout << "Element Doesn't Exists" << endl;
            }
            else {
                node* temp2 = temp;
                temp2 = temp2->next;
                delete temp;
            }
        }
    }

    // Viewing All

    void ViewAll() {
        if (start == NULL)
            cout << "List is empty" << endl;
        else
        {
            node* temp;
            temp = start;
            while (temp != NULL)
            {
                cout << temp->item << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};




int main()
{
    //Write Your code Here

    List l1;
    l1.insertAtFront(1);

    l1.insertAtEnd(25);

    l1.insertAfter(25, 10000);

    l1.ViewAll();

    l1.deleteAtEnd();

    l1.ViewAll();

    l1.insertAtFront(1);

    l1.insertAtEnd(25);

    l1.insertAfter(25, 10000);
    l1.ViewAll();

    return 0;
}