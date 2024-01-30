// Evaluate postfix notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation
// Aman Kumar

// Runtime 3ms Beats98.68%of users with C++ 
// Memory 16.29MB Beats5.26%of users with C++
bool isOp(string &s)
{
    if(s == "+" || s == "-" || s == "/" || s == "*")
        return true;
    return false;
}

int calc(string op, string &val1, string &val2)
{
    if(op == "+")
        return stoi(val1) + stoi(val2);
    if(op == "-")
        return stoi(val1) - stoi(val2);
    if(op == "*")
        return stoi(val1) * stoi(val2);
    if(op == "/")
        return stoi(val1) / stoi(val2);
    
    return 0;
}

int evalRPN(vector<string>& tokens) 
{
    stack<string> stk ;
    int n = tokens.size();

    for(int i = 0 ; i < n ; i++)
    {
        if(isOp(tokens[i]))
        {
            // Pop top 2 strings
            string val2 = stk.top();
            stk.pop();
            string val1 = stk.top();
            stk.pop();

            int result = calc(tokens[i], val1, val2);
            stk.push(to_string(result));
        }
        else
            stk.push(tokens[i]);
    }  

    return stoi(stk.top());  
}
