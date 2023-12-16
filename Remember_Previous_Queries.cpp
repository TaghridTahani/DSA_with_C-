#include<bits/stdc++.h>
using namespace std;  

int main()
{
    list<int>mylist;
    int q; 
    cin>>q;
    for(int p=0;p<q;p++)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            mylist.push_front(v);
            cout<<"L -> ";
            for(int i:mylist)
            {
                cout<<i<<" ";

            }
            cout<<endl;
            list<int>mylist2(mylist);
            mylist2.reverse();
            cout<<"R -> ";
            for(int i:mylist2)
            {
                cout<<i<<" ";

            }
            cout<<endl;
        }
        else if(x==1)
        {
            mylist.push_back(v);
            cout<<"L -> ";
            for(int i:mylist)
            {
                cout<<i<<" ";

            }
            cout<<endl;
            list<int>mylist2(mylist);
            mylist2.reverse();
            cout<<"R -> ";
            for(int i:mylist2)
            {
                cout<<i<<" ";

            }
            cout<<endl;
        }
        else if(x==2)
        {
            if(v<mylist.size())
            {
                mylist.erase(next(mylist.begin(),v));
            }
            cout<<"L -> ";
            for(int i:mylist)
            {
                cout<<i<<" ";

            }
            cout<<endl;
            list<int>mylist2(mylist);
            mylist2.reverse();
            cout<<"R -> ";
            for(int i:mylist2)
            {
                cout<<i<<" ";

            }
            cout<<endl;
        }
    }
    return 0; 
}