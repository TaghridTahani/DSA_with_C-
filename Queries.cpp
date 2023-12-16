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
void insert_at_head(Node * & head, Node * & tail,int  val)
{
    Node * newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode; 
        tail= newNode;  
        return; 
    } 
    newNode->next=head;
    head = newNode;  
}
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
void delete_from_postion(Node * head, int pos)
{
    Node * temp=head; 
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next; 
    }
    Node * deleteNode=temp->next; 
    temp->next = temp->next->next; 
    delete deleteNode; 

}
void delete_head(Node * & head)
{
    Node * deleteNode= head; 
    head= head->next; 
    delete deleteNode; 


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
void print_linked_list(Node * head)
{
    Node * temp = head; 
    while(temp !=NULL)
    {
        cout<<temp->val<<" "; 
        temp= temp->next; 
    }

}   
int main()
{
    Node * head=NULL;
    Node * tail=NULL; 
   
    int q; 
    cin>>q; 
    for(int p=0; p<q; p++)
    {
       
        int x, v;
        cin>>x>>v;  
        if(x==0)
        {
            insert_at_head(head,tail,v);
            print_linked_list(head); 
            cout<<endl; 
        }
        else if(x==1)
        {
            insert_at_tail(head, v);
            print_linked_list(head);
            cout<<endl;   
        }
        else if(x==2)
        {
            int size1=size(head); 
            if(v>=size1)
            {
                print_linked_list(head); 
                cout<<endl;
                  
            }
            
            else if(v==0)
            {
                delete_head(head);
                print_linked_list(head); 
                cout<<endl;  
            }
            else{
                delete_from_postion(head,v); 
                print_linked_list(head); 
                cout<<endl;  

            }
            
        }
    }
    
    return 0; 
}