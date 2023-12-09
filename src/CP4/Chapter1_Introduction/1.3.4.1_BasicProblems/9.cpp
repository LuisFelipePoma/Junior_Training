// 9. Given a string that represents a base X number, convert it to an equivalent string in
// base Y, 2  X, Y  36. For example: “FF” in base X = 16 (hexadecimal) is “255” in
// base Y1 = 10 (decimal) and “11111111” in base Y2 = 2 (binary). See Book 2.
#include <bits/stdc++.h>
using namespace std;

int convertToDecimal(const std::string &num, int baseX)
{
	int decimal = 0;
	int power = 0;

	for (int i = num.length() - 1; i >= 0; --i)
	{
		char digit = num[i];
		int value = isdigit(digit) ? (digit - '0') : (tolower(digit) - 'a' + 10);
		decimal += value * pow(baseX, power++);
	}

	return decimal;
}

std::string convertToBaseY(int decimal, int baseY)
{
	std::string result;

	while (decimal > 0)
	{
		int remainder = decimal % baseY;
		char digit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'a');
		result = digit + result;
		decimal /= baseY;
	}

	return result.empty() ? "0" : result;
}

int main()
{
	// Input: "FF" in base 16 (hexadecimal)
	std::string inputNum = "FF";
	int baseX = 16;

	// Convert to decimal
	int decimalValue = convertToDecimal(inputNum, baseX);

	// Convert to base Y1 = 10 (decimal)
	int baseY1 = 10;
	std::string resultY1 = convertToBaseY(decimalValue, baseY1);

	// Convert to base Y2 = 2 (binary)
	int baseY2 = 2;
	std::string resultY2 = convertToBaseY(decimalValue, baseY2);

	// Output results
	std::cout << "Input in base " << baseX << ": " << inputNum << std::endl;
	std::cout << "Converted to base " << baseY1 << ": " << resultY1 << std::endl;
	std::cout << "Converted to base " << baseY2 << ": " << resultY2 << std::endl;

	return 0;
}