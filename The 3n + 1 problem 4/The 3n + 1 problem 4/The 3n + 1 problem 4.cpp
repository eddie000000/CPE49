#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}	
}
void solution(int a, int b)
{
	int num;
	int counter = 0;
	int ans = 0;
	int max = -1;
	for (int i = a; i <= b; i++)
	{
		num = i;
		ans = 1;
		while (num != 1)
		{
			if (num % 2 != 0)
				num = num * 3 + 1;
			else
				num = num/2;

			ans++;
		}
		counter++;
		if (ans > max)
			max = ans;
	}


		
	cout << max<<endl;
}
int main()
{
	int n1 = 0, n2 = 0;
	while (cin >> n1 >> n2)
	{
		cout << n1 << " " << n2 << " ";
		swap(n1, n2);
		solution(n1, n2);
	}
}
