//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//typedef pair<int, int> II;
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//	vector<int> answer;
//	unordered_map<string, int> all_genre_info;
//	unordered_multimap<string, II> song_list;
//	vector<pair<int, string>> sorted_genres;
//
//	for (int i = 0; i < genres.size(); i++)
//	{
//		string genre_name = genres[i];
//		int play_num = plays[i];
//		auto item = all_genre_info.find(genre_name);
//		if (item == all_genre_info.end())
//		{
//			all_genre_info.insert(make_pair(genre_name, play_num));
//			II song_info = make_pair(plays[i], i);
//			song_list.insert(make_pair(genre_name, song_info));
//		}
//		else
//		{
//			item->second += play_num;
//			II song_info = make_pair(plays[i], i);
//			song_list.insert(make_pair(genre_name, song_info));
//		}
//	}
//
//	for (auto genre_info : all_genre_info)
//		sorted_genres.push_back(make_pair(genre_info.second, genre_info.first));
//	sort(sorted_genres.begin(), sorted_genres.end(),
//		[](pair<int, string> a, pair<int, string> b)->bool
//		{return a.first > b.first; });
//
//	for (auto genre_info : sorted_genres)
//	{
//		vector<II> sorted_genre_songs;
//		auto genre_songs = song_list.equal_range(genre_info.second);
//		for (auto iter = genre_songs.first; iter != genre_songs.second; iter++)
//			sorted_genre_songs.push_back(make_pair(iter->second.first, iter->second.second));
//		sort(sorted_genre_songs.begin(), sorted_genre_songs.end(),
//			[](const II& a, const II& b) -> bool {
//				if (a.first == b.first)
//					return a.second < b.second;
//				return a.first > b.first;
//			});
//
//		for (int i = 0; i < sorted_genre_songs.size(); i++)
//		{
//			if (i >= 2)
//				break;
//			answer.push_back(sorted_genre_songs[i].second);
//		}
//	}
//
//
//	return answer;
//}