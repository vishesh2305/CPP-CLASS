#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string pallindrome(string h)
{
    string m = h;
    int len = h.length();
    reverse(m.begin(), m.end());
    if (m == h)
    {
        return m; // jbb same mill jatti hh
    }
    else
    {
        int t = 0;
        int n = 0;
        string k = "";
        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (h[i] == h[j])
                {
                    if (i > 0)
                    {
                        for (int l = 1; l < len; l++)
                        {
                            k += h[l]; // agar vo char string m hh but first leeter nhi hh
                        }
                    }

                    else
                    {
                        int len2 = len - 1;
                        for (int i = 0; i < len2; i++)
                        { // agar first letter hh
                            k += h[i];
                        }
                    }
                    return pallindrome(k);
                    n++;
                }
            }
        }
        if (n == 0)
        {
            reverse(m.begin(), m.end());
            return m.substr(0, 1);
        }
    }
}

int main()
{
    string s = "aacabdkacaa";
    int length = s.length();
    string num = pallindrome(s);
    cout << "string  is " << num;
}
