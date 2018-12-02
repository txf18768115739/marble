/*UVa10474大理石问题c++解法，输入M.N表示大理石数目和问题数目
在输入M个数字，排序后寻找出最大的数字所在的位置，
使用sort，和lower_bound两个函数*/
/*#include<iostream>
#include<algorithm>
using namespace std;
const int maxt = 10005;
int main()
{
	int m, n;
	int a[maxt];
	int d = 0;

	while (cin >> m >> n)//输入个数和问题的个数
	{
		if (n == 0 && m == 0) break;//空输入直接退出
		for (int i = 0; i < m; i++)//输入数值
			cin >> a[i];
		sort(a, a + m);//重新排序
		cout << "CASE#" << ++d << ":" << endl;
		for (int j = 0; j < m; j++)
			cout << a[j] << endl;
		while (n--)
		{
			int x;
			cin >> x;

	/*		bool flag = false;
			int ans = 0;
	/*		for (int q = 0; q < n; q++)
			{
				ans++;
				if (a[q] == x)
				{
					flag = true;
					break;
				}
			}
			if (flag)
				cout << x << "found at" << ans << endl;
			else
				cout << x << "not found " << endl;
		}
			int p = lower_bound(a, a + m, x) - a;//在已排序的数组a中寻找x
			if (a[p] == x)
			{
				cout << x << " found at " << p + 1 << endl;
			}
			else
				cout << x << " not found" << endl;
		}
	}
	system("pause");
	return 0;
}


/*#include <iostream>
#include <algorithm>
using namespace std;
#define maxn  10005
int main()
{
	int n, m;
	int a[maxn];
	int kase = 0;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0) break;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (int j = 0; j < m; j++)
			cout << a[j] << endl;
		cout << "CASE# " << ++kase << ":" << endl;
		while (m--)
		{
			int x;
			cin >> x;
			bool flag = false;
			int ans = 0;
			for (int i = 0; i<n; i++)
			{
				ans++;
				if (a[i] == x)
				{
					flag = true;
					break;
				}
			}
			if (flag)
				cout << x << " found at " << ans << endl;
			else
				cout << x << " not found" << endl;
		}
	}
	system("pause");
	return 0;
}*/
