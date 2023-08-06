#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<bool>ft;

    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        bool found=true;
        for(int steps=0;steps<n;steps++){
            int minval=ar[steps],pos=steps;
            for(int j=steps+1;j<n;j++){
                if(ar[j]<minval){
                    pos=j;
                    minval=ar[j];
                }
            }
            if((ar[steps]%2==0 && ar[pos]%2==0) || (ar[steps]%2!=0 && ar[pos]%2!=0))
                swap(ar[steps],ar[pos]);
            else{
                found=false;
            }
        }
        if(found){
            for(int i=0;i<n-1;i++){
                if(ar[i]==ar[i+1]){
                    found=false;
                }
            }
        }
        if(found)
            ft.push_back(1);
        else
            ft.push_back(0);
    }
    for(int i=0;i<ft.size();i++){
        if(ft[i])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
