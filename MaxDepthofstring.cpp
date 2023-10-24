#include<bits/stdc++.h>

int maxDepth(string s) {
	// Write your code here.
	int n=s.size();
	stack<int>st;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(')
		st.push(i);
		else if(s[i]==')')
		{
			if(count<st.size())
			count=st.size();
			st.pop();
		}
	}
	return count;
}


Create a stack. 
Traverse the string, do following for every character
If current character is ‘(’ push it to the stack .
If character is ‘)’, pop an element.
Maintain maximum count during the traversal. 
