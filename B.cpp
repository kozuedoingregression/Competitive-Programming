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
								int n;
								cin>>n;
								vector<int> a(n), b(n);
								for(auto &i:a) cin>>i;
								for(auto &i:b) cin>>i;

								int ans=0;
								int i=0 ,j=0;
								
								while(i<n&&j<n)
								{
																if(a[i]<=b[j])
																{
																								i++;j++;
												   	}
																else {
																	ans++;
																	j++;
																}														
								}
								cout<<ans<<endl;
}

int main()
{
    int t;
	 cin>>t;
    while(t--) solve();
    return 0;
}


