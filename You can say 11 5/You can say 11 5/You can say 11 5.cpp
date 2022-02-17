#include <iostream>
#include <string>
using namespace std;
int main()
{
    int apart[1000] = {}, bpart[1000] = {};
    int counta = 0,countb = 0,ans = -1;
    int totala,totalb;
    string word;
    while (cin >> word)
    {
        counta = 0, countb = 0;
        totala = 0, totalb = 0,ans = -1;
        if (word != "0")
        {
            for (int i = 0; i < word.length(); i++)
            {
                if (i % 2 == 0)
                {
                    apart[counta] = word[i] - ('0');
                    totala = totala + apart[counta];
                    counta++;
                }
                else
                {
                    bpart[countb] = word[i] - ('0');
                    totalb = totalb + bpart[countb];
                    countb++;
                }
            }
            for (int i = 0; i < counta; i++)

            ans = abs(totala - totalb);
            if (ans%11 == 0)
                cout << word << " is a multiple of 11." << endl;
            else
                cout << word << " is not a multiple of 11." << endl;
        }
        else
            break;
    }
}
