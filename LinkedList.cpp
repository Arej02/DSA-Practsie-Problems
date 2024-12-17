#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
Node*head=NULL;

void create(){
    int number;
    cout<<"Enter the data:";
    cin>>number;
    head=new Node;
    head->data=number;
    head->next=NULL;
    Node*temp=head;
    char choice;
    do{
        cout<<"Do you want to add another node?(Y/N):";
        cin>>choice;

        if(choice=='Y'||choice=='y'){
            cout<<"Enter another data:";
            cin>>number;
            Node*new1=new Node;
            new1->data=number;
            new1->next=NULL;
            temp->next=new1;
            temp=temp->next;
        } 
    }while(choice=='Y'||choice=='y');
}
void display(){
    if(head==NULL){
        cout<<"The linked list is empty";
        return;
    }
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node*deleteHead(Node*head){
    if(head==NULL){
        cout<<"The linked list is empty.\n";
        return NULL;
    }
    Node*temp=head;
    head=head->next;
    delete temp;
    cout<<"First element deleted";
    return head;
}
Node*removek(Node*head,int k){
    if(head==NULL)return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node*temp=head;
    Node*previous=NULL;
    while(temp){
        count++;
        if(count==k){
            previous->next=temp->next;
            delete temp;
            break;
        }
        previous=temp;
        temp=temp->next;
    }
    return head;
}
Node*deleteval(Node*head,int value){
     if(head==NULL)return head;
    if(head->data==value){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head; 
    }
    Node*temp=head;
    Node*previous=NULL;
    while(temp!=NULL){
        if(temp->data==value){
         previous->next=temp->next;
         delete temp;
        break;
        }
    previous=temp;
    temp=temp->next;
    }
    return head;
}
    
Node*deleteTail(Node*head){
    if(head==NULL){
        cout<<"The linked list is empty";
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        cout<<"The last element is deleted."<<endl;
        return NULL;
    }
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    cout<<"The last element is deleted."<<endl;
    return head;
}

int main(){
    int choice;
    do{
        cout<<"\n-------------------Linked List-----------------------";
        cout<<"\n1. Create a Linked List";
        cout<<"\n2. Display a Linked List";
        cout<<"\n3. Delete first element of a Linked List";
        cout<<"\n4. Delete kth element of a Linked List";
        cout<<"\n5. Delete the given value of a Linked List";
        cout<<"\n6. Delete the last element of a Linked List";
        cout<<"\n7. Exit";

        cout<<"\nEnter your choice:";
        
        cin>>choice;

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            head=deleteHead(head);
            break;
        case 4:
            head=removek(head,3);
            break;
        case 5:
            head=deleteval(head,40);
            break;

        case 6:
            head=deleteTail(head);
            break;
        case 7:
            break;
        }
    }while(choice!=7);
    return 0;
}
