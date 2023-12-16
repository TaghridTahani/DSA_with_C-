#include<bits/stdc++.h>
using namespace std; 
class Node
{
    public:
        int val; 
        Node * next;
        Node * prev;   

    Node(int val)
    {
        this->val=val; 
        this->next=NULL; 
        this->prev=NULL; 

    }

};
void print_normal(Node * head)
{
    Node * temp=head; 
    cout<<"L -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;  
    }
    cout<<endl; 
}
void print_reverse(Node * tail)
{
    Node * temp=tail; 
    cout<<"R -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" "; 
        temp=temp->prev;
    }
    cout<<endl; 

}
void insert_head(Node * & head,Node * & tail,  int val)
{
    Node * newNode=new Node(val); 
    if(head==NULL)
    {
        head=newNode; 
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode; 
}
void insert_tail(Node * & head,Node * & tail,  int val)
{
    Node * newNode=new Node(val); 
    if(tail==NULL)
    {
        head=newNode; 
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next; 
}
void insert_at_position(Node * & head, int pos,int val)
{
    Node * newNode=new Node(val);
    Node * temp=head;
    for(int i=1; i<=pos-1;i++)
    {
        temp=temp->next;
    } 
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=temp;   
}
int size(Node * head)
{
    int count=0; 
    Node * temp=head; 
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
        
    }
    return count;
}
int main()
{
    
    Node * head=NULL; 
    Node * tail=NULL;
   
    int q; 
    cin>>q;
    for(int p=0;p<q;p++)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos>size(head))
        {
            cout<<"Invalid"<<endl; 
        }
        else if(pos==0)
        {
            insert_head(head,tail,val);
            print_normal(head);
            print_reverse(tail);
        }
        else if(pos==size(head))
        {
            insert_tail(head,tail,val);
            print_normal(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_position(head,pos,val);
            print_normal(head);
            print_reverse(tail);
        }

    } 

    
    return 0; 
}