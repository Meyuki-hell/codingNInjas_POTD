// bruteforce
/*int zigZagSubsequence (vector<int> & tokenArray)
{
              //Write your Code here
    int n = tokenArray.size();
    if(n <= 1){
        return n;

    }
   
    vector<vector<int>> dp(n, vector<int>(2,1));
    int lZZ = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            int diff = tokenArray[i] - tokenArray[j];
            if(diff > 0){
                dp[i][0] = max(dp[i][0],dp[j][1] + 1);

            }
            else if(diff < 0){
                dp[i][1] = max(dp[i][1], dp[j][0] + 1);
            }
        } 
        lZZ = max(lZZ, max(dp[i][0], dp[i][1]));
    }
   

    return lZZ;
}*/

// optimized one
int zigZagSubsequence(vector<int> & tokenArray){
    int n = tokenArray.size();
    if(n <= 2){
        return n;
    }

    int maxLen = 1;
    int dir = 0;

    for(int i = 1; i < n; i++){
        int diff = tokenArray[i] - tokenArray[i-1];
        if(diff != 0 && dir == 0){
            dir = (diff > 0) ? 1: -1;
            maxLen++;
        }
        else if((diff >0 && dir == -1)|| (diff < 0 && dir == 1)){
            dir *= -1;
            maxLen++;
        }
    }
    return maxLen;
}
