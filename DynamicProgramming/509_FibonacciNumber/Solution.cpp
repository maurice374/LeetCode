#include <iostream>
using namespace std;

class Solution 
{
    public:
        int fib(int n) 
        {
            
            int f_1 = 0;
            int f_2 = 1;
            int f = 0;

            if( n <= 1 )
            {
                return n;
            }

            for(int i=0; i<n; i++)
            {
                f = f_1 + f_2; 
                f_2 = f_1;
                f_1=f;
            }
            return f;
        }
};

int main()
{
    Solution sol = Solution();

    cout << sol.fib(0) << endl;
    cout << sol.fib(1) << endl;
    cout << sol.fib(2) << endl;
    cout << sol.fib(3) << endl;
    cout << sol.fib(4) << endl;
    cout << sol.fib(5) << endl;
    cout << sol.fib(6) << endl;
    cout << sol.fib(7) << endl;
    cout << sol.fib(8) << endl;
    cout << sol.fib(9) << endl;
    cout << sol.fib(10) << endl;
}