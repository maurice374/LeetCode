#include <vector>
#include <iostream>
using namespace std;

class Solution 
{
    public:
        vector<vector<int>> generate(int numRows) 
        {
            vector<vector<int>> result = {{1}};
            
            for(int i=0; i < numRows - 1; i++)
            {
                vector<int> next_line;
                next_line.push_back(1);
                for(int j = 0; j < result[i].size() - 1; j++)
                {
                    next_line.push_back(result[i][j] + result[i][j + 1]);
                }
                next_line.push_back(1);
                result.push_back(next_line);
            }
            return result;
        }
};

void print_trianlge(vector<vector<int>> vec)
{   
    cout << "---------------------------" << endl;
    for(int i=0; i < vec.size(); i++)
    {
        vector<int> sub_vec = vec[i];
        for(int j=0; j <sub_vec.size(); j++)
        {
            cout << sub_vec[j] << " " ;
        }
        cout << endl;
    }

}

int main()
{
    Solution sol = Solution();
    vector<vector<int>> a = sol.generate(1);
    vector<vector<int>> b = sol.generate(2);
    vector<vector<int>> c = sol.generate(5);
    vector<vector<int>> d = sol.generate(10);
    print_trianlge(a);
    print_trianlge(b);
    print_trianlge(c);
    print_trianlge(d);
}