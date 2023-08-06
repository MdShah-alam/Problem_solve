#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int h=0;
    int m=1e9+5;
    bool found=false,f=false;

    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
            found=true;
            break;
        }
    }
    if(found==false){
        cout<<"yes"<<endl;
        cout<<ar[0]<<" "<<ar[0]<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        m=min(m,ar[i]);
    }
    for(int i=0;i<n;i++){
        if(m==ar[i])
            h=i;
    }

    int temp=ar[0];
    ar[0]=m;
    ar[h]=temp;

     for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
            f=true;
            break;
        }
    }
    if(f==false){
        cout<<"yes"<<endl;
        cout<<m<<" "<<temp<<endl;
        return 0;
    }
    else
        cout<<"no"<<endl;
    return 0;
}
