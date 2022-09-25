#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;
vector<vector<int>> v(10000, vector<int>(10000, 0));
int path(int r, int c)
{
	v[2][3] = 1;
	v[3][2] = 1;

	for(int i=3;i<=r;i++)
	{
		for(int j=3;j<=c;j++)
		{
			v[i][j] = v[i-2][j-1] + v[i-1][j-2];
		}
	}
	return v[r][c];
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int r,c;
	cin>>r>>c;
	int ans = path(r,c);
	cout<<ans;
	return 0;
}