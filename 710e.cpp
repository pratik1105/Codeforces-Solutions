#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

#define fill(a,x) memset(a,x,sizeof(a)) 
#define pb push_back
#define sz(x) (int)x.size() 
#define F first
#define S second
#define FOR(i,a,b) for(int i = a; i<=b; ++i)
#define NFOR(i,a,b) for(int i = a; i>=b; --i)
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const ll INF = 1e18;
const ll mod = 1e9+7;
const int N = 1e7+10; 

ll dp[N];
int main(){
  fast;
  ll n,x,y;
  cin>>n>>x>>y;
  dp[1]=x;
  dp[0]=0;
  FOR(i,2,n)
  if(i%2)
  	dp[i]=min(dp[i-1]+x,dp[(i+1)/2]+x+y);
  else
  	dp[i]=min(dp[i/2]+y,dp[i-1]+x);

  cout<<dp[n];

  return 0;
}