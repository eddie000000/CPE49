#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
	string line1, line2;
	string ans;
	while (cin >> line1 >> line2)
	{
		ans = {};
		for (int i = 0; i < line1.length(); i++)
		{
			for (int j = 0; j < line2.length(); j++)
			{
				if (line1[i] == line2[j])
				{
					ans.append(line1, i, 1);
					line2.erase(j, 1);
					break;
				}
			}

		}
		sort(ans.begin(), ans.end());
		cout << ans << endl;

	}
}