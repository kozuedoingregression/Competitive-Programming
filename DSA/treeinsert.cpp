#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> nums(n);

	for(int i =0 ; i<n;i++)
	{
		nums.push_back(i);
	}

	for(int i=0; i<n;i++)
	{
		cout<<nums.pop();
	}

	return 0;
}
