#include <bits/stdc++.h> 
long long titleToNumber(string str) {
    // Write your code here
    long long colNum = 0;
    int n = str.length();
    for(int i = 0; i < n ; i++){
        int val = str[i] -'A' + 1;
        colNum = colNum * 26 + val;
    }

    return colNum;
}
