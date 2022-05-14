
// Maximum Profit on App

// You have made a smartphone app and want to set its subscription price such that the profit earned is maximised. There are certain users who will subscribe to your app only if their budget is greater than or equal to your price.
// You will be provided with a list of size N having budgets of subscribers and you need to return the maximum profit that you can earn.
// Lets say you decide that price of your app is Rs. x and there are N number of subscribers. So maximum profit you can earn is :
//  m * x
// where m is total number of subscribers whose budget is greater than or equal to x.








#include<algorithm>
int maximumProfit(int budget[], int n) {
    // Write your code here
sort(budget, budget  + n);
    int *cost = new int[n];
    for(int i = 0;i < n;i++)
        cost[i] = budget[i] * (n - i);
    int max = 0;
    for(int i = 0;i < n;i++  )
        if(cost[i] > max)
            max = cost[i];
    return max;
}