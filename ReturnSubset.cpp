
int subset(int input[], int n, int output[][20]) {
    if(n==0)
    {
        output[0][0]=0;
        return 1;
    }
    int x = subset(input+1,n-1,output);
    for(int i=0;i<x;i++)
    {
        int col = output[i][0]+1;
        output[i+x][0]=col;
        output[i+x][1]=input[0];
        for(int j=2;j<col+1;j++)
        {
            output[i+x][j]=output[i][j-1];
        }
    }
    return 2*x;
    
    
}

