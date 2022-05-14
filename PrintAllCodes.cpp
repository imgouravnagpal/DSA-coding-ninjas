#include <string.h>
using namespace std;
void possibleCode(string input, string output)
{
    if(input[0]=='\0')
    {
        cout<<output;
        cout<<endl;
        return;
    }
    int first=input[0]-'0';
    char firstchar=first+'a'-1;
    char secondchar='\0';
    possibleCode(input.substr(1),output+firstchar);

    if(input[1]!='\0')
    {
        int second = first*10 + input[1] -'0';
        if(second>=10 && second<=26)
        {
            secondchar=second+'a'-1;
            possibleCode(input.substr(2),output+secondchar);

        }
    }
}
void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output="";
    possibleCode(input,output);
}
