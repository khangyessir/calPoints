#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Solution{
public:
    int calPoints(vector<string>& operations){
        vector<int> scores;
        for(const string& op : operations){
            if(op == "+"){
                int top = scores.back();
                int secondTop = scores[scores.size() - 2];
                scores.push_back(top + secondTop);
            } else if(op == "D"){
                scores.push_back(2 * scores.back());
            } else if(op == "C"){
                scores.pop_back();
            } else{
                scores.push_back(stoi(op));
            }
        }
        int ans = 0;
        for (int score : scores){
            ans += score;
        }
        return ans;
    }
};
