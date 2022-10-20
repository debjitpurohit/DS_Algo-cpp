#include <bits/stdc++.h>
using namespace std;

int get_max_area(vector<int> &a)
{
    int n = a.size();
    stack<int> s;
    int max_area = 0;
    int i = 0;
    a.push_back(0);
    while (i < n)
    {
        while (!s.empty() && a[s.top()] > a[i])
        {
            int top = s.top();
            int h = a[top];
            s.pop();
            if (s.empty())
            {
                max_area = max(max_area, h * i);
            }
            else
            {
                int len = i - s.top() - 1;
                max_area = max(max_area, h * len);
            }
        }
        s.push(i);
        i++;
    }
    return max_area;
}

int main()
{
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << get_max_area(a);
    return 0;
}