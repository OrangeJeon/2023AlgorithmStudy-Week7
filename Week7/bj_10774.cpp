#include<iostream>
using namespace std;

int main()
{
	char arr[1000001];
	char tag;
	int j, a, ans=0, num;
	cin >> j >> a;

	for (int i = 1; i <= j; i++)
		cin >> arr[i];

	for (int i = 0; i < a; i++)
	{
		cin >> tag >> num;

		if (arr[num] == 'S')
		{
			if (tag == 'S')
			{
				arr[num] = 'X';
				ans++;
			}
		}
		else if (arr[num] == 'M')
		{
			if (tag == 'M' || tag == 'S')
			{
				arr[num] = 'X';
				ans++;
			}
		}
		else if (arr[num] == 'L')
		{
			if (tag == 'M' || tag == 'S'||tag=='L')
			{
				arr[num] = 'X';
				ans++;
			}
		}
	}
	printf("%d\n", ans);
}