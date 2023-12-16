#include<bits/stdc++.h>
using namespace std; 
class Node
{
    public:
        string val; 
        Node * next;
        Node * prev;   

    Node(string val)
    {
        this->val=val; 
        this->next=NULL; 
        this->prev=NULL; 

    }

};
void insert_at_tail( Node * & head, Node * & tail,  string  val)
{
    Node * newNode= new Node(val); 
    if(tail==NULL)
    {
        head=newNode; 
        tail= newNode;  
        return; 
    }
    tail->next=newNode;
    newNode->prev=tail; 
    tail=tail->next;    

}

int main()
{
    Node * head= NULL; 
    Node * tail=NULL; 
    Node * curr=head; 
    while(true)
    {
        string val; 
        cin>>val; 
        if(val=="end")break; 
        insert_at_tail(head, tail, val); 
    }
    int q; 
    cin>>q; 
    for(int i=1; i<=q; i++)
    {
        string s; 
        cin>>s; 
        if(s=="visit")
        {
            string s2; 
            cin>>s2; 
            bool found=false; 
            Node * tmp=head;  
            while(tmp!=NULL)
            {
                if(tmp->val==s2)
                {
                    cout<<tmp->val<<endl;
                    curr=tmp; 
                    
                    found=true; 
                    break;        
                }
                tmp=tmp->next; 
            }
            if(found==false)
            {
                cout<<"Not Available"<<endl;
            }
             
        }
        else if(s=="prev")
        {
            if(curr->prev!=NULL)
            {
                cout<<curr->prev->val<<endl; 
                curr=curr->prev;
                
            }
            else
            {
                cout<<"Not Available"<<endl; 
                 
            }

        }
        else if(s=="next")
        {
            if(curr->next!=NULL)
            {
                cout<<curr->next->val<<endl; 
                curr=curr->next;
                 
            }
            else
            {
                cout<<"Not Available"<<endl;
                 
            }

        }
    }
    
    

    
    return 0; 
}