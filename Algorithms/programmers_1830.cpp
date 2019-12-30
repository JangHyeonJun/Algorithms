//#include <string>
//#include <unordered_set>
//
//using namespace std;
//
//unordered_set<char> unique_char;
//
//string restoreWord(const string& word)
//{
//	string restored(word);
//	char special;
//	if (word.front() >= 'a' && word.front() <= 'z') // rule 2
//	{
//		if (unique_char.find(word.front()) == unique_char.end())
//		{
//			special = word.front();
//			unique_char.insert(special);
//		}
//		else
//			return "invalid";
//
//		if (special == word.back())
//			restored = word.substr(1, word.length() - 2);
//		else
//			return "invalid";
//	}
//
//	if (restored[1] >= 'a' && restored[1] <= 'z')
//	{
//		if (unique_char.find(restored[1]) == unique_char.end())
//		{
//			special = restored[1];
//			unique_char.insert(special);
//		}
//		else
//			return "invalid";
//		auto iter = restored.begin() + 1;
//		while (iter != restored.end())
//		{
//			if (*iter == special && iter+1 != restored.end() &&
//				*(iter+1) != ' ')
//				iter = restored.erase(iter);
//			else
//				break;
//
//			iter++;
//		}
//	}
//
//	for (int i = 0; i < restored.length(); i++)
//		if (restored[i] >= 'a' && restored[i] <= 'z' || restored[i] == ' ')
//			return "invalid";
//
//
//	return restored;
//}
//
//string splitWord(string& sentence)
//{
//	string word = "";
//	char special;
//	if (sentence[0] >= 'a' && sentence[0] <= 'z') // rule 2
//	{
//		special = sentence[0];
//		for (int i = 1; i < sentence.length(); i++)
//		{
//			if (sentence[i] == special)
//			{
//				word = sentence.substr(0, i + 1);
//				sentence.erase(0, i + 1);
//				break;
//			}
//		}
//	}
//	else
//	{
//		special = sentence[1];
//		for (int i = 2; i < sentence.length(); i++)
//		{
//			if (sentence[i] != special && sentence[i-1] != special)
//			{
//				word = sentence.substr(0, i);
//				sentence.erase(0, i);
//				break;
//			}
//		}
//	}
//	if (word == "")
//	{
//		word = sentence;
//		sentence = "";
//	}
//
//	return word;
//}
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//string solution(string sentence) {
//	string answer = "";
//	while (!sentence.empty())
//	{
//		string restored_word = restoreWord(splitWord(sentence));
//		if (restored_word == "invalid")
//			return "invalid";
//		answer += restored_word + " ";
//	}
//	answer.erase(answer.end()-1);
//	return answer;
//}
//
//int main()
//{
//	string s = "HaEaLaLaObWORLDb";
//	string s2 = "SpIpGpOpNpGJqOqA";
//	string s3 = "AxAxAxAoBoBoB";
//	string s4 = "bTxTxTaTxTbkABaCDk";
//	solution(s4);
//}