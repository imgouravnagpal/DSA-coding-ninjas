int staircase(int n){
    if(n<0)
    {
        return 0;
    }
    else if(n==0||n==1)
    {
        return 1;
    }
    
    else if(n==2)
    {
        return 2;
    }
    return staircase(n-1)+staircase(n-2)+staircase(n-3);
    
    
}