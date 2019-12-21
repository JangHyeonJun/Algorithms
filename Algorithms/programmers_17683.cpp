//#include <string>
//#include <vector>
//
//using namespace std;
//
//void removeSharp(string& s)
//{
//	while (s.find('#') != string::npos)
//	{
//		size_t pos = s.find('#');
//		s[pos - 1] += 32;
//		s.erase(pos, 1);
//	}
//}
//
//string getPlayedSong(int play_time, const string& song)
//{
//	string played_song = "";
//
//	while (play_time > 0)
//	{
//		if (song.length() <= play_time)
//		{
//			played_song += song;
//			play_time -= song.length();
//		}
//		else
//		{
//			played_song += song.substr(0, play_time);
//			play_time = 0;
//		}
//	}
//
//	return played_song;
//}
//
//int getPlayTime(const string& begin, const string& end)
//{
//	int end_time = stoi(end.substr(0, 2)) * 60 + stoi(end.substr(3, 2));
//	int begin_time = stoi(begin.substr(0, 2)) * 60 + stoi(begin.substr(3, 2));
//
//	return end_time - begin_time;
//}
//
//vector<string> getMusicInfo(string s)
//{
//	vector<string> music_info;
//	char delimiter = ',';
//
//	while (!s.empty())
//	{
//		if (s.find(delimiter) != string::npos)
//		{
//			music_info.push_back(s.substr(0, s.find(delimiter)));
//			s.erase(0, s.find(delimiter)+1);
//		}
//		else
//		{
//			music_info.push_back(s);
//			s.clear();
//		}
//	}
//
//	return music_info;
//}
//
//string solution(string m, vector<string> musicinfos) {
//	string answer = "(None)";
//	int max_play_time = -1;
//	removeSharp(m);
//	for (int i = 0; i < musicinfos.size(); i++)
//	{
//		vector<string> music_info = getMusicInfo(musicinfos[i]);
//		string begin = music_info[0];
//		string end = music_info[1];
//		string name = music_info[2];
//		string song = music_info[3];
//		removeSharp(song);
//		int play_time = getPlayTime(begin, end);
//		string played_song = getPlayedSong(play_time, song);
//		if (played_song.find(m) != string::npos && play_time > max_play_time)
//		{
//			max_play_time = play_time;
//			answer = name;
//		}
//	}
//
//	return answer;
//}
//
//int main()
//{
//	string m = "ABCDEFG";
//	string m2 = "ABC";
//	vector<string> v2 = { "12:00,12:14,HELLO,C#DEFGAB", "13:00,13:05,WORLD,ABCDEF" };
//	vector<string> v3 = { "13:00,13:05,WORLD,ABCDEF","13:00,13:06,WORLD2,ABCDEF" };
//	vector<string> v = { "12:00,12:14,HELLO,C#DEFGAB","13:00,13:03,WORLD,ABCDEF" };
//
//	string m4 = "cdcdf";
//	vector<string> v4 = { "12:00,12:30,MUSIC,cdcdcdf#" };
//
//	string m5 = "CC#BCC#BCC#BCC#B";
//	vector<string> v5 = { "03:00,03:30,FOO,CC#B", "04:00,04:08,BAR,CC#BCC#BCC#B" };
//
//	solution(m5, v5);
//
//}