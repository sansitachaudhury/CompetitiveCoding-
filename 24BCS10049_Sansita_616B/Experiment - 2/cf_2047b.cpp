#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> count(26);

    // input 1 3 abc
    while (t--)
    {
        fill(count.begin(), count.end(), 0);

        int n;
        cin >> n;
        string str = "";
        while (n--)
        {
            char c;
            cin >> c;
            str += c;
            count[((int)(c - 97))]++;
        }
        int maxChar = 0;
        for (int i = 1; i < 26; i++)
        {
            if (count[i] > count[maxChar])
                maxChar = i;
        }

        int minChar = -1;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                if (minChar == -1 || count[i] < count[minChar])
                    minChar = i;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] >= count[maxChar])
                maxChar = i;
            if (count[i] < count[minChar] && count[i] != 0)
                minChar = i;
        }

        int done = false;
        // cout << "min element " << count[minChar];
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == (char)(minChar + 97) && !done)
            {
                str[i] = (char)(maxChar + 97);
                done = true;
                break;
            }
        }
        cout << str << endl;
    }
}