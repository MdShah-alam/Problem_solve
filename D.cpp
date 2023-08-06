#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n-1];
        set<ll>st;
        st.insert(n);

        for(ll i=0;i<n-1;i++){
            cin>>ar[i];
            st.insert(i+1);
        }

        ll fl=1;
        ll left=-1;
        if(st.find(ar[0]) != st.end())
            st.erase(st.find(ar[0]));
        else{
            if(left==-1)
                left=ar[0];
            else
                fl=0;
        }
        for(ll i=1;i<n-1;i++){
            ll diff=ar[i]-ar[i-1];
            if(st.find(diff) != st.end())
                st.erase(st.find(diff));
            else{
                if(left==-1)
                    left=diff;
                else{
                    fl=0;
                    break;
                }
            }
        }
        if(fl==0)
            cout<<"NO"<<endl;
        else{
            ll sum=0;
            for(auto val : st)
                sum+=val;

            if(left==-1){
                int rq=n*(n+1)/2;
                if(rq-ar[n-2]==sum)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else{
                if(sum==left)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
