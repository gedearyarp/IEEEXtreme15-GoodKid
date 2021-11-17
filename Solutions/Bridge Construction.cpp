#include <bits/stdc++.h>
using namespace std;
void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
bool BFS(vector<int> adj[], int src, int v,
         int pred[], int dist[])
{
    list<int> queue;
    bool visited[v];
    for (int i = 0; i <= v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);
    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);
            }
        }
    }
    return true;
}
int ShortestDistance(vector<int> adj[], int src,
                           int v)
{
    int pred[v], dist[v]; 
    if (BFS(adj, src, v, pred, dist) == false) {
        cout << "Given source and destination"
             << " are not connected";
    }
	int res = 0;
 	for (int i=1;i<=v;i++){
 		if(res<dist[i]){
 			res = dist[i];
		}
	}
			return res;
}
int main(){
 	int tc;
 	cin>>tc;
 	while(tc--){
 		int v1,v2,a,b,min1,idx1,min2,idx2,max1,max2;
 		cin>>v1;
 		vector<int> adj1[v1+1];
 		for(int i=1;i<v1;i++){
 			cin>>a>>b;
 			add_edge(adj1,a,b);
		}
		min1=INT_MAX;
		idx1=-1;
		max1=0;
		for(int i=1;i<=v1;i++){
			if(ShortestDistance(adj1,i,v1)<min1){
				min1= ShortestDistance(adj1,i,v1);
				idx1 = i;
			}
			if(ShortestDistance(adj1,i,v1)>max1){
			    max1=ShortestDistance(adj1,i,v1);
			}
		}
	    cin>>v2;
 		vector<int> adj2[v2+1];
 		for(int i=1;i<v2;i++){
 			cin>>a>>b;
 			add_edge(adj2,a,b);
		}
		min2=INT_MAX;
		idx2=-1;
		max2=0;
		for(int i=1;i<=v2;i++){
			if(ShortestDistance(adj2,i,v2)<min2){
				min2 = ShortestDistance(adj2,i,v2);
				idx2 = i;
			}
			if(ShortestDistance(adj2,i,v2)>max2){
			    max2=ShortestDistance(adj2,i,v2);
			}
		}
		int ret = max(max1,max2);
		ret = max(ret,min1+min2+1);
		cout << ret << endl;
		cout << idx1 << " " << idx2 << endl;
	}
}