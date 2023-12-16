#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int>freq(26,0);
    string s;
    cin>>s;  
    for(int i=0; i<s.size(); i++)
    {
        int val=s[i]-97;
        freq[val]++;
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i]!=0)
        {
            cout<<char(i+97)<<" "<<":"<<" "<<freq[i]<<endl; 
        }
    }

    
    
   
    return 0; 
}