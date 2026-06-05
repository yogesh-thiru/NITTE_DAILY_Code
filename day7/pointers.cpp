#include<bits/stdc++.h>
class Node{
    public:
int data;
Node* next;

Node(int val=0){
    data = val;
    next = nullptr;
}
};

void addatbeg(Node* &head,int val){
Node* newNode = new Node(val);
newNode->next = head;
head= newNode;            
}

void addatmiddle(Node* head,int val ,int pos){
if(!head)addatbeg(head,val);
pos -=2; int cnt =0;
while(head && cnt < pos){
    head=head->next;
    cnt++;
}
Node* newNode = new Node(val);
newNode->next = head->next;
head->next = newNode;
}

    

void todeletebeg(Node* &head){
    Node* temp  = head->next;
    head->next = nullptr;
    head = temp; 

}









void addatend(Node * head,int val){
    if(!head)return;
    while(head->next){//n4
        head = head->next;//n4
    }
    Node* newNode = new Node(val);
    head->next = newNode;
}
void traverse(Node* head){
    if(!head)return;
    while(head){
        std::cout<<head->data<<"->";
        head = head->next;
    }
    std::cout<<"NULL";
}
int main(){
Node* head;
Node* n1 = new Node(5);
head = n1;
Node* n2= new Node(10);
n1->next = n2;
Node* n3 = new Node(15);
n2->next = n3;
Node* n4= new Node(20);
n3->next = n4;
addatmiddle(head,25,2);
traverse(head);
todeletebeg(head);
traverse(head);
}


                         
 