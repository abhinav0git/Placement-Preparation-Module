#include <bits/stdc++.h> 

void sortedInsert(stack <int> &stk,int num)
{
		if(stk.empty() ||(!stk.empty() && stk.top()<num))
		{
			stk.push(num);
			return;
		}

		int n = stk.top();
		stk.pop();

		sortedInsert(stk,num);
		stk.push(n);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty())
		return;

	int num = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedInsert(stack, num);
}
