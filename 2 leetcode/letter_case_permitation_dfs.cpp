#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void DFS(string S, int pos, vector<string>& res){
        if(pos == S.size()){
            res.push_back(S);
            return;
        }
        DFS(S, pos + 1, res);
        char c = S[pos];
        if(isalpha(c)){
            S[pos] = islower(c) ? toupper(c) : tolower(c);
            DFS(S, pos + 1, res);
        }
    }


  vector<string> letterCasePermutation(string S) {
        vector<string>res;
        DFS(S, 0, res);
        return res;
    }
    

int main()
{

    vector<string>a;
    string s="a1Bc";
    a=letterCasePermutation(s);
  for (int i = 0; i < a.size(); ++i)
  {
      cout<<a[i]<<endl;
  }
}