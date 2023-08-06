#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N, K, max, min=0, count=0;
	cin >> N >> K;

	vector<int>weight(N);
	for (int i = 0; i < N; i++)
		cin >> weight[i];
	sort(weight.begin(), weight.end());

	max = N - 1;
	while (min < max)
	{
		int w = weight[min] + weight[max];
		if (w > K)
			max--;
		else if (w <= K)
		{
			count++;
			min++;
			max--;
		}
	}
	printf("%d", count);
}