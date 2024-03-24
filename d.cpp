#include <iostream>
#include <stack>
#include <unordered_map>

bool isValidParentheses(std::string s) {
	std::stack<char> brackets;
	std::unordered_map<char, char> closingMap = {{')', '('}, {']', '['}, {'}', '{'}};

	for (char c : s) {
		if (closingMap.find(c) != closingMap.end()) {
			if (brackets.empty() || brackets.top() != closingMap[c]) {
				return false;
			}
			brackets.pop();
		}
		else {
			brackets.push(c);
		}
	}

	return brackets.empty();
}

int main() {
	std::string testString;
	std::cin >> testString;
	if (isValidParentheses(testString)){
		std::cout << "yes" << std::endl;
	}
	else{
		std::cout << "no" << std::endl;
	}

	return 0;
}
