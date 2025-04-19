#include <vector>
#include <iostream>
using namespace std;


class Solution 
{
    public:
        int maxArea(vector<int>& height)
        {
            int max_area= 0;
            int left = 0;
            int right = height.size() - 1;

            while(left < right)
            {
                int min_height = min(height[left], height[right]);
                int area = (right - left) * min_height;
                max_area = max(max_area, area);

                height[left] < height[right] ? left++: right--;
            }
            return max_area;
        }       
};

int main()
{
    Solution sol = Solution();
    vector<int> a1 = {1,8,6,2,5,4,8,3,7};
    cout << "Area: " << sol.maxArea(a1) << endl;

    vector<int> a2 = {1,1};
    cout << "Area: " << sol.maxArea(a2) << endl;
}   
