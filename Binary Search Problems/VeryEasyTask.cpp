// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C




#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define   pb              push_back
#define   rep(i,a,b)      for(int i=a;i<b;i++)
#define   vl              vector<ll>
#define   vi              vector<int>
#define   lb              lower_bound
#define   ub              upper_bound
#define   print(ans)      printf("%.9f\n",ans)
#define all(x) (x).begin(), (x).end()
typedef int64_t ll;
typedef unsigned long long ull;
typedef long double lld;
#define   pi              pair<ll, int>
#define nline "\n"



void solve()
{
	ll n, x, y;
	cin >> n >> x >> y;
	ll mi = min(x, y);
	ll cnt = mi;
	n = n - 1;
	if (n == 0)
	{
		cout << cnt << nline;
		return;
	}
	ll low = 0;
	ll high = 1e18;
	ll ans = 0;
	while (low <= high)
	{
		ll mid = low + (high - low) / 2;
		ll s = 0;
		s += mid / x;
		s += mid / y;
		if (s >= n)
		{
			ans = mid;
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	cout << ans + cnt << nline;

}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);
	freopen("Error.out", "w", stderr);
#endif
	solve();
	return 0;
}



