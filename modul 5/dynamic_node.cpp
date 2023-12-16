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
    //Node a(10); 
    Node * head = new Node (10); 
    Node *a = new Node(20); 
    head->next_node = a;
    // if(head.empty())
    // {
    //     cout<<"YES"<<endl;
    // }

    cout<<head->val<<endl; 
    cout<<a->val<<endl; 
    cout<<head->next_node->val<<endl;
    

    return 0; 
}