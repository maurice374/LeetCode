/*
Überlegungen: 
    n=1 -> 1 (1)
    n=2 -> 2 (1+1, 2)
    n=3 -> 3 (1+1+1, 1+2, 2+1)
    n=4 -> 5 (1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2)
    n=5 -> 8 (1+1+1+1+1, 1+1+1+2, 1+1+2+1, 1+2+1+1, 2+1+1+1, 1+2+2, 2+1+2, 2+1+1)
    --> Fibonacci-Folge
*/

#include <iostream>
using namespace std;

class Solution 
{
    public:
        int climbStairs(int n) 
        {
            int prev_1 = {1}; 
            int prev_2 = {1};
            int result;

            if(n < 1){return 0;}
            if(n == 1){return 1;}

            for(int i = 2; i<=n; i++)
            {
                result = prev_1 + prev_2;
                prev_2 = prev_1;
                prev_1 = result;
            }     
            return result;
        }
};


int main()
{
    Solution sol = Solution();
    int a = 1;
    cout << "Input: " << a << "\tOutput: " << sol.climbStairs(a) << endl;
    a = 2;
    cout << "Input: " << a << "\tOutput: " << sol.climbStairs(a) << endl;
    a = 3;
    cout << "Input: " << a << "\tOutput: " << sol.climbStairs(a) << endl;
    a = 5;
    cout << "Input: " << a << "\tOutput: " << sol.climbStairs(a) << endl;
    a = 10;
    cout << "Input: " << a << "\tOutput: " << sol.climbStairs(a) << endl;
}
