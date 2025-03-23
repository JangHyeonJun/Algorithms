//#include <stack>
//
//using namespace std;
//
//class MinStack {
//    stack<int> s;
//    stack<int> min;
//public:
//    MinStack() {
//
//    }
//
//    void push(int val) {
//        s.push(val);
//
//        if (min.empty() || val <= min.top())
//            min.push(val);
//    }
//
//    void pop() {
//        auto val = s.top();
//        s.pop();
//        if (min.top() == val)
//            min.pop();
//    }
//
//    int top() {
//        return s.top();
//    }
//
//    // NOTE: 현 시점에서 가장 작은 값만 구하면 됨
//    int getMin() {
//        return min.top();
//    }
//};