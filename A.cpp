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
								string s,ans;
								cin>>s;
								int up=0, low=0;
								for(int i =0 ; i< s.length();i++)
								{
																if(isupper(s[i]))
																{
																								up++;
																}
																else {
																	low++;
																}
								}

								if(up>low)
								{
																for(int i =0 ;i<s.length();i++)
																{
																								ans+= toupper(s[i]);
																}
								}
								else
								{
																for(int i =0; i<s.length();i++)
																{
																								ans+= tolower(s[i]);
																}
								}

								cout<<ans<<endl;
}


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);  

	solve();     
   return 0;
}


