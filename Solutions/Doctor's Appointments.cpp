#include<bits/stdc++.h>
using namespace std;

bool bfs(int n,int dist[],int pairU[],vector<int> adj[], int pairV[]){
    queue<int> Q;
    for (int u=1; u<=n; u++)
    {
        if (pairU[u]==0)
        {
            dist[u] = 0;
            Q.push(u);
        }
 
        else dist[u] = INT_MAX;
    }
    dist[0] = INT_MAX;
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        if (dist[u] < dist[0])
        {
        	int a = adj[u][0];
        	int b = adj[u][1];
            for (int i=a;i<=b;i++)
            {
                int v = i;
                if (dist[pairV[v]] == INT_MAX)
                {
                    dist[pairV[v]] = dist[u] + 1;
                    Q.push(pairV[v]);
                }
            }
        }
    }
    return (dist[0] != INT_MAX);
}

bool dfs(int u, vector<int> adj[],int dist[], int pairU[], int pairV[]){
    if (u != 0){
    	int a = adj[u][0];
    	int b = adj[u][1];
        for (int i=a;i<=b;i++){
            int v = i;
            if (dist[pairV[v]] == dist[u]+1){
                if (dfs(pairV[v],adj,dist,pairU,pairV) == true){
                    pairV[v] = u;
                    pairU[u] = v;
                    return true;
                }
            }
        }
        dist[u] = INT_MAX;
        return false;
    }
    return true;
}

void hopcroftKarp(vector<int> adj[],int n){
    int pairU[n+1];
    int pairV[n+1];
    int dist[n+1];
    for (int u=0; u<=n; u++)
        pairU[u] = 0;
    for (int v=0; v<=n; v++)
        pairV[v] = 0;
    int result = 0;
    while (bfs(n,dist,pairU,adj,pairV))
    {
        for (int u=1; u<=n; u++)
            if (pairU[u]==0 && dfs(u,adj,dist,pairU,pairV))
                result++;
    }
    if (result<n){
    	cout << "impossible" << endl;
	}
    else{
    	for (int i=1;i<n;i++){
    		cout << pairV[i] << " ";
		}
		cout << pairV[n] << endl;
	}
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}
 
int main(){
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> adj[n+1];
        for(int j = 1; j<=n; j++){
            cin>>a>>b;
            addEdge(adj,j,a);
            addEdge(adj,j,b);
        }
    	hopcroftKarp(adj,n);
	}
}