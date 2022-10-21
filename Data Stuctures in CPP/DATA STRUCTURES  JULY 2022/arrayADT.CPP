#include <iostream>
using namespace std;
// Classes and Functions Here

class ArrayADT {
private:
    int capacity;
    int last_index;
    int* ptr;
public:
    ArrayADT(int cap) {//Creating Array Using Constructor
        capacity = cap;
        ptr = new int[cap];
        last_index = -1;
    }

    void append(int val) {
        if (last_index + 1 == capacity)
            cout << "Array Overflow" << endl;
        else
            ptr[++last_index] = val;

    }

    //Insert element at k index
    void insert(int index, int val) {
        if (last_index + 1 == capacity) {
            cout << "Array Overflow" << endl;
        }
        else if (last_index == -1) {
            cout << "Array UnderFlow" << endl;
        }
        else {
            int i = ++last_index;
            while (i > index) {
                ptr[i] = ptr[i - 1];
                i--;
            }
            ptr[index] = val;
        }
    }

    //Deleting element from array
    void remove(int index) {
        if (index == -1)
            cout << "Array is Empty" << endl;
        else if (index >= capacity || index < 0)
            cout << "Invalid index" << endl;
        else {
            int i = index;
            while (i != last_index)
            {
                ptr[i] = ptr[i + 1];
                i++;
            }
            last_index--;
        }
    }

    //Counting Elements Of array
    int getCount() {
        if (last_index == -1)
            return 0;
        else
            return last_index + 1;
    }

    //Getting Element from k index
    int get(int index) {
        if (index > last_index || index < 0)
            return -1;
        else
            return ptr[index];
    }

    //Printing Elements Of Array
    void printAll() {
        if (last_index == -1)
            cout << "Array is Empty" << endl;
        else {
            int i = 0;
            while (i != last_index + 1) {
                cout << ptr[i] << " ";
                i++;
            }
            cout << endl;
        }
    }
 

    bool is_valid_value(int val) {
        int i = 0;
        if (last_index == -1)
            return false;
        while (i <= last_index) {
            if (val == ptr[i])
                return true;
            i++;
        }
        return false;
    }
};


int main()
{
    //Write Your code Here
    ArrayADT a(10);
    a.append(10);
    a.insert(1, 20);
    a.append(30);
    a.append(30);
    a.printAll();
    a.remove(0);
    a.printAll();
    cout << a.getCount() << endl;
    cout << a.is_valid_value(10) << endl;
    return 0;
}