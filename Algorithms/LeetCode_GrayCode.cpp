//#include <vector>
//#include <bitset>
//using namespace std;
//
//class Solution {
//  bitset<16> intToBinary(int n)
//  {
//    bitset<16> bit;
//    int i = 0;
//    while (n > 0)
//    {
//      if (n % 2 == 1)
//        bit[i] = 1;
//      n /= 2;
//      i++;
//    }
//
//    return bit;
//  }
//
//  bitset<16> binaryToGray(const bitset<16> &binary)
//  {
//    bitset<16> gray;
//    bool findFirst = false;
//
//    for (int i = 15; i >= 0; i--)
//    {
//      if (!findFirst)
//      {
//        if (binary[i] == 1)
//        {
//          findFirst = true;
//          gray[i] = 1;
//        }
//      }
//      else if (binary[i] != binary[i + 1])
//        gray[i] = 1;
//
//    }
//
//    return gray;
//  }
//
//  int grayToInt(const bitset<16> &gray)
//  {
//    int digit = 1;
//    int n = 0;
//    for (int i = 0; i < 16; i++, digit <<= 1)
//      if (gray[i] == 1)
//        n += digit;
//    
//    return n;
//  }
//public:
//  vector<int> grayCode(int n) {
//    vector<int> ans(1 << n);
//    for (int i = 0; i < (1 << n); i++)
//      ans[i] = i ^ (i >> 1);
//    return ans;
//  }
//};
//
//int main()
//{
//  Solution s;
//  s.grayCode(2);
//}