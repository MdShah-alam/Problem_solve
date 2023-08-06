#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int cont=0,temp=0,a=0;
        bool found=false;

        if(ar[0]==ar[n-1])
        {
            for(int i=0; i<n; i++)
            {
                if(ar[0]==ar[i]){
                    cont++;
                    if(cont==k){
                        cout<<"YES"<<endl;
                        a=1;
                        break;
                    }
                }
            }
            if(a==0)
                cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(ar[0]==ar[i])
                {
                    cont++;
                    if(cont==k)
                    {
                        temp=i;
                        found=true;
                        break;
                    }
                }
            }
            if(found)
            {
                for(int i=temp; i<n; i++)
                {
                    if(ar[n-1]==ar[i])
                    {
                        cont++;
                        if(cont%k==0)
                        {
                            cout<<"YES"<<endl;
                            a=1;
                            break;
                        }
                    }
                }
                if(a==0)
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
