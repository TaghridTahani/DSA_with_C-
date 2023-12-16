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
void insert_at_tail(Node * & head, int val)
{
    
    Node * newNode= new Node(val);
    if(head ==NULL)
    {
        head= newNode; 
        return; 
    }
    Node * temp=head; 
    while(temp->next !=NULL)
    {
        temp=temp->next; 
    }
    temp->next=newNode; 
}  
void print_linked_list(Node * head)
{
    Node * temp = head;
    cout<<"Your linked list"<<endl;  
    while(temp !=NULL)
    {
        cout<<temp->val<<" "; 
        temp= temp->next; 
    }
    cout<<endl; 

}     
int main()
{
    Node * head= NULL; 
    while(true)
    {
        cout<<"Option 1: Insert at tail"<<endl; 
        cout<<"Option 2: Print linked list "<<endl; 
        cout<<"Option 3: break"<<endl; 
        int op; 
        cin>>op; 

        if(op==1)
        {
            
            
            int val;
            cout<<"Enter your value : "; 
            cin>>val; 
            insert_at_tail(head, val); 
        }
        else if(op==2)
        {
            print_linked_list(head); 
        }
        else if(op==3)
        {
            break; 
        }
    }
    

    
    return 0; 
}