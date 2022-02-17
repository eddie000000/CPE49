#include <iostream>
#include <iomanip>
using namespace std;
void solution(long long int n)
{
	if (n / 10000000 != 0)
	{
		solution(n / 10000000);
		cout <<"kuti ";
		n = n % 10000000;
	}
	if (n / 100000 != 0)
	{
		solution(n / 100000);
		cout << "lakh ";
		n = n % 100000;
	}
	if (n / 1000 != 0)
	{
		solution(n / 1000);
		cout << "hajar ";
		n = n % 1000;
	}
	if (n / 100 != 0)
	{
		solution(n / 100);
		cout << "shata ";
		n = n % 100;
	}
	if(n!=0)
		cout << n << " ";
}
int main()
{
	long long int num;
	int count = 1;
	while (cin >> num)
	{
		cout  <<setw(4)<< count<< ". ";
		count++;
		solution(num);
		if (num == 0)
			cout << 0;
		cout << endl;
	}

}
