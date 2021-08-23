//using namespace std;
//
//long long solution(int price, int money, int count)
//{
//    long long allPrice = 0;
//
//    // 반복문 사용
//    //for (int i = 1; i <= count; i++)
//    //    allPrice += price * i;
//
//    // 공식 사용
//    allPrice = (long long)(count * (count + 1) / 2) * price;
//
//    if (allPrice > money)
//        return allPrice - money;
//    return 0;
//}