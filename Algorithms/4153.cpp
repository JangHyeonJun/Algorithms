//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int tri[3];
//	while (true)
//	{
//		cin >> tri[0] >> tri[1] >> tri[2];
//
//		if (tri[0] == 0 &&
//			tri[1] == 0 &&
//			tri[2] == 0)
//			break;
//
//		if (tri[0] > tri[1] &&
//			tri[0] > tri[2])
//		{
//			if (tri[0] * tri[0] == (tri[1] * tri[1] + tri[2] * tri[2]))
//				cout << "right";
//			else
//				cout << "wrong";
//		}
//		else if (tri[1] > tri[0] &&
//			tri[1] > tri[2])
//		{
//			if (tri[1] * tri[1] == (tri[0] * tri[0] + tri[2] * tri[2]))
//				cout << "right";
//			else
//				cout << "wrong";
//		}
//		else
//		{
//			if (tri[2] * tri[2] == (tri[1] * tri[1] + tri[0] * tri[0]))
//				cout << "right";
//			else
//				cout << "wrong";
//		}
//		cout<<'\n';
//	}
//	return 0;
//}