#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
#include <cctype>

bool isOperand(std::string token) {
	return std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1 && std::isdigit(token[1]));
}

double evaluateReversePolishNotation(std::string expression) {
	std::stack<int> numbers;

	std::stringstream ss(expression);
	std::string token;

	while (ss >> token) {
		if (isOperand(token)) {
			numbers.push(std::stod(token));
		}
		else {
			double operand2 = numbers.top();
			numbers.pop();

			double operand1 = numbers.top();
			numbers.pop();

			if (token == "+"){
				numbers.push(operand1 + operand2);
			}
			else if (token == "-"){
				numbers.push(operand1 - operand2);
			}
			else if (token == "*"){
				numbers.push(operand1 * operand2);
			}
			else if (token == "/"){
				numbers.push(operand1 / operand2);
			}
		}
	}

	return numbers.top();
}

int main() {
	std::string expression;
	getline(std::cin, expression);
	int result = evaluateReversePolishNotation(expression);

	std::cout << result << std::endl;

	return 0;
}
