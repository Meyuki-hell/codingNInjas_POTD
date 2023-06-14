#include <bits/stdc++.h> 
bool isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u');
}

bool splitString(string &str){
    // Write your code here.
    int s = str.length();
    if( s % 2 != 0){
        return false;
    }
    int half = s / 2;
    int fh = 0;
    int sh = 0;

    for(int i = 0; i < half; i++){
        if(isVowel(str[i])){
            fh++;
        }
    }

    for(int i = half; i < s; i++){
        if(isVowel(str[i])){
            sh++;
        }
    }
    return fh == sh;
}
