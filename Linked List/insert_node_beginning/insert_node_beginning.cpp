#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* head;

// functions

void insert(int inputValue) {
    Node* newNode = new Node();
    newNode->value = inputValue;
    newNode->next = head;
    // head contains first node

    head = newNode;
    // update head to the newly created node
}
void print() {
    Node* temp = head;
    cout << "The list is:";
    while (temp->next != NULL) {
        cout << " " << temp->value;
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    head = NULL;

    int nodes_count;
    cout << "How many nodes do you want? ";
    cin >> nodes_count;

    for (int i = 0; i < nodes_count; i++)
    {
        cout << "Enter the value of the node:\n";
        int value;
        cin >> value;
        insert(value);
        print();
    }
    

    return 0;
}