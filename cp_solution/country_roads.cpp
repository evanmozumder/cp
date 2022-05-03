#include <bits/stdc++.h>
using namespace std;
#define INF 99999
#define MAX 100000

// void process(vector<vector<int>>G, int n, int start, int test) {
//     int mindist, nextnode, count;
//     vector<vector<int>>cost(n);
//     vector<int>visited(n);
//     vector<int>dist(n);

// // initializing cost vector
//     for(int i=0; i<n; ++i) {
//         visited[i] = 0;
//         cost[i] = vector<int>(n);
//         for(int j=0; j<n; ++j) {
//             if(G[i][j]==0) 
//                 cost[i][j] = INF;
//             else 
//                 cost[i][j] = G[i][j];
//             if(i==start)
//                 dist[j]=cost[i][j];
//         }
//     }
//     dist[start] = 0;
//     visited[start] = 1;
//     count = 1;

//     while(count<(n-1)) {
//         mindist = INF;
//         for(int i=0; i<n; ++i) {
//             if(dist[i]<mindist && visited[i]==0) {
//                 mindist = dist[i];
//                 nextnode = i;
//             }
//         }

//         visited[nextnode] = 1;

//         for(int i=0; i<n; ++i) {
//             // if((cost[nextnode][i]+mindist)<dist[i] && visited[i]==0){
//             //     dist[i] = cost[nextnode][i]+mindist;
//             // }
//             int maxi = cost[nextnode][i]>mindist ? cost[nextnode][i]:mindist;
//             if(maxi<dist[i])
//                 dist[i]=maxi;
//         }
//         count++;
//     }
//     cout << "Case " << test << ":" << endl;
//     for(int i=0; i<n; ++i) {
//         if(dist[i]==INF)
//             cout << "Impossible" << endl;
//         else 
//             cout << dist[i] << endl;
//     }
//     // cout << endl;
// }

int main() {
    int T, n, m, u, v, w, t, test=0;

    cin >> T;
    while(T--) {
        // cout << endl;
        cin >> n >> m;
        // int g[m][3];
        vector<vector<int>>adj(MAX);
            
        for(int i=0; i<n; ++i) {
            adj[i] = vector<int>(MAX);
            for(int j=0; j<n; ++j) {
                adj[i][j]=0;
            }
        }

        for(int i=0; i<m; ++i) {
            cin >> u >> v >> w;
            if(adj[u][v]!=0 || adj[v][u]!=0) {
                if(adj[u][v]>w) {
                    adj[u][v]=w;
                    adj[v][u]=w;
                }
            }
            else {
                adj[u][v]=w;
                adj[v][u]=w;
            }
        }
        cin >> t;
        test++;
        // process(adj, n, t, test); 
        int mindist, nextnode, count;
    vector<vector<int>>cost(MAX);
    vector<int>visited(MAX);
    vector<int>dist(MAX);

// initializing cost vector
    for(int i=0; i<n; ++i) {
        visited[i] = 0;
        cost[i] = vector<int>(MAX);
        for(int j=0; j<n; ++j) {
            if(adj[i][j]==0) 
                cost[i][j] = INF;
            else 
                cost[i][j] = adj[i][j];
            if(i==t)
                dist[j]=cost[i][j];
        }
    }
    dist[t] = 0;
    visited[t] = 1;
    count = 1;

    while(count<(n-1)) {
        mindist = INF;
        for(int i=0; i<n; ++i) {
            if(dist[i]<mindist && visited[i]==0) {
                mindist = dist[i];
                nextnode = i;
            }
        }

        visited[nextnode] = 1;

        for(int i=0; i<n; ++i) {
            // if((cost[nextnode][i]+mindist)<dist[i] && visited[i]==0){
            //     dist[i] = cost[nextnode][i]+mindist;
            // }
            int maxi = cost[nextnode][i]>mindist ? cost[nextnode][i]:mindist;
            if(maxi<dist[i])
                dist[i]=maxi;
        }
        count++;
    }
    cout << "Case " << test << ":" << endl;
    for(int i=0; i<n; ++i) {
        if(dist[i]==INF)
            cout << "Impossible" << endl;
        else 
            cout << dist[i] << endl;
    }
        adj.clear();
    }

    return 0;
}