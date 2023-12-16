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
void insert_at_head(Node * & head, int val)
{
    Node * newNode= new Node(val);
    newNode->next=head; 
    head = newNode; 

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
void delete_head(Node * head)
{
    Node * deleteNode= head; 
    head= head->next; 
    delete deleteNode; 


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
        cout<<"Option 4: insert at head"<<endl;
        cout<<"Option 5: Delete from any postion"<<endl; 
        cout<<"option 6: Break"<<endl; 
        cout<<"Option 7:delete head"<<endl;
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
            if(pos==0)
            {
                insert_at_head(head, val); 
            } 
            else{
                insert_at_any_postion(head, pos, val); 
            }
        }
        else if(op==4)
        {
            int val; 
            cout<<"Enter value"<<endl; 
            cin>>val; 
            insert_at_head(head, val); 
            
        }
        else if(op==5)
        {
            int pos; 
            cout<<"Enter postion; ";
            cin>>pos; 
            if(pos==0)
            {
                delete_head(head); 
            }
            else{
                delete_from_postion(head, pos);
            }  


        }
        
        else if(op==6)
        {
            break; 
        }
        else if(op==7)
        {
            delete_head(head); 
        }
    }
    

    
    return 0; 
}