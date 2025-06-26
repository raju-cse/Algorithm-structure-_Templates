#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 2e5 + 10;
int a[N];


void sieve(int n)
{
    int prime[n+3];
	memset(prime,0,sizeof(prime));
 
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)cout<<i<<" ";
	}
	cout<<endl;
}


void solve()
{
       int n;
       cin >> n;

       sieve(n);
   
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  int t = 1;
  cin >> t;
 
  while (t--) {
 
    solve();
 
  }
 
  return 0;
}