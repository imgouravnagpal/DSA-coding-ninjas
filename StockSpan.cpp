int* stockSpan(int *price, int size)  {
	int *ans = new int[size];
    
    for(int i=0;i<size;i++)
    {
        int count=1;
        for(int j=i-1;j>=0&&price[j]<price[i];j--)
        {
            if(price[j]<price[i])
            {
                count++;
               
            }
            
            
        }
        ans[i]=count;
        
    }
    return ans;
}