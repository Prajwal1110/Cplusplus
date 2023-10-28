#include <bits/stdc++.h> 

string stringReverse(string S) {
    // Write your code here.
    int n=S.length();
    for(int i=0;i<n/2;i++)
    {
        swap(S[i],S[n-i-1]);
    }
  return S;
}

// TRACING
EX:ninja
  n=5;
  for(int i=0;i<5/2;i++)
    1st iteration: swap(S[0],swap[4])
    2nd iteration: swap(S[1],swap[3])
    3rd iteration: swap(S[2],swap[2])
return S
