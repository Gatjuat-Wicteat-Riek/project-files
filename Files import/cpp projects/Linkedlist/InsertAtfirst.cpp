#include<bits/stdc++.h>
using namespace std;

//Inserting new node at the beginning of the linkedlist

class Node{
public:
    int val;
    Node* next;
};
void printList(Node* n){
    while(n!=NULL){
        cout << n->val << endl;
        n = n->next;
    }
}
void insertAtb(Node**head, int value){
    Node* newN = new Node();
    newN->val=value;
    newN->next = *head;
    *head = newN;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->val=1;

    head->next=second;

    second->val=2;

    second->next=third;

    third->val=3;

    third->next=NULL;

    insertAtb(&head, 5);

    printList(head);
}