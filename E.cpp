#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (ll) 1e16
const int N = 1e6+5;

vector<int>adj[N];
vector<ll> cost;
vector<bool> visited;

void DFS(int curr){
   ll res=0;
   visited[curr]=true;
   bool hasChild=false;
   for(auto i:adj[curr]){
      hasChild=true;
      if(!visited[i]){
         DFS(i);
      }
      res+=cost[i];
   }
   if(!hasChild){
      res=INF;
   }
   cost[curr]=min(cost[curr],res);
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n , k;
        cin>>n>>k;

        cost.assign(n+2 , INF);
        visited.assign(n+2 , false);
        for(int i=0;i<=n;i++)
            adj[i].clear();

        for(int i=1;i<=n;i++){
            cin>>cost[i];
        }

        for(int i=1;i<=k;i++){
            ll a;
            cin>>a;
            cost[a]=0;
        }

        for(int i=1;i<=n;i++){
            int req;
            cin>>req;
            for(int j=0;j<req;j++){
                int a;
                cin>>a;
                adj[i].push_back(a);
            }
        }
        for(int i=1;i<=n;i++){
            if(!visited[i])
                DFS(i);
        }
        for(int i=1;i<=n;i++)
            cout<<cost[i]<<" ";
        cout<<endl;
    }
    return 0;
}
