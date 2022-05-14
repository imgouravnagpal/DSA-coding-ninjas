#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
	if(input[0]=='\0')
    {
        output[0]="";
        return 1;
    }
 
    int k=0;
    for(int i=0;i<input.size();i++)
    {
        string newarr[9999];
        int ans=returnPermutations(input.substr(0,i)+input.substr(i+1),newarr);
        
        for(int j=0;j<ans;j++)
        {
            output[k++]=input[i]+newarr[j];
        }
    }
    return k;
}

