 #include<bits/stdc++.h>
 using namespace std;
 

 class Node{
public:
int  data;
Node* prev;
Node* next;

Node(int val){
    data = val;
    next = nullptr;
    prev = nullptr;
}

 };

 void traverse(Node* head){
    while(head){
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<"NULL";
 }
 

 void addatstart(Node* &head, int val ){
    Node* n = new Node(val);
    head->prev=n;
    n->next=head;
    head=n;
    traverse(head);

 }

 void addatend(Node* head, int val){
    Node* newNode = new Node(val);
    if(!head) head = newNode;

    Node* temp = head;
    while(temp->next) 
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    traverse(head);
 }
 int main(){

    Node* head;
    Node* n1 = new Node(5);
    head = n1;
     Node* n2 = new Node(10);
     n1->next = n2;
     n2->prev = n1;
      Node* n3 = new Node(15);
         n2->next = n3;
     n3->prev = n2;
       Node* n4 = new Node(20);
       n3->next = n4;
     n4->prev = n3;
        Node* n5 = new Node(25);
        n4->next = n5;
     n5->prev = n4;
         Node* n6 = new Node(30);
n5->next = n6;
     n6->prev = n5;
traverse(head);
cout<<endl;
addatstart(head,1);
cout<<endl;

addatend(head,9);
    
    return 7;
 }