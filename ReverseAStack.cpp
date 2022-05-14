void reverseStack(stack<int> &input, stack<int> &extra) {
    if(input.empty())
    {
        return;
    }
    if(input.size()==1)
    {
        return;
    }
    int data = input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty())
    {
        extra.push(input.top());
        input.pop();
    }
    input.push(data);
    while(!extra.empty())
    {
        input.push(extra.top());
        extra.pop();
    }
    return;
    
}