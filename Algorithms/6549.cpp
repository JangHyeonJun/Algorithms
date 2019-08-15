//#include <iostream>
//#include <vector>
//
//using namespace std;
//typedef long long ll;
//
//void init(vector<int> &arr, vector<int> &tree, int node, int start, int end)
//{
//	// start와 end 가 같으면 리프 노드(leaf node)이므로, index를 넣어준다.
//	if (start == end)
//		tree[node] = start;
//	else
//	{
//		int mid = (start + end) / 2;
//		init(arr, tree, node * 2, start, mid); // 왼쪽 자식 노드의 인덱스는 node * 2
//		init(arr, tree, node * 2 + 1, mid + 1, end); // 오른쪽 자식 노드의 인덱스는 node * 2 + 1
//
//		// 자식 노드의 높이를 비교하여 최소 높이를 가지는 인덱스를 노드에 저장
//		if (arr[tree[node * 2]] <= arr[tree[node * 2 + 1]])
//			tree[node] = tree[node * 2];
//		else
//			tree[node] = tree[node * 2 + 1];
//	}
//}
//
//// 특정 범위에서 최소 높이를 가지는 인덱스를 찾는 함수
//int query(vector<int> &arr, vector<int> &tree, int node, int start, int end, int left, int right)
//{
//	// 찾으려는 범위가 초과하였을 경우
//	if (left > end || right < start)
//		return -1;
//	// 찾으려는 범위 안에 start, end 가 있을 경우
//	// 범위 안에 포함되는 노드이므로
//	if (left <= start && end <= right)
//		return tree[node];
//
//	int mid = (start + end) / 2;
//	int m1 = query(arr, tree, node * 2, start, mid, left, right);
//	int m2 = query(arr, tree, node * 2 + 1, mid + 1, end, left, right);
//
//	// 왼쪽 자식 노드(m1)이 범위에 들지 않을 경우 오른쪽 만이 고려 대상이므로
//	// m2를 반환한다. 반대도 마찬가지
//	if (m1 == -1)
//		return m2;
//	else if (m2 == -1)
//		return m1;
//	else
//	{
//		// 양쪽 자식 노드가 범위에 들 경우 둘 중에 최소인 높이를 가지는 인덱스를 반환한다.
//		if (arr[m1] <= arr[m2])
//			return m1;
//		else
//			return m2;
//	}
//}
//
//// 최대 넓이를 가지는 직사각형을 찾는 함수
//// 절반으로 나누어가며 제일 큰 직사각형을 찾아낸다.
//ll getMax(vector<int> &arr, vector<int> &tree, int start, int end)
//{
//	int n = arr.size();
//	int m = query(arr, tree, 1, 0, n - 1, start, end);
//
//	// 수평으로 제일 긴 직사각형 넓이 계산
//	ll area = (ll)(end - start + 1)*(ll)arr[m];
//
//	if (start <= m - 1)
//	{
//		ll tmp = getMax(arr, tree, start, m - 1);
//		if (area < tmp)
//			area = tmp;
//	}
//	if (m + 1 <= end)
//	{
//		ll tmp = getMax(arr, tree, m + 1, end);
//		if (area < tmp)
//			area = tmp;
//	}
//	return area;
//}
//
//int main()
//{
//	while (true)
//	{
//		int n;
//		cin >> n;
//
//		if (n == 0)
//			break;
//
//		vector<int> arr(n);
//
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//
//		vector<int> tree(n * 4);
//
//		init(arr, tree, 1, 0, n - 1);
//		
//		cout << getMax(arr, tree, 0, n - 1) << '\n';
//	}
//
//	return 0;
//}