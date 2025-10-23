#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 2e5 + 10;
int a[N];

vector<int> v[N];
int level[N];
int vis[N];


void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while(!q.empty()){

       int cur_v = q.front();
       q.pop();
       
       cout << cur_v << ' ';
       for(int child : v[cur_v]){

          if(!vis[child]){

             q.push(child);
             vis[child] = 1;
             level[child] = level[cur_v] + 1;
          }
       }
    }

    cout << '\n';
   
}


//call bfs() 


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  //     int t = 1;
  //  cin >> t;
 
  // while (t--) {
 
  //   solve();
 
  // }

    int n;
    cin >> n ;

    for(int i = 0; i < n - 1; i++){
        int v1, v2;
        cin >> v1 >> v2;
        v[v1].push_back(v2);  // Added missing semicolon
        v[v2].push_back(v1);  // Added missing semicolon
    }

    // int start_vertex;
    // cin >> start_vertex; // Starting point for bfs
    bfs(1);   // Call bfs

    cout << '\n';
    return 0;
}
