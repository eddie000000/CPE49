#include <iostream>
#include <string>
using namespace std;
int main()
{
	int l;
	string line;
	int ans[100][2] = {};
	cin >> l >>line;
	for (int p = 0; p < l; p++)
	{
		getline(cin, line);
		for (int i = 0; i < line.size(); i++)
			ans[int(toupper(line[i]))][0]++;
	}
	for (int i = 100; i > 0; i--)
		for (int j = 65; j <= 91; j++)
		{
			if (ans[j][0] == i)cout << char(j) << " " << i << endl;
		}
}
