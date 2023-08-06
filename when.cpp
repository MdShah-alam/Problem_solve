#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin>>n>>k;
    char s[n];
    int fr[26]={0};
    for(int i=0;i<n;i++){
        cin>>s[i];
        fr[s[i]]+=1;
    }
    int a=0 , b=0 , c=0 ;
    vector<int>v;
    for(char i = 'A'; i<='Z';i++){
        if(fr[i]>0 && fr[i]<=n){
            a=max(fr[i],a);
            v.push_back(fr[i]);
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        if(v)
    }
    return 0;
}
