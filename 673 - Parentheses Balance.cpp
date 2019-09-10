#include<bits/stdc++.h>
using namespace std;

bool ParenthesesBalance(string str)
{
    stack<char>s;

    for(int i=0; i<(int)str.length(); i++)
    {
        if(str[i]=='(' || str[i]=='[')
        {
            s.push(str[i]); //open bracket push into the stack
            continue;
        }
        
        if(s.empty())   //stack is empty because no opening bracket found in current character 
            return false;
        
        if(str[i]=='(' && s.top()!=')')   // brackets don't match
        {
            return false;
        }
        if(str[i]=='[' && s.top()!=']')   //brackets don't match
        {
            return false;
        }
        
        if(str[i]==']' && s.top()=='(')
			return false;
		if(str[i]==')' && s.top()=='[')
			return false;
        s.pop();  
    }
    if(s.empty())
        return true;
    return false;
}

int main()
{
	string str;
    int n;
	cin >> n;
	// dummy gets for avoiding enter after integer
    getline(cin,str);
    while(n--)
    {
        // have to take string as a get line
		// so empty string won't miss
        getline(cin,str);
        if(ParenthesesBalance(str)){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
