#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr, arr + n)
#define sortav sort(v.begin(), v.end())
#define MOD 1000000007
using namespace std;

void solve()
{
    int n,m; cin>>n>>m;
    vector<vector<int>> av(n,vector<int>(m));
    priority_queue<int>q;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>av[i][j];
            q.push(av[i][j]);
        }
    }
    int a,b;
    while(!q.empty())
    {
        int ele=q.top();
        q.pop();
        a=ele;
        while(q.top()==a){
            q.pop();
        }
        b=q.top();
        break;
    }
    cout<<__gcd(a,b)<<endl;



}

int main()
{

	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int t;
	cin>>t;

	while(t--) solve();



	return 0;
}

