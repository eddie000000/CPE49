#include <iostream>
#include <string>
using namespace std;
int main()
{
	string cs1 = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	string line;
	while (getline(cin,line))
	{
		int le = line.length();
		for (int i = 0; i < le; i++)
		{
			if (line[i] >= 'A' && line[i] <= 'Z')
			{
				line[i] = line[i] + 32;
			}
		
			for (int t = 0; t < cs1.length(); t++)
			{
				if (line[i] == cs1[0])
				{
					cout << " ";
					break;
				}
				else if (line[i] == cs1[t])
				{
					cout << cs1[t-2];
				}
			}
		}
		cout << endl;
	}
	return 0;

}