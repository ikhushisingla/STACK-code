// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;

// function to check if brackets are balanced
bool isBalanced(string exp)
{
	// Declare a stack to hold the previous brackets.
	stack<char> temp;
	for (int i = 0; i < exp.length(); i++) {
        char c=exp[i];
		if (temp.empty()) {
			// if the stack is empty just push the current
			// bracket
			temp.push(exp[i]);
		}
		else if ((temp.top() == '(' && c == ')')
				|| (temp.top() == '{' && c == '}')
				|| (temp.top() == '[' && c == ']')) {
			// if we found any complete pair of bracket then
			// pop
			temp.pop();
		}
		else {
			temp.push(c);
		}
	}
	if (temp.empty()) {
		// if stack is empty return true
		return true;
	}
	return false;
}

// Driver code
int main()
{
	string exp = "{()}[]";

	// Function call
	if (isBalanced(exp))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
