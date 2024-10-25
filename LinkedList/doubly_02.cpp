#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    //constructor is a special tpe of function 
    Node(int val){
        this->data=val;
        this->next=nullptr;
        this->prev=nullptr;
    }
};



int main(){
    //
    Node* head=new Node(10);
    cout<<head->data<<endl;
    cout<<head->prev<<" "<<head->next;
}