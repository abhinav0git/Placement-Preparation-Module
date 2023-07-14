bool isValidParenthesis(string s)
{
    stack <char> stk;

    for(int i=0;i<s.size();i++)
    {
      if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        stk.push(s[i]);

      else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
      {
        if(stk.size()==0)
        return 0;

        else
        stk.pop();
      }
    }

    return (stk.size()!=0) ? 0 : 1;
}
