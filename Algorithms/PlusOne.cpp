//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits) {
//
//        bool carry = false;
//        for (int i = digits.size() - 1; i >= 0; i--)
//        {
//            carry = false;
//            digits[i]++;
//            if (digits[i] > 9)
//            {
//                carry = true;
//                digits[i] = 0;
//            }
//            else
//                return digits;
//        }
//
//        vector<int> answer;
//        answer.push_back(1);
//        answer.insert(answer.begin()+1, digits.begin(), digits.end());
//
//        return answer;
//    }
//};