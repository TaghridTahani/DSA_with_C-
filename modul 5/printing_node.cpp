//10->20->30->40->50
#include<bits/stdc++.h>
using namespace std; 
class Node
{
    public:
        int val; 
        Node * next_node;  

    Node(int val)
    {
        this->val=val; 
        this->next_node=NULL; 

    }

};
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(NULL);

    head->next_node=a; 
    a->next_node=b; 
    b->next_node=c; 
    c->next_node=d; 

    // cout<<head->val<<endl; 
    // cout<<head->next_node->val<<endl; 
    // cout<<head->next_node->next_node->val<<endl; 
    Node * temp= head; 
    while(temp !=NULL)
    {
        cout<<temp->val<<endl; 
        temp=temp->next_node; 
    }
    //temp=head; ********
    while(temp !=NULL)
    {
        cout<<temp->val<<endl; 
        temp=temp->next_node; 
    }


    
    return 0; 
}