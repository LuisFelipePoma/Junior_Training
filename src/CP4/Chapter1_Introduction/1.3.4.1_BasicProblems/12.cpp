// Given a valid mathematical expression involving ‘+’, ‘-’, ‘*’, ‘/’, ‘(’, and ‘)’ in a single line, evaluate that expression.
// (e.g., a rather complicated but valid expression
// 3 + (8 - 7.5) * 10 / 5 - (2 + 5 * 7) should produce -33.0 when evaluated with
// standard operator precedence

#include <bits/stdc++.h>

// Function to check if a character is an operator
bool isOperator(char c)
{
	return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to get the precedence of an operator
int getPrecedence(char op)
{
	if (op == '+' || op == '-')
	{
		return 1;
	}
	else if (op == '*' || op == '/')
	{
		return 2;
	}
	return 0;
}

// Function to evaluate the expression
double evaluateExpression(const std::string &expression)
{
	std::stack<double> values;
	std::stack<char> operators;

	std::istringstream iss(expression);

	std::string token;
	while (iss >> token)
	{
		if (!token.empty())
		{
			if (isdigit(token[0]) || (token.length() > 1 && token[0] == '-' && isdigit(token[1])))
			{
				// If the token is a number, push it onto the values stack
				values.push(std::stod(token));
			}
			else if (token[0] == '(')
			{
				// If the token is '(', push it onto the operators stack
				operators.push('(');
			}
			else if (token[0] == ')')
			{
				// If the token is ')', perform operations until '(' is encountered
				while (!operators.empty() && operators.top() != '(')
				{
					char op = operators.top();
					operators.pop();

					double operand2 = values.top();
					values.pop();
					double operand1 = values.top();
					values.pop();

					if (op == '+')
					{
						values.push(operand1 + operand2);
					}
					else if (op == '-')
					{
						values.push(operand1 - operand2);
					}
					else if (op == '*')
					{
						values.push(operand1 * operand2);
					}
					else if (op == '/')
					{
						values.push(operand1 / operand2);
					}
				}

				if (!operators.empty() && operators.top() == '(')
				{
					operators.pop(); // Pop '('
				}
			}
			else if (isOperator(token[0]))
			{
				// If the token is an operator, perform operations based on precedence
				while (!operators.empty() && getPrecedence(operators.top()) >= getPrecedence(token[0]))
				{
					char op = operators.top();
					operators.pop();

					double operand2 = values.top();
					values.pop();
					double operand1 = values.top();
					values.pop();

					if (op == '+')
					{
						values.push(operand1 + operand2);
					}
					else if (op == '-')
					{
						values.push(operand1 - operand2);
					}
					else if (op == '*')
					{
						values.push(operand1 * operand2);
					}
					else if (op == '/')
					{
						values.push(operand1 / operand2);
					}
				}

				operators.push(token[0]);
			}
		}
	}

	// Perform remaining operations
	while (!operators.empty())
	{
		char op = operators.top();
		operators.pop();

		double operand2 = values.top();
		values.pop();
		double operand1 = values.top();
		values.pop();

		if (op == '+')
		{
			values.push(operand1 + operand2);
		}
		else if (op == '-')
		{
			values.push(operand1 - operand2);
		}
		else if (op == '*')
		{
			values.push(operand1 * operand2);
		}
		else if (op == '/')
		{
			values.push(operand1 / operand2);
		}
	}

	// The final result is on the top of the values stack
	return values.top();
}

int main()
{
	std::string expression = "3 + (8 - 7.5) * 10 / 5 - (2 + 5 * 7)";
	double result = evaluateExpression(expression);

	std::cout << "Result: " << result << std::endl;

	return 0;
}
