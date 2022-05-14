int subsetSumToK(int input[], int n, int output[][50], int k) {
     if (n==0){
      if(k==0)
    {
       output[0][0]=0;
    return 1;
    }
    else return 0;
  }
    int out1[1000][50];
    int out2[1000][50];
 int  s1=subsetSumToK(input+1,n-1,out1,k-input[0]);
    
int s2=subsetSumToK(input+1,n-1,out2,k);
    for(int i=0;i<s1;i++)
    {
        output[i][0]=out1[i][0]+1;
        output[i][1]=input[0];
      for(int j=1;j<=out1[i][0];j++)
      {
          output[i][j+1]=out1[i][j];
      }
    }
     for(int i=0;i<s2;i++)
    {
      for(int j=0;j<=out2[i][0];j++)
      {
          output[i+s1][j]=out2[i][j];
      }
    }
    return s1+s2;
}