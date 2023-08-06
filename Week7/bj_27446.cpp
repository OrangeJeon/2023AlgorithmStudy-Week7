#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<int> Page(M);
	for (int i = 0; i < M; i++)
		cin >> Page[i];

	vector<int>page;
	for (int i = 1; i <= N; i++)
	{
		if (find(Page.begin(), Page.end(),i)==Page.end())
			page.push_back(i);
	}
	int ink = 0;
	for (size_t i = 0; i < page.size(); i++)
	{
		if (i == 0)
			ink = ink + 7;
		else if (page[i] - page[i - 1] <= 3)
			ink = ink + 2 * (page[i] - page[i - 1]);
		else
			ink = ink + 7;
	}
	printf("%d", ink);
}