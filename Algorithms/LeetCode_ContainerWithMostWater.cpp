#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int getArea(int x1, int y1, int x2, int y2)
    {
        int height = y1 > y2 ? y2 : y1;
        int width = abs(x2 - x1);

        return width * height;
    }
public:
    int maxArea(vector<int>& height) {
        int answer = 0;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i+1; j < height.size(); j++)
            {
                int area = getArea(i, height[i], j, height[j]);
                if (area > answer)
                    answer = area;
            }
        }

        return answer;
    }
};

int main()
{
    Solution s;
    vector<int> v = { 1,1 };
    vector<int> v2 = { 4,3,2,1,4 };
    vector<int> v3 = { 1,2,1 };
    vector<int> v4 = { 6,4,2,100,101,100,8,6,4,2,1 };
    cout << s.maxArea(v);
}