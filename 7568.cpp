#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <int> he;
	vector <int> we;
	vector <int> c;
	int N = 0;
	int k = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> k;
		he.push_back(k);
		cin >> k;
		we.push_back(k);
		c.push_back(0);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (he[i] < he[j])
			{
				if (we[i] < we[j])
				{
					c[i]++;
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << c[i]+1 << " ";
	}
}
