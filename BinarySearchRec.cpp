int helper(int *input,int start,int end,int element)
{	if(start>end)
{
    return -1;
}
   int mid=(start+end)/2;
    if(input[mid]==element)
    {
        return mid;
    }
    if(input[mid]>element)
    {
        return helper(input,start,mid-1,element);
    }
 	if(input[mid]<element)
    {
        return helper(input,mid+1,end,element);
    }
}
int binarySearch(int input[], int size, int element) {
   return helper(input,0,size-1,element);
    

}
