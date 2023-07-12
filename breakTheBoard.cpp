#include <bits/stdc++.h> 

int minimumCost(vector<int> row, vector<int> column, int l, int w){
    sort(row.rbegin(), row.rend());
    sort(column.rbegin(), column.rend());

    int minCost = 0;
    int hCuts = 1;
    int vCuts = 1;
    int i = 0, j =0;

    while(i < l -1 && j < w - 1){
        if(row[i] >= column[j]){
            minCost += row[i] * vCuts;
            hCuts++;
            i++;
        }
        else{
            minCost += column[j] * hCuts;
            vCuts++;
            j++;
        }
    }
    while(i < l - 1){
        minCost += row[i] * vCuts;
        hCuts++;
        i++;
    }
    while(j < w - 1){
        minCost += column[j] * hCuts;
        vCuts++;
        j++;
    }

    return minCost;

}
