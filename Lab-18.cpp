// COMSC-210 | Lab 18 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <string>
using namespace std;

struct Node{
    double rating;
    string comment;
    Node* next;
};

void output(Node *head);
Node * choice1(Node *head,double rating,const string& comment);
Node * choice2(Node *head,double rating,const string& comment);
// This function is not apart of the assignment however I added it to free up the memory used
void deletelist(Node * head);

int main(){
    Node *head = nullptr;
    cout<<"Which linked list method should we use?"<<endl;
    cout<<"    [1] New nodes are added at the head of the linked list"<<endl;
    cout<<"    [2] New nodes are added at the tail of the linked list"<<endl;
    cout<<"Choice: ";
    int choice;
    cin>>choice;
    while(true){
        double rating;
        string comment;
        string yn;
        cout<<"Enter review rating 0-5: ";
        cin>>rating;
        cout<<"Enter review comments: ";
        cin.ignore();
        getline(cin,comment);
        if(choice==1){
            head=choice1(head,rating,comment);
        }
        else if(choice==2){
            head=choice2(head,rating,comment);
        }
        cout<<"Enter another review? Y/N: ";
        getline(cin,yn);
        if(yn=="N"||yn=="n"){
            break;
        }
    }
    output(head);
    // free up the memory used when making the linked list
    deletelist(head);
    return 0;
}
void output(Node * head){
    if(!head){
        cout<<"Empty list.\n";
        return;
    }
    int count = 1;
    double avg=0;
    Node * current = head;
    cout<<"Outputting all reviews:"<<endl;
    while (current) {
        cout<<"> Review #"<<count++<<": "<< current->rating<<": "<<current->comment<<endl;
        avg+=current->rating;
        
        current = current->next;
    }
    // to find the average it would be 2, so since it loops 1 more time for nullptr i did -1 to make sure its okay for average
    cout<<"> Average: "<<avg/(count-1)<<endl;
}

Node* choice1(Node *head,double rating,const string& comment){
    Node* newNode = new Node{rating, comment, head};
    return newNode;
}
void deletelist(Node * head){
  Node * current = head;
    while (current) {
        head = current->next;
        delete current;
        current = head;
    }
    head = nullptr;
}

Node* choice2(Node *head,double rating,const string& comment){
    Node* newNode = new Node{rating,comment,nullptr};
    //if this is the first thing inside of our list it will become the new head.
    if(head==nullptr){
        return newNode;
    }
    Node* current = head;
    while(current->next!=nullptr){
        current=current->next;
    }
    current->next=newNode;
    return head;
}