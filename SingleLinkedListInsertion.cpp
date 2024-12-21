#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){}

    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
    Node(int data){
        this->data=data;
        next=nullptr;
    }
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
Node*insertHead(Node*head,int val){
    Node*temp=new Node(val,head);
    return temp;
}
Node*insertatk(Node*head,int k,int value){
    if(head==NULL){
        if(k==1){
            return new Node(k);
        }else{
            return head;
        }
    }
    if(k==1){
        return new Node(k,head);
    }
    int count=0;
    Node*temp=head;
    while(temp){
        count++;
        if(count==k-1){
            Node*new1=new Node(value,temp->next);
            temp->next=new1;
        }
        temp=temp->next;
    }
    return head;
}
Node*insertBeforeValue(Node*head,int k,int value){
    if(head==NULL){
        return NULL;
    }
    if(head->data==value){
        return new Node(k,head);
    }
    int count=0;
    Node*temp=head;
    while(temp->next!=NULL){
        count++;
        if(temp->next->data==value){
            Node*new1=new Node(value,temp->next);
            temp->next=new1;
        }
        temp=temp->next;
    }
    return head;
}
    
Node*InsertTail(Node*head,int val){
    if(head==NULL) return new Node(val);
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node*tail=new Node(val);
    temp->next=tail;
    return head;
}

int main(){
    int choice;
    do{
        cout<<"\n-------------------Linked List-----------------------";
        cout<<"\n1. Create a Linked List";
        cout<<"\n2. Display a Linked List";
        cout<<"\n3. Insert first element in the Linked List";
        cout<<"\n4. Insert at kth position of a Linked List";
        cout<<"\n5. Insert before a given value in a Linked List";
        cout<<"\n6. Insert after the last element of a Linked List";
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
            int val;
            cout<<"Enter the number to be inserted:"<<endl;
            cin>>val;
            head=insertHead(head,val);
            break;
        case 4:
            int x;
            int position1;
            cout<<"Enter the number to be inserted:"<<endl;
            cout<<"Enter the position:"<<endl;
            cin>>x;
            cin>>position1;
            head=insertatk(head,position1,x);
            break;
        case 5:
            int y;
            int position2;
            cout<<"Enter the number to be inserted:"<<endl;
            cout<<"Enter the position:"<<endl;
            cin>>x;
            cin>>position2;
            head=insertBeforeValue(head,position2,y);
            break;

        case 6:
            int value;
            cout<<"Enter the number to be inserted:"<<endl;
            cin>>value;
            head=InsertTail(head,value);
            break;
        case 7:
            break;
        }
    }while(choice!=7);
    return 0;
}
