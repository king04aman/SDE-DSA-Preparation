// Problem: https://leetcode.com/problems/delete-node-in-a-linked-list/

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

void deleteNode(ListNode* &node){
    // it can't be tail node
    if(node -> next == NULL)
        return ;
    
    // for other node
    ListNode* temp = node -> next;
    node -> val = temp -> val;
    node -> next = temp -> next; 
    delete temp;
}

void print(ListNode* head){
    while(head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout << endl;
}

int main(){

    ListNode* head = new ListNode(10);
    ListNode* fNext = new ListNode(20);
    ListNode* sNext = new ListNode(30);
    ListNode* tNext = new ListNode(40);

    head -> next = fNext;
    fNext -> next = sNext;
    sNext -> next = tNext;

    print(head);
    deleteNode(sNext);
    print(head);

    return 0;
}