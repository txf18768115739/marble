/*#include<iostream>
#include<algorithm>
using namespace std;
const int maxt = 10005;
int main()
{
	int m, n;
	int a[maxt];
	int d = 0;

	while (cin >> m >> n)//�������������ĸ���
	{
		if (n == 0 && m == 0) break;//������ֱ���˳�
		for (int i = 0; i < m; i++)//������ֵ
			cin >> a[i];
		sort(a, a + m);//��������
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
			int p = lower_bound(a, a + m, x) - a;//�������������a��Ѱ��x
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
