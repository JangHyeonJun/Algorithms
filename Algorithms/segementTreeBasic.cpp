#include <iostream>

using namespace std;

#define MAX_NUM 100001

int input[MAX_NUM];
long long tree[MAX_NUM * 4];

long long initTree(int start, int end, int node)
{
	if (start == end) return tree[node] = input[start];
	int mid = (start + end) / 2;
	return tree[node] = initTree(start, mid, node * 2) + initTree(mid + 1, end, node * 2 + 1);
}

long long sum(int start, int end, int node, int left, int right)
{
	if (left > end || right < start) return 0;
	if (left <= start && end <= right) return tree[node];
	int mid = (start + end) / 2;
	return sum(start, mid, node * 2, left, right) + sum(mid + 1, end, node * 2 + 1, left, right);
}
