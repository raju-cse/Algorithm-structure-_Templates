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