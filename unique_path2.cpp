#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int uniquePath(vector<vector<int>> &arr)
{
	int m = arr.size();
	int n = arr[0].size();
	if(arr[0][0] == 1)
		return 0;

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1)
			{
				arr[i][j]=0;
				continue;
			}

			else if(i-1>=0 && j-1>=0)
				arr[i][j] = arr[i-1][j] + arr[i][j-1];
			else if(i-1>=0)
				arr[i][j] = arr[i-1][j];
			else if(j-1>=0)
				arr[i][j] = arr[i][j-1];
			else
				arr[i][j]=1;
		}
	}

	return arr[m-1][n-1];

}


int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int m,n;
	cin>>m>>n;
	std::vector<vector<int>> v(m, vector<int>(n,0));

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}

	int ans = uniquePath(v);
	cout<<ans<<endl;

	return 0;
}