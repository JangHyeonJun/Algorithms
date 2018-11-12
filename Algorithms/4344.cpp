///* 
//float 형 변수는 정확도가 매우 낮기 때문에 알고리즘 풀이에서는 사용하지 말 것
//precision 은 자릿수(정수부+소수부)를 지정해주는 함수
//fixed 를 통해 소수부의 자릿수만 지정할 수 있도록 해주며
//showpoint를 통해 0의자리도 강제로 출력하게 해준다
//*/
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int C;
//	int N;
//	
//	double count;
//	double sum;
//
//	cin >> C;
//
//	for (int i = 0; i < C; i++)
//	{
//		int score[1001];
//		cin >> N;
//		count = 0;
//		sum = 0.f;
//		for (int j = 0; j < N; j++)
//		{
//			cin >> score[j];
//			sum += score[j];
//		}
//		for (int j = 0; j < N; j++)
//		{
//			if (score[j] > (sum / N))
//				count++;
//		}
//		cout.precision(3);
//		cout << fixed << showpoint << (count / N) * 100 << '%' << '\n';
//	}
//
//	return 0;
//}