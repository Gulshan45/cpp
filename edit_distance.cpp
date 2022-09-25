#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int m,n;
vector<vector<int>> dp;

int editDistance(string &s1, string &s2, int i, int j)
{
	if(dp[i][j] != -1)
		return dp[i][j];

	if(j==n)
	{
		if(i==m)
			return 0;
		else if(i<m)
			return m-i;
	}

	if(i==m && j<n)
		return n-j;

	if(s1[i]==s2[j])
		return editDistance(s1, s2, i+1, j+1);
	else
		return dp[i][j] = 1+min(editDistance(s1, s2, i+1, j), min(editDistance(s1, s2, i, j+1), editDistance(s1, s2, i+1, j+1)));
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string str1,str2;
	cin>>str1>>str2;

	m = str1.length();
	n = str2.length();
	dp.resize(m+1, vector<int>(n+1, -1));
	int ans = editDistance(str1, str2, 0,0);
	cout<<ans;

	return 0;
}