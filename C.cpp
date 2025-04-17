#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    string s; cin>> s;
    string ans;
    for(int i=0;i< s.length;i++)
    {
        if(s[i] == 'u' && s[i+1] == 's')
        {
            
        }
    }
    /* int n; cin>>n;
    vector<int> vi(n);
    for(auto &i:vi) cin>>i;
    int max_hight = vi[0], max_left = 0;
   
    for(int i=1;i<n;i++)
    {
        if(vi[i] > max_hight)
        {
            max_hight = vi[i];
            max_left = i;
        }

    }
    int min_hight = vi[0], min_right=0;
    for(int i=1;i<n;i++)
    {
        if(vi[i] <= min_hight)
        {
            min_hight = vi[i];
            min_right = i;
        }
    }

    int ans = max_left + (n - 1 - min_right);
    if(max_left > min_right) ans--;

    cout<<ans<<endl;*/
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t; cin>>t;
    while(t--) solve();
    solve();
    //cout<<"hello"<<endl;

    return 0;
}
