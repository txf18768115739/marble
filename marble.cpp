/*#include<iostream>
	#include<algorithm>
	using namespace std;
	int maxt = 10000;

	int main(){
	int a, b, c[maxt],d;
	cin >> a >> b >> c[a]>>d;
	min[a]

	}*/
	#include <iostream>
	#include <algorithm>
	using namespace std;
	const int maxt = 10000;

	int main()

	{
		int a[maxt];
		int m, n;
		int kess=0;
		while (cin >> m >> n)
		{
			for (int i=0; i < m; i++)
				cin >> a[i];
			sort(a, a + m);
			int x;
			cout << "CASE#" << ++kess << endl;
			while (cin >> x)
			{
				int p = lower_bound(a, a + m, x) - a;  //在已排序的数组a中寻找x
			//	cout << &a[5] << endl;
				cout << "p:" << p << endl;
				cout << a[p] << endl;
				if (a[p] == x)
				{
					cout << x << " found at " << p + 1 << endl;
				}
				else
					cout << x << " not found" << endl;
			}
			system("pause");
			return 0;
		}
	}



