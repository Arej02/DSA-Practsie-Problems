#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*back;

    Node(int data,Node*next,Node*back){
        this->data=data;
        this->next=next;
        this->back=back;
    }
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->back=nullptr;
    }
};
Node*head=nullptr;
Node*convertArr2LL(std::vector<int>&array){
    Node*head=new Node(array[0]);
    Node*previous=head;
    for(int i=1;i<array.size();i++){
        Node*temp=new Node(array[i],nullptr,previous);
        previous->next=temp;
        previous=previous->next;
    }
  
    return head;

}
Node*deleteHead(Node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node*temp=head;
    head=head->next;
    temp->next=nullptr;
    head->back=nullptr;
    delete temp;
    return head;
}
Node*deleteTail(Node*head){
    if(head->next==nullptr || head==NULL){
        return nullptr;
    }
    Node*tail=head;
    while (tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node*previous=tail->back;
    previous->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
    
}
Node*deletekthelement(Node*head,int value){
    if(head==NULL)return NULL;
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==value) break;
        temp=temp->next;
    }
    Node*front=temp->next;
    Node*previous=temp->back;
    if(previous==NULL && front==NULL)return NULL;
    else if(previous==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    front->back=temp->back;
    previous->next=temp->next;
    temp->next->back=nullptr;
    delete temp;
    return head;
    
}
Node*deleteNode(Node*temp){
    Node*front=temp->next;
    Node*previous=temp->back;
    if(front==NULL){
        previous->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return NULL;
    }

    front->back=temp->back;
    previous->next=temp->next;
    temp->next->back=nullptr;
    delete temp;
    
    return head;
    
}
void display(Node*head){
    if(head==NULL){
        cout<<"The linked list is  empty";
        return;
    }
    Node*tempa=head;
    while(tempa!=NULL){
        cout<<tempa->data<<" ";
        tempa=tempa->next;
    }
}

int main(){
    vector<int>array={12,5,8,7};
    Node*head=convertArr2LL(array);
    deleteNode(head->next->next);
    display(head);
    return 0;
}