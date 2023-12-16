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
void same_to_same(Node * head1,Node * head2)
{
    bool found=true; 
    for(Node * i=head1; i!=NULL; i=i->next)
    {
        for(Node * j=head2; j!=NULL; j=j->next)
        {
            if(head1->val!=head2->val)
            {
                found=false; 
                break;  

            }
            else{
                head1=head1->next; 
                head2=head2->next; 
            }

             
        }
    }
    if(found==true)
    {
        cout<<"YES"; 
    }
    else{
        cout<<"NO"; 
    }
}
void size(Node * head1, Node * head2)
{
    bool flag=false; 
    int count1=0; 
    int count2=0; 
    Node * temp1=head1; 
    Node * temp2=head2; 
    while(temp1!=NULL)
    {
        count1++; 
        temp1=temp1->next; 
    }
    while(temp2!=NULL)
    {
        count2++; 
        temp2=temp2->next; 
    }
    if(count1==count2)
    {
        same_to_same(head1,head2); 
    }
    else
    {
        cout<<"NO"; 
    }
}
int main()
{
    Node * head1= NULL; 
    Node * tail1=NULL; 
    Node * head2= NULL; 
    Node * tail2=NULL; 

    while(true)
    {
        long long int val1; 
        cin>>val1; 
        if(val1==-1)break; 
        insert_at_tail(head1, tail1, val1); 
    }
    while(true)
    {
        int val2; 
        cin>>val2; 
        if(val2==-1)break; 
        insert_at_tail(head2, tail2, val2); 
    }
    size(head1, head2); 
    
    return 0; 
}