#include <bits/stdc++.h> 
bool isBalanced(string expression) 
{
    stack<char>s1;
    int l=expression.size();
    for(int i=0;i<l;i++)
    {
        if(expression[i]==40||expression[i]==123||expression[i]==91)
        {
            s1.push(expression[i]);
        }
        else if(expression[i]==125||expression[i]==93||expression[i]==41)
        {	
            if(s1.size()==0)
            {
                return false;
            }
            int ans = s1.top();
            if(ans==40){
                ans+=1;
            }
            else if(ans==123)
            {
                ans+=2;
            }
            else if(ans==91)
            {
                ans+=2;
            }
            if(ans==expression[i])
            {
                s1.pop();
            }
            else{
                return false;
            }
        }
        
    }
    return s1.empty();
}