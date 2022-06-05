#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, i = 0, j = 0, flag = 0;
	cin >> a >> b;

	for (i = a; i <= b; i++)
	{
		flag = 0;
		if (i == 1)
			continue;
		int t = sqrt(i);
		for (j = 2; j <= t; j++)
		{
			if ((i % j) == 0)
			{
				flag = 1;
				break;
			}
		}
		if  (flag == 0)
			cout << i << "\n";
	}
}
