#include <vector>
#include <iostream>
using namespace std;

class Solution 
{
    public:
        vector<int> getRow(int rowIndex) 
        {
            vector<int> row_act={1};
            vector<int> row_last;
           
            for(int i=0; i < rowIndex; i++)
            {
                row_act.clear();
                row_act.push_back(1);
                for(int j=row_last.size() - 1; j > 0; j--)
                {
                    row_act.push_back(row_last[j] + row_last[j - 1]);
                }
                row_act.push_back(1);
                row_last = row_act;
            }
            return row_act;
        }
};

void print_row(vector<int> row)
{   
    cout << "---------------------------" << endl;
    for(int j=0; j <row.size(); j++)
    {
        cout << row[j] << " " ;
    }
    cout << endl;
}

int main()
{
    Solution sol = Solution();

    print_row(sol.getRow(0));
    print_row(sol.getRow(1));
    print_row(sol.getRow(2));
    print_row(sol.getRow(3));
    print_row(sol.getRow(4));
    print_row(sol.getRow(5));
    print_row(sol.getRow(6));

}