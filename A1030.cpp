#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

const int N=510;
const int INF=1000000000;
int n,m,s,end,G[N][N],C[N][N],weight[N];
int d[N],c[N],pre[N];
bool vis[N]={false};
vector<int>temppath,path; 

void dijkstra(int s){
	fill(d,d+N,INF);
	fill(c,c+N,INF);
	for(int i=0;i<n;i++) pre[i]=i;
	d[s]=0;
	c[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,min=INF;
		for(int j=0;j<n;j++){
			if(vis[j]==false&&d[j]<min){
				u=j;
				min=d[j];
			} 
		}
		if(u==-1) return;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(vis[v]==false&&G[u][v]!=INF){
				if(d[u]+G[u][v]<d[v]){
					d[v]=d[u]+G[u][v];
					c[v]=c[u]+C[u][v];
                    pre[v]=u;
				}
				else if(d[u]+G[u][v]==d[v]){
					if(c[u]+C[u][v]<c[v]){
						c[v]=c[u]+C[u][v];
						pre[v]=u;
					}
				}
			}
		}
	}
}

void DFS(int v){
	if(v==s){
		printf("%d ",v);
		return;
	}
	DFS(pre[v]);
	printf("%d ",v);
}

int main() {
	scanf("%d %d %d %d",&n,&m,&s,&end);
	int u,v;
	fill(G[0],G[0]+N*N,INF);
	fill(C[0],C[0]+N*N,INF);
	for(int i=0;i<m;i++){
		scanf("%d %d",&u,&v);
		scanf("%d",&G[u][v]);
		scanf("%d",&C[u][v]);
		G[v][u]=G[u][v];
		C[v][u]=C[u][v];
	}
	dijkstra(s);
	DFS(end);
	printf("%d %d",d[end],c[end]);	
	return 0;	
}

