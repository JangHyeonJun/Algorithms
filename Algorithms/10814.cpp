//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Profile
//{
//public:
//	int age;
//	int order;
//	string name;
//};
//
//int comp(Profile a, Profile b)
//{
//	if (a.age > b.age)
//		return 1;
//	else if (a.age == b.age)
//	{
//		if (a.order > b.order)
//			return 1;
//		else if (a.order == b.order)
//			return 0;
//		else
//			return -1;
//	}
//	else
//		return -1;
//}
//
//void quick_sort(Profile *data, int start, int end)
//{
//	// only 1 element
//	if (start >= end)
//		return;
//
//	int pivot = start;
//	int i = pivot + 1;
//	int j = end;
//	Profile temp;
//
//
//	while (i <= j)
//	{
//		// until the pivots intersect
//		while (i <= end && comp(data[i], data[pivot]) <= 0)
//			i++;
//		while (j > start && comp(data[j], data[pivot]) >= 0)
//			j--;
//
//		if (i > j)
//		{
//			temp = data[j];
//			data[j] = data[pivot];
//			data[pivot] = temp;
//		}
//		else
//		{
//			temp = data[i];
//			data[i] = data[j];
//			data[j] = temp;
//		}
//	}
//
//	quick_sort(data, start, j - 1);
//	quick_sort(data, j + 1, end);
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	Profile *user = new Profile[N];
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> user[i].age >> user[i].name;
//		user[i].order = i;
//	}
//
//	quick_sort(user, 0, N - 1);
//
//	for (int i = 0; i < N; i++)
//		cout << user[i].age << ' ' << user[i].name << '\n';
//
//	delete[] user;
//
//	return 0;
//}