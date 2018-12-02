/*UVa10474大理石问题c++解法，输入M.N表示大理石数目和问题数目
在输入M个数字，排序后寻找出最大的数字所在的位置，
使用sort，和lower_bound两个函数
*/
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
				int p = lower_bound(a, a + m, x) - a;  
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



