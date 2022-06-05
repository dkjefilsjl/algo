#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, V, n= 0, count = 0;

	cin >> A;
	cin >> B;
	cin >> V;

	if ((A - B) == 1)
	{
		cout << (V - A + 1);
		return 0;
	}

	n = (V - A) / (A - B);
	count += n;
	n = (A - B) * n;

	while (n < V)
	{
		n += A;
		if (n < V)
			n -= B;
		count++;
	}
	cout << count;
	return 0;
}


