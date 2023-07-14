#include <bits/stdc++.h> 

void solve (stack<int>&inputStack, int length, int count)
{
   if(count == length/2)
   {
      inputStack.pop();
      return;
   }

   int topNum = inputStack.top();
   inputStack.pop();

   solve(inputStack, length, count+1);

   inputStack.push(topNum);
}

void deleteMiddle(stack<int>&inputStack, int N){
	int count = 0;
   solve(inputStack,N,count);   
}
