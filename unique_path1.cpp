#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int uniquePath(int m, int n)
{
	if(m==0 || n==0)
		return max(m,n);
	std::vector<vector<int>> v(m, vector<int>(n, 0));
	// for(int i=0;i<m;i++)
	// {
	// 	v[i][0] = 1;
	// }

	// for(int i=0;i<n;i++)
	// {
	// 	v[0][i] = 1;
	// }

	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			v[i][j] = v[i-1][j] + v[i][j-1]+1;
		}
	}

	return v[m-1][n-1]+1;
}


int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int m,n;
	cin>>m>>n;
	int ans = uniquePath(m,n);
	cout<<ans;
	return 0;
}