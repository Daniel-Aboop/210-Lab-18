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
Node* choice1(Node *);
Node * choide2(Node *);

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
        cout<<"Enter review rating 0-5: ";
        cin>>rating;
        cout<<"Enter review comments: ";
        getline(cin,comment);
        cout<<endl<<comment;
        break;



    }




    return 0;
}
