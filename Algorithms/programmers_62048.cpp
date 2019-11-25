//using namespace std;
//
//long long solution(int w, int h)
//{
//	if (w > h)
//	{
//		int buf = w;
//		w = h;
//		h = buf;
//	}
//	long long answer = (long long)w * (long long)h;
//	int gcd = 1;
//	for (int i = w; i > 0; i--)
//	{
//		if (w % i == 0 && h % i == 0)
//		{
//			gcd = i;
//			break;
//		}
//	}
//	
//	answer -= gcd * ((w / gcd) + (h / gcd) - 1);
//	
//	return answer;
//}
//
//int main()
//{
//	solution(8, 12);
//}