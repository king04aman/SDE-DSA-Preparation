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
};

void insertAtBeg(ListNode* &head, int x){
    ListNode* temp = new ListNode(x);
    temp -> next = head;
    head = temp;
}

void printList(ListNode* head){
    while(head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout << endl;
}

int calculateBinary(ListNode* head){
    int ans = 0;

    while(head != NULL){
        ans = ans * 2;
        ans = ans + head -> val;
        head = head -> next;
    }    
    return ans;
}

int main(){
    ListNode* head = new ListNode(0);
    insertAtBeg(head, 0);
    insertAtBeg(head, 0);

    cout << "List Elements : ";
    printList(head);
    cout << "Decimal Number: " << calculateBinary(head) << endl;

    return 0;
}