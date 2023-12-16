#include<bits/stdc++.h>
using namespace std; 
class Node
{
    public:
        int val; 
        Node * next;  

    Node(int val)
    {
        this->val=val; 
        this->next=NULL; 

    }

};
void insert_at_tail( Node * & head, Node * & tail,  int  val)
{
    Node * newNode= new Node(val); 
    if(head==NULL)
    {
        head=newNode; 
        tail= newNode;  
        return; 
    }
    tail->next=newNode; 
    tail=newNode;   

}
void print_recursion(Node *n)
{
    if(n==NULL)return; 
    cout<<n->val<<" "; 
    print_recursion(n->next);
}
void remove_duplicate(Node * & head)
{
    Node * i=head;
    while(i!=NULL)
    {
        Node * j=i; 
        while(j->next!=NULL)
        {
            if(j->next->val==i->val)
            {
                Node * deleteNode = j->next; 
                j->next=j->next->next; 
                delete deleteNode; 
            }
            else 
            {
                j=j->next; 
            }
        }
        i=i->next; 
    } 
        
    
}
int main()
{
    Node * head= NULL; 
    Node * tail=NULL; 
    while(true)
    {
        int val; 
        cin>>val; 
        if(val==-1)break; 
        insert_at_tail(head, tail, val); 
    }
    remove_duplicate(head);
    print_recursion( head);
    
    return 0; 
}

/*
void remove_duplicate(Node * & head)
{
    Node * i=head;
    while(i!=NULL)
    {
        Node * j=i; 
        while(j->next!=NULL)
        {
            if(j->next->val==i->val)
            {
                Node * deleteNode = j->next; 
                j->next=j->next->next; 
                delete deleteNode; 
            }
            else 
            {
                j=j->next; 
            }
        }
        i=i->next; 
    } 
        
    
}
*/