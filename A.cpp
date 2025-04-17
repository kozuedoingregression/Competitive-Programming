#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr, arr + n)
#define sortav sort(v.begin(), v.end())
#define MOD 998244353
using namespace std;

int add(int x, int y){
    x += y;
    if(x>=MOD) x-= MOD;
    return x;
}

int mul(int x, int y)
{
    return x * 1ll * y % MOD;
}

void solve()
{
   int n,m; cin>>n>>m;
   vector<vector<int>> v1(m+1,vector<int>(m+1));
   v1[0][0] = 1;

   for(int i =0;i<m;i++)
   {
       for(int j=0;j<=i;i++)
       {
           v1[i+1][j+1] = add(v1[i+1][j+1],v1[i][j]);
           if(j)
           {
               v1[i+1][j-1] = add(v1[i+1][j-1], v1[i][j]);
               v1[j-1][i+1] =
           }
       }
   }

   vector<vector<int> dp(n+1, vector<int>(m+1));
   dp[0][0] = 1;
   for(int i=0; i<n;i++)
   {
       for(int j=0; j<=m;i++)
       {
           for(int k=0; k=m; k++)
           {
               int nj = i ? j - k : j +k;
               if(0<=nj && nj <=m)
               {
                   dp[i+1][nj] + add(dp([i+1][nj],mul(dp[i][j], v1[m][k])));
               }
           }
       }
   }
   cout<<dp[n][0]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    solve();

    return 0;
}


