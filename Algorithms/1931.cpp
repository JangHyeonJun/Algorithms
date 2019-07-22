#include <iostream>

using namespace std;

int comp(pair<int, int> a, pair<int, int> b)
{
	if (a.first > b.first)
		return 1;
	else if (a.first == b.first)
		return 0;
	else
		return -1;
}

void quick_sort(pair<int, int> *data, int start, int end)
{
	// only 1 element
	if (start >= end)
		return;

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	pair<int, int> temp;

	
	while (i <= j)
	{
		// until the pivots intersect
		while (i <= end && comp(data[i], data[pivot]) <= 0)
			i++;
		while (j > start && comp(data[j], data[pivot]) >= 0)
			j--;

		if (i > j)
		{
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	quick_sort(data, start, j - 1);
	quick_sort(data, j + 1, end);
}
int main()
{
	int n;
	cin >> n;

	pair<int, int> *conf = new pair<int, int>[n];
	int *overlap = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> conf[i].first >> conf[i].second;
		overlap[i] = 0;
	}

	quick_sort(conf, 0, n - 1);

	for(int i=0; i<n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				//겹치는 조건 넣기
			}
		}

	return 0;
}