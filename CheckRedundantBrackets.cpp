#include<stack>
bool checkRedundantBrackets(string expression) {
    stack<char>s1;
    int l = expression.size();
	for(int i=0;i<l;i++)
    {	
        while(expression[i]!=41)
        {
            s1.push(expression[i]);
            i++;
        }
        int count=0;
        while(s1.top()!=40)
        {
            s1.pop();
            count++;
        }
        s1.pop();
        if(count ==0||count==1)
        {
            return true;
        }
        
    }
    return false;
}