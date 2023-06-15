#include<bits/stdc++.h>
string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
    int carry = 0;
    string result;
    int i = n - 1;
    int j = m - 1;
    while(i >= 0 || j >= 0 || carry > 0){
        int s = carry;

        if(i >= 0){
            s = s + a[i] - '0';
            i--;
        }
        if(j >= 0){
            s += b[j] - '0';
            j--;
        }

        result.push_back(s % 2 + '0');
        carry = s / 2;
    }
    reverse(result.begin(), result.end());
    return result;
}
