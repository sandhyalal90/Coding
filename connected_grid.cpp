#include <iostream>
#define MAX_N 10

bool gridcell[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];

using namespace std;

int depthFirstSearch(int i, int j, int n, int m)
{
	if (i < 0 || j < 0 || i >= n || j >= m || visited[i][j])
	{
		return 0;
	}
	visited[i][j] = true;
	if (!gridcell[i][j])
	{
		return 0;
	}
	int count = 0;
	for (int x = -1; x <= 1; ++x)
	{
		for (int y = -1; y <= 1; ++y)
		{
			count += depthFirstSearch(i + x, j + y, n, m);
		}
	}
	return 1 + count;
}

int main()
{
	int m, n, x;
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> x;

			if (x == 1)
			{
				gridcell[i][j] = true;
			}
			else
			{
				gridcell[i][j] = false;
			}
		}
	}
	int largest = 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (!visited[i][j])
			{
				int size = depthFirstSearch(i, j, m, n);
				if (size > largest)
				{
					largest = size;
				}
			}
		}
	}
	cout << largest << endl;
}