int subsetsum(int input[],int n, int k, int output[], int m)
{
    int i;
    if(n==0)
    {
        if(k==0)
        {
            for(i=0;i<m;i++)
            cout<<output[i]<<" ";
            cout<<endl;
            return 1;
        }
        else
            return 0;
    }
    int newarr[9999];
   subsetsum(input+1,n-1,k,output,m);
    for(i=0;i<m;i++)
    {
       newarr[i]= output[i];
    }
    newarr[i]=input[0];
 subsetsum(input+1,n-1,k-input[0],newarr,m+1);
        
}
void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    
    int output[9999];
    subsetsum(input,size,k,output,0);
}