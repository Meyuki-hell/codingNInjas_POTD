#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    int n = price.size();
    vector<int>span(n, 1);
    stack<int> st;

    for(int i =0; i< n; i++){
        while (!st.empty() && price[st.top()] <= price[i]) {
            st.pop();
        }
        span[i] = (st.empty()) ? (i + 1): (i - st.top());

        st.push(i);
        
    }
    return span;
}
