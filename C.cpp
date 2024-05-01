#include<bits/stdc++.h>
using namespace std;

void solve()
{
								int n,h,m;
								cin>>n;
								map<int,int>mp;

								for(int i =0; i<n;i++)
								{
																cin>>h>>m;
																int tmp=h*60+m;
																mp[tmp]++;
								}

								int i=0,ans=1;
								for(auto ele:mp){
																ans=max(ans,ele.second);
								}
								cout<<ans<<endl;

}

int main()
{	solve(); 
								return 0;
}
