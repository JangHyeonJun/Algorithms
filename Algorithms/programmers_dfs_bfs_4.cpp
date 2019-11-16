//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<vector<string>> results;
//
//void dfs(vector<vector<string>> tickets, vector<string> paths, vector<bool> visited, int count = 0)
//{
//	if (count == tickets.size())
//	{
//		results.push_back(paths);
//		return;
//	}
//
//	if (count == 0)
//	{
//		for (int i = 0; i < tickets.size(); i++)
//		{
//			if (tickets[i][0] == "ICN" && !visited[i])
//			{
//				paths.push_back("ICN");
//				paths.push_back(tickets[i][1]);
//				visited[i] = true;
//				dfs(tickets, paths, visited, count + 1);
//				visited[i] = false;
//				paths.pop_back();
//				paths.pop_back();
//			}
//		}
//	}
//	else
//	{
//		string curr = paths.back();
//		for (int i = 0; i < tickets.size(); i++)
//		{
//			if (tickets[i][0] == curr && !visited[i])
//			{
//				paths.push_back(tickets[i][1]);
//				visited[i] = true;
//				dfs(tickets, paths, visited, count + 1);
//				visited[i] = false;
//				paths.pop_back();
//			}
//		}
//	}
//
//}
//
//
//vector<string> solution(vector<vector<string>> tickets) {
//	vector<string> answer;
//	vector<bool> visited(tickets.size(), false);
//	dfs(tickets, vector<string>(), visited);
//	sort(results.begin(), results.end());
//
//	return results[0];
//}