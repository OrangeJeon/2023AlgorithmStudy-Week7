#include<iostream>
#define INF 1e9
using namespace std;

int main()
{
	int N, K;
	int dp[100001];
	for (int i = 0; i < 100001; i++)
		dp[i] = INF;
	cin >> N >> K;

	int coffee[101];
	for (int i = 1; i <= N; i++)
		cin >> coffee[i];
	dp[0] = 0;
	for (int i = 1; i <= N; i++)
	{
		for (int j = K; j >= coffee[i]; j--)
		{
			if (j - coffee[i] >= 0)
				dp[j] = min(dp[j], dp[j - coffee[i]] + 1);
		}
	}
	if (dp[K] == INF)
		printf("%d\n", -1);
	else
		printf("%d\n", dp[K]);
}