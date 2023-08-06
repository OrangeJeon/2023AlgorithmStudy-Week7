#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int arr[10001];
	int dp[1001];
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	for (int i = 1; i <= N; i++)
	{
		dp[i] = arr[i];
		for (int j = 1; j <= i; j++)
			dp[i] = min(dp[i], dp[i - j] + dp[j]);
	}
	printf("%d", dp[N]);
}