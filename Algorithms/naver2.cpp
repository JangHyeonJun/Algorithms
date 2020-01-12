///*
//테스트가 잘 통과됐는지 확인하고 점수를 리턴해야한다
//- 프로그램은 여러 테스트 케이스로 테스트된다.
//- 모든 결과는 "OK" , "Wrong~" , "Timelim~" 등으로만 나온다
//- 테스트 케이스는 연속된 자연수로 번호가 매겨진 그룹으로 구성된다
//- 그룹 내의 모든 테스트 케이스가 "OK" 이어야 점수로 매겨진다.
//- 테스트 케이스의 이름은 [task name] + [group number] 로 이루어지며
//- 같은 group number를 가지는 테스트 케이스는 영소문자로 구별된다.
//- 통과된 그룹의 수 * 100 나누기 그룹의 총 개수로 점수가 매겨진다
//
//테스트 케이스는 최대 300개
//모든 테스트 케이스는 정확히 한번씩 T에 나옴
//테스트 그룹은 연속된 자연수로 1부터 번호 매겨진다
//2개 이상의 결과를 포함하는 그룹은 영소문자로 구별된다 a부터
//모든 원소 T는 테스트 가능한 이름이다
//taskname은 모두 동일하고 영소문자로 이루어지며 30자 이내이다
//정확도에 신경써라 알고리즘 속도는 평가에 반영안한다
//*/
//
//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//#include <unordered_map>
//#include <vector>
//#include <string>
//using namespace std;
//
//int solution(vector<string> &T, vector<string> &R) {
//	// write your code in C++14 (g++ 6.2.0)
//	unordered_map<string, bool> um;
//	int solved_num = 0;
//	for (int i = 0; i < T.size(); i++)
//	{
//		string test = "";
//		for (int j = T[i].length(); j >= 0; j--)
//		{
//			if (T[i][j] <= '9' && T[i][j] >= '0')
//			{
//				test = T[i].substr(0, j + 1);
//				if (R[i] == "OK")
//				{
//					if (um.find(test) == um.end())
//						um[test] = true;
//				}
//				else
//					um[test] = false;
//			}
//		}
//	}
//
//	for (auto iter = um.begin(); iter != um.end(); iter++)
//		if (iter->second)
//			solved_num++;
//
//	return solved_num * 100 / um.size();
//}
//
//int main()
//{
//	vector<string> T = { "a1","a3","a2","a4b","a4a" };
//	vector<string> R = { "WW","OK","OK","RUT","OK" };
//	vector<string> T2 = { "t1","t2","t3","t4","t5","t6","t7","t8","t9","t10","t11", "t12" };
//	vector<string> R2 = { "OK" , "False" , "OK" , "OK"  ,"OK" ,"OK" ,"OK" ,"OK" ,"OK" ,"OK" ,"OK", "OK" };
//	vector<string> T3 = { "1a","1b","2" };
//	vector<string> R3 = { "OK","NNN","OK" };
//	int num = solution(T3, R3);
//	return 0;
//}
//
////(['test1'], ['OK'])
////(['test1'], ['Wrong answer'])
////(['test1a', 'test1b'], ['OK', 'Wrong answer'])
////(['test1', 'TEST1'], ['OK', 'Wrong answer'])
////(['t1', 't2', 't3', 't4', 't5', 't6', 't7', 't8', 't9', 't10', 't11', 't12'], ['OK', 'OK', 'OK', 'OK', 'OK', 'False', 'OK', 'OK', 'OK', 'OK', 'OK', 'OK'])
////(['1a', '1b', '2', '3'], ['OK', 'nono', 'OK', 'NN'])