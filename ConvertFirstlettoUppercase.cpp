#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HER
	 for (int i = 0; 
           i < str.length(); i++) 
  {
    // If first character of a 
    // word is found
    if (i == 0 && str[i] != ' ' || 
        str[i] != ' ' && str[i - 1] == ' ') 
    {
      // If it is in lower-case
      if (str[i] >= 'a' && str[i] <= 'z') 
      {
        // Convert into Upper-case
        str[i] = (char)(str[i] - 'a' + 'A');
      }
    }
 
  }
 
  return str;
}
