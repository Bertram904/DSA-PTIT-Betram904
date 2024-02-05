#include <bits/stdc++.h>

using namespace std;

void nhap (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void in (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void Insertion_Sort (int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		nhap(a, n);
		Insertion_Sort(a, n);
		in(a,  n);
		cout << endl;
	}
}