#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
	int m,n,x,kess=0;
	int p;
	while (cin >> m >> n)
	{
		vector<int> a(m);
		for (int i = 0; i < m; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		cout << "CASE# " << ++kess;
		while (cin >> x)
		{
			p = lower_bound(a.begin(), a.end(), x) - a.begin();
				if (a[p] == x)
					cout << a[p] << " found at " << p << endl;
				else
					cout << a[p] << " not found " << p << endl;
			
		}

	}
	system("pause");
	return 0;

}
