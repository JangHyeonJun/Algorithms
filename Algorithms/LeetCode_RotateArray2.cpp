/*
다신 안보겠지만.. 풀이

- 한번 순회로 모든곳을 확인할 수 없음
- 시작부터 한번 순회가 끝나면 다음 번호로 넘어감
- 딱 n번만 순회하기 위해 매 swap마다 count를 증가시킴

- 이것 말고도 reverse를 3번 사용해서 푸는것도 있긴한데. 나중에 쓸데가 있을지도.
- 전체 reverse / 앞덩어리 resverse / 뒷덩어리 reverse

*/


//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//		int n = nums.size();
//		int count = 0;
//		k %= n;
//
//		if (k == 0 || n == 1)
//			return;
//
//		for (int i = 0; count < n; i++)
//		{
//			int currIndex = i;
//			int curr = nums[i];
//
//			do
//			{
//				int targetIndex = (currIndex + k) % n;
//				swap(curr, nums[targetIndex]);
//				currIndex = targetIndex;
//				count++;
//			} while (i != currIndex);
//		}
//	}
//};