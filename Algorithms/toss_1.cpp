#include <string>
#include <vector>

using namespace std;
long long solution(long long orderAmount, long long taxFreeAmount, long long serviceFee) {
    // orderAmount : 주문금액
    // taxFreeAmount : 비과세금액
    // serviceFee : 봉사료    
    long long answer = 0;

    // 공급대가
    long long supplyMount = orderAmount - serviceFee;
    // 공급가액
    double supplyValue = (orderAmount - serviceFee + taxFreeAmount * 0.1f) / 1.1f;;
    // 과세 금액
	double taxAmount = supplyValue - taxFreeAmount;
	// 부가가치세. 
    long long taxAddAmount = taxAmount / 10; // 0.1 올림

    if (supplyMount - taxFreeAmount == 1)
        return 0;

    //supplyMount = supplyValue + taxAddAmount;

    //taxAddAmount = taxAmount * 0.1;
    //taxAddAmount = supplyMount - supplyValue;

    //taxAddAmount = (supplyValue * 0.1f) - (taxFreeAmount * 0.1f);

    //supplyValue * 1.1f - taxFreeAmount * 0.1f = supplyMount;
    //supplyValue * 1.1f = supplyMount + taxFreeAmount * 0.1f;
    //supplyValue = (orderAmount - serviceFee + taxFreeAmount * 0.1f) / 1.1f;

    answer = taxAddAmount;

    return answer;
}