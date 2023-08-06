#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>ans;
    while(t--){
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        int cont=0;
        for(int i=0;i<n;i++){
            int st=abs(H-ar[i]);
            if(st!=0){
               if(st%k==0){
                if(st/k<m)
                    cont++;
            }
            }
        }
        ans.push_back(cont);
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}
