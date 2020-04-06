#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutations(vector<string>&sol,string s,int pos){
        if(pos==s.size()){
            sol.push_back(s);
            return;
        }
        
        if(isalpha(s[pos])){
            s[pos]=tolower(s[pos]);
            permutations(sol,s,pos+1);
            s[pos]=toupper(s[pos]);
            permutations(sol,s,pos+1);
        }else{
            permutations(sol,s,pos+1);
        }
    }


vector<string> letterCasePermutation(string& S) {
        vector<string>sol;
        permutations(sol,S,0);
        return sol;
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