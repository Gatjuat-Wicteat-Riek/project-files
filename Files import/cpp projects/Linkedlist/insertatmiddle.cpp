#include<bits/stdc++.h>
using namespace std;

//creating linkedlist
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
void insertAtmiddle(Node*previous, int newValue){
    //checking if the previous is null or not
    if(previous==NULL){
        cout << "The previous number can not be null" << endl;
    }
    //creating a new node
    Node* newNode= new Node();
    newNode->val=newValue;
    //insert new node after previous
    newNode->next=previous->next;
    previous->next=newNode;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->val=1;

    head->next=second;

    second->val=2;

    second->next=third;

    third->val=4;

    third->next=NULL;
    insertAtmiddle(second, 3);
    printList(head);
}