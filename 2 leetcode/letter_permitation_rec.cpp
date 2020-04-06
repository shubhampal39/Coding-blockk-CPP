#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void toggle(char &s)
{ 
    s=isupper(s)?tolower(s):toupper(s);
}

void permutations(vector<string>&sol,string s,int pos){
        if(pos==s.size()){
            sol.push_back(s);
            return;
        }
        
        if(isalpha(s[pos]))
        {
            toggle(s[pos]);
            permutations(sol,s,pos+1);
            toggle(s[pos]);
        }
        else
        {
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