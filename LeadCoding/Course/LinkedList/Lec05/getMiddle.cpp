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

ListNode* getMidNode(ListNode* head){
    if(head == NULL || head -> next == NULL)
        return head;
    if(head -> next -> next == NULL)
        return head -> next;

    ListNode* slow = head; 
    ListNode* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

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

int main(){
    ListNode* head = new ListNode(50);

    insertAtBeg(head, 40);
    insertAtBeg(head, 30);
    insertAtBeg(head, 20);
    insertAtBeg(head, 10);
    printList(head);

    ListNode* mid = getMidNode(head);
    cout << mid -> val << endl;

    return 0;
}
