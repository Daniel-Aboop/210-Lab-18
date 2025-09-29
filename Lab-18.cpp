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

void output(Node *);
Node* choice1(Node *, int rating,string comment);
Node * choide2(Node *, int rating,string comment);

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
            
        }
        cout<<"Enter another review? Y/N: ";
        getline(cin,yn);
        if(yn=="N"||yn=="n"){

        }


    }




    return 0;
}
void output(Node * head){
    if(!head){
        cout<<"Empty list.\n";
        return;
    }
    int count = 1;
    Node * current = head;
    cout<<"Outputting all reviews:"<<endl;
    while (current) {
        cout<<"> Review #"<<count<< current->rating<<" : "<<current->comment;
        current = current->next;
    }
    cout << endl;

}
Node* choice1(Node *head,double rating,string comment){
    Node * newNode = new Node;
    newNode->rating=rating;
    newNode->comment=comment;
    newNode->next=head;
    return newNode;

}