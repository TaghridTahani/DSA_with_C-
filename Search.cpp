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
void serch(Node * head, int x)
{
    int count=0;
    bool found=false;  

    for(Node * i=head; i!=NULL; i=i->next)
    {
        if(i->val==x)
        {
            found=true;
            break;  
        }
        count++; 
    }
    if(found==true)
    {
        cout<<count<<endl; 
    }
    else
    {
        cout<<"-1"<<endl; 
    }
}
int main()
{
    int t; 
    cin>>t; 
    for(int p=0; p<t; p++)
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
        int x; 
        cin>>x; 
        serch(head, x) ;
         
    }
    
    return 0; 
}

// for(Node * i=head1; i!=NULL; i=i->next)
//     {
//         for(Node * j=head2; j!=NULL; j=j->next)
//         {
//             if(i->val!=j->val)
//             {
//                 found=false; 
//                 break;  

//             }
//             else{
//                 found=true; 
//             }

             
//         }
//     }