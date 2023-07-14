#include <bits/stdc++.h> 

void solve(stack <int>& stk,int num)
{
    if(stk.empty())
    {
        stk.push(num);
        return;
    }
    int topnum = stk.top();
    stk.pop();
    solve(stk,num);
    stk.push(topnum);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}
