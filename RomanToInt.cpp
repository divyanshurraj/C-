#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int romanToInt(string s){
    unordered_map<char,int> symbolToValue{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int result =0;
    for(int index=0;index<s.length();index++){
        if(symbolToValue[s[index]]<symbolToValue[s[index+1]])
        result-=symbolToValue[s[index]];
        else
        result+=symbolToValue[s[index]];

    }
    return result;
    }
};
