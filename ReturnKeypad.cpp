#include <string>
using namespace std;

string keys(int n){
    string key[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return key[n-2];
}

int keypad(int n, string output[]){
   if(n==0)
   {
    	output[0]="";
       return 1;
   }
    int lastdigit=n%10;
    int number = n/10;
    int outputindex=keypad(number,output);
    string j = keys(lastdigit); 
    for(int i =0;i<j.size()-1;i++)
    {
        for(int k=0;k<outputindex;k++)
        {
            output[k+((i+1)*outputindex)]=output[k];
        }
    }
    int z=0;
    for(int i=0;i<j.size();i++)
    {
        for(int k=0;k<outputindex;k++)
        {
            output[z]=output[z]+j[i];
            z++;
        }
    }
    return outputindex*j.size();
    
 
}   