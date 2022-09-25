#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

bool comparator(vector<int> x, vector<int> y)
{
	return (x[2]<y[2]);
}

int minPro(vector<vector<int>> arr)
{
	int n = arr.size();
	sort(arr.begin(), arr.end(), comparator);

	

	return -1;
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	vector<vector<int>> arr(n, vector<int>(3,0));
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}

	int ans = minPro(arr);
	cout<<ans;

	return 0;
}