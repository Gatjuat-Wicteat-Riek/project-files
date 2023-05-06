#include<bits/stdc++.h>
using namespace std;

// inserting element at the end of a linkedlist
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
void insertAtl(Node**head, int newValue){
    //preparing new node
    Node* newNode = new Node();
    newNode->val=newValue;
    newNode->next=NULL;
    //check the condition if the node is empty or not
    if(*head==NULL){
        *head=newNode;
        return;
    }
    //fine the last node
Node* last = *head;
while(last->next!=NULL){

last=last->next;
}
//insert the node
last->next=newNode;

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

    insertAtl(&head, 4);
    insertAtl(&head, 5);

    printList(head);
    

    system("pause>0");
}