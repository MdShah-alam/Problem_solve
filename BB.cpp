#include<bits/stdc++.h>
using namespace std;

void test_case()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v)cin>>i;

    if(n==1){
        cout<<"NO"<<endl;
        return ;
    }

    int cnt1 = count(v.begin(),v.end() ,1);
    long long sum=0;

    for(int i=0;i<n;i++){
        sum+=(v[i]-1);
    }

    if(cnt1>sum)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        test_case();
    }
    return 0;
}
