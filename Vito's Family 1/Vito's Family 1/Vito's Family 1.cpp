#include <iostream>
#include <algorithm>
using namespace std;
int solution(int rel,int s[])
{
    sort(s,s+rel);
    int mid = rel / 2;
    int ans = 0;
    for (int i = 0; i < rel; i++)
    {
        ans += abs(s[i]-s[mid]);
    }
    return ans;
}
int main()
{
    int testcase;
    int r, s[600] = {};
    cin >> testcase;
    while (testcase > 0)
    {
        cin >> r;
        for (int i = 0; i < r; i++)
        {
            cin >> s[i];
        }
        cout << solution(r, s)<<"\n";

        testcase--;
    }
}
