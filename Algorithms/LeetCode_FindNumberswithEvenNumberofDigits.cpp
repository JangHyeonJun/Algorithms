//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int findNumbers(vector<int>& nums) {
//        int count = 0;
//        for (const auto& num : nums)
//        {
//            if (isEvenNumber(num))
//                count++;
//        }
//
//        return count;
//    }
//
//    bool isEvenNumber(int num)
//    {
//        int count = 0;
//        while (num >= 10)
//        {
//            num /= 10;
//            count++;
//        }
//
//        return count % 2 == 1;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 12,345,2,6,789600 };
//    cout << s.findNumbers(v) << endl;
//}