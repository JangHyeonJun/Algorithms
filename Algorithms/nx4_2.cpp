//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//typedef pair<int, int> II;
//
//const int dy[5] = { -1, 1, 0, 0, 0 };
//const int dx[5] = { 0, 0, -1, 1, 0 };
//int H, W, N;
//int max_resources = 0;
//vector<II> findStartPoint(const vector<vector<int>>& v)
//{
//	vector<II> start_points(2);
//	int v_max, h_max;
//	v_max = h_max = -1;
//
//	vector<vector<int>> horizon(H, vector<int>(W));
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < W; j++)
//		{
//			int sum = v[i][j];
//			for (int k = 2; k < 4; k++)
//			{
//				int x = j + dx[k];
//				int y = i;
//				if (x >= 0 && x < W && y >= 0 && y < H)
//					sum += v[y][x];
//			}
//			horizon[i][j] = sum;
//			if (sum > h_max)
//			{
//				h_max = sum;
//				start_points[0] = II(i, j);
//			}
//		}
//	}
//
//	vector<vector<int>> vertical(H, vector<int>(W));
//
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < W; j++)
//		{
//			int sum = v[i][j];
//			for (int k = 0; k < 2; k++)
//			{
//				int x = j;
//				int y = i + dy[k];
//				if (x >= 0 && x < W && y >= 0 && y < H)
//					sum += v[y][x];
//			}
//			vertical[i][j] = sum;
//			if (sum > v_max)
//			{
//				v_max = sum;
//				start_points[1] = II(i, j);
//			}
//		}
//	}
//
//	return start_points;
//}
//
//void findMaxResources(const vector<vector<int>>& v, vector<vector<bool>> visited, vector<II> resources, int sum = 0, int n = 0)
//{
//	if (n >= N)
//	{
//		if (sum > max_resources)
//			max_resources = sum;
//	}
//	else
//	{
//		for (int i = 0; i < resources.size(); i++)
//		{
//			II p = resources[i];
//			for (int i = 0; i < 4; i++)
//			{
//				int y = p.first + dy[i];
//				int x = p.second + dx[i];
//				if (x >= 0 && x < W && y >= 0 && y < H && !visited[y][x])
//				{
//					visited[y][x] = true;
//					resources.push_back(II(y, x));
//					findMaxResources(v, visited, resources, sum + v[y][x], n+1);
//					resources.pop_back();
//					visited[y][x] = false;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//
//	cin >> H >> W >> N;
//	vector<vector<int>> v(H, vector<int>(W));
//	char input;
//	//cout << "N : " << N << endl;
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < W; j++)
//		{
//			cin >> input;
//			v[i][j] = input - 48;
//			//cout << v[i][j];
//		}
//		//cout << endl;
//	}
//
//	vector<II> p = findStartPoint(v);
//	vector<II> p1;
//	p1.push_back(p[0]);
//	vector<vector<bool>> visited1(H, vector<bool>(W, false));
//	visited1[p1[0].first][p1[0].second] = true;
//	findMaxResources(v, visited1, p1, v[p1[0].first][p1[0].second], 1);
//
//	vector<II> p2;
//	p2.push_back(p[1]);
//	vector<vector<bool>> visited2(H, vector<bool>(W, false));
//	visited2[p2[0].first][p2[0].second] = true;
//	findMaxResources(v, visited2, p2, v[p2[0].first][p2[0].second], 1);
//
//	cout << max_resources;
//
//	return 0;
//}