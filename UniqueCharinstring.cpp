#include <bits/stdc++.h> 
char findNonRepeating(string str) {
    // Write your code here.
   for (int i = 0; i < str.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < str.size(); j++)
        {
            // checking if two characters are equal
            if (str[i] == str[j] and i != j) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << str[i];
    }
 
    return 0;
}
