// Program: Creation of Linked list

// Linked list implementation in C++

#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;

    Node(int x){
        this -> value = x;
        this -> next = NULL;
    }
};

int main() {
    Node* head;
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);

    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    head = one;
    while (head != NULL) {
        cout << head -> value << " ";
        head = head -> next;
    }

    return 0;
}