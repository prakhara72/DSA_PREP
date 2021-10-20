// problem link-> https://www.interviewbit.com/problems/painters-partition-problem/




int Solution::paint(int A, int B, vector<int> &C) {
	long long int MOD = 10000003;
	long long int small = 0;
	long long int sum = 0;
	int n = C.size();
	for (int i = 0; i < n; i++)
	{
		small = max(small, (long long)C[i]);
		sum += C[i];

	}
	long long int low = small;
	long long int high = sum;
	long long int ans = 0;
	while (low <= high)
	{
		long long int mid = low + (high - low) / 2;
		int cnt = 1;
		long long int s = 0;
		for (int i = 0; i < n; i++)
		{
			if (C[i] > mid)
			{
				cnt = INT_MAX;
				break;
			}
			s += C[i];
			if (s > mid)
			{
				s = C[i];
				cnt++;
			}
		}
		if (cnt <= A)
		{
			ans = mid;
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

	}
	return (ans * B) % MOD;


}
