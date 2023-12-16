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
int minimum_value(Node * head)
{
    long long int min = INT_MAX; 
    for(Node * i=head; i!=NULL; i=i->next)
    {
        if(i->val<min)
        {
            min=i->val;
        }
    }
    return min; 
}
int maximum_value(Node * head)
{
    long long int max = INT_MIN; 
    for(Node * i=head; i!=NULL; i=i->next)
    {
        if(i->val>max)
        {
            max=i->val;
        }
    }
    return max; 
    
}
int main()
{
    Node * head= NULL; 
    Node * tail=NULL; 
    while(true)
    {
        long long int val; 
        cin>>val; 
        if(val==-1)break; 
        insert_at_tail(head, tail, val); 
    }
    long long int min=minimum_value(head); 
    long long int max=maximum_value(head); 
    long long int diff=abs(max-min); 
    cout<<diff; 
    
    return 0; 
}