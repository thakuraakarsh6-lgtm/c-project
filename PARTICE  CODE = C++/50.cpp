//  wap to programming check balanced parenthese
#include <iostream>
#include <stack>
using namespace std;

bool checkBalanced(string exp)
{
    stack<char> s;

    for(int i = 0; i < exp.length(); i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            s.push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(s.empty())
                return false;

            char top = s.top();
            s.pop();

            if((exp[i] == ')' && top != '(') ||
               (exp[i] == '}' && top != '{') ||
               (exp[i] == ']' && top != '['))
               return false;
        }
    }

    return s.empty();
}

int main()
{
    string exp;

    cout << "Enter expression: ";
    cin >> exp;

    if(checkBalanced(exp))
        cout << "Parentheses are Balanced";
    else
        cout << "Parentheses are Not Balanced";

    return 0;
}