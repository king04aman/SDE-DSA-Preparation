// Deletion of node in a linked list

#include<iostream>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;

    ListNode(int x){
        this -> val = x;
        this -> next = NULL;
    }

    ~ListNode(){
        if(this -> next != NULL){
            this -> next = NULL;
        }
        delete this -> next;
    }
};

void deleteNode(ListNode* &head, int pos){
    ListNode* temp = head;
    if(pos == 1){
        head = head -> next;
        delete temp;
        return;
    }

    ListNode* prev = NULL;
    ListNode* curr = head;
    int cnt = 1;
    while(cnt <= pos){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}

void print(ListNode *head){
    while(head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout << endl;
}

int main(){

    ListNode* head = new ListNode(10);
    ListNode* fNode = new ListNode(20);
    ListNode *snode = new ListNode(30);

    head -> next = fNode;
    fNode -> next = snode;

    print(head);
    deleteNode(head, 2);
    print(head);

    return 0;
}