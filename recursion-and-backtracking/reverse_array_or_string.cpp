

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<char>& s, int left, int right)
{
    if (left >= right)
        return;

    swap(s[left], s[right]);

    reverse(s, left + 1, right - 1);
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverse(s, 0, s.size() - 1);

    for (char c : s)
    {
        cout << c << " ";
    }

    return 0;
}