#include <iostream>
#include <string>
using namespace std;
string keys(int n){
    string key[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return key[n-2];
}
void helper(int n , string output)
{
    if(n==0)
    {
        cout<<output<<endl;
        return;
    }
    int smallnumber=n/10;
    int	lastdigit=n%10;
    string key = keys(lastdigit);
    for(int i=0;i<key.size();i++)
    {
        helper(smallnumber,key[i]+output);
    }
}

void printKeypad(int num){
    helper(num,"");
    return;
    
}
