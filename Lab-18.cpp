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
        string yn;
        cout<<"Enter review rating 0-5: ";
        cin>>rating;
        cout<<"Enter review comments: ";
        cin.ignore();
        getline(cin,comment);
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
    cout<<
    while (current) {
        cout << "[" << count++ << "] " << current-> << endl;
        current = current->next;
    }
    cout << endl;

}