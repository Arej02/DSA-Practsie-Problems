#include<iostream>
#include<vector>

class Node{
    public:
    int data;
    Node*next;
   
    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
Node*convertArr2LL(std::vector<int>&array){
    Node*head=new Node(array[0]);
    Node*mover=head;
    for(int i=0;i<array.size();i++){
        Node*temp=new Node(array[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;

}
int lengthOfLL(Node*head){
    Node*temp=head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
bool search(Node*head,int val){
    Node*temp=head;
    while(temp){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}       
        

int main(){
    std::vector<int>array={1,3,4,5,8,9};
    Node*head=convertArr2LL(array);
    bool result=search(head,4);
    if(result==1){
        std::cout<<"The number is present";
    }else{
        std::cout<<"The number isnot present.";
    }
    return 0;
}