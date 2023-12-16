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
void insert_tail(Node *& head, Node * &tail,int val)
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
void palintrom(Node * head, Node *tail)
{
    bool found=true; 
    Node * tmp1=head; 
    Node * tmp2=tail; 
    int i=1; 
    while(tmp1!=tmp2)
    {
        if(tmp1->val!=tmp2->val)
        {
            found =false; 
            break;  
        }
        tmp1=tmp1->next; 
        tmp2=tmp2->prev;
    }
    if(found==false)
    {
        cout<<"NO"; 
    }
    else{
        cout<<"YES"; 
    }
    

}
int main()
{
    Node * head=NULL; 
    Node * tail=NULL;
    while(true)
    {
        int val; 
        cin>>val; 
        if(val==-1)break; 
        insert_tail(head, tail, val); 
    }
    palintrom(head, tail); 

    
    return 0; 
}