
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
								while(n--){
																ll x;
																cin>>x;
																ll sq = sqrt(x);
																auto fx = [&]()->int{
																								for(ll i = 2; i*i <= sq ;i++){
																																if (sq%i == 0) return 0;
																								}
																								return 1;
																};

																string ans = (sq*sq == x && fx() && sq!=1)?"YES":"NO";
																cout<<ans<<endl;
								}

}

int main()
{

								ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


								solve();



								return 0;
}

