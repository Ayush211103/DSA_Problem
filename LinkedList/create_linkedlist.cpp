#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->next=NULL;
    }
    Node(int data){
        cout<<"I'm inside param ctor"<<endl;
        this->data = data;
        this->next = NULL;
    }
};


void printLL(Node* head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(30);
    first->next = second;
    Node* head = first;
    printLL(head);
}