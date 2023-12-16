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
void insert_at_any_postion(Node *head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * temp = head; 
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next; 
    } 
    newNode->next=temp->next; 
    temp->next=newNode; 
    cout<<endl<<endl<<"Inseted at postion"<<pos<<endl<<endl; 

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
        cout<<"Option 3: insert in any postion "<<endl; 
        cout<<"option 4: Break"<<endl; 
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
            int pos, val; 
            cout<<"Enter postion : "<<endl; 
            cin>>pos; 
            cout<<"Enter value : "<<endl; 
            cin>>val; 
            insert_at_any_postion(head, pos, val); 
        }
        else if(op==4)
        {
            break; 
        }
    }
    

    
    return 0; 
}