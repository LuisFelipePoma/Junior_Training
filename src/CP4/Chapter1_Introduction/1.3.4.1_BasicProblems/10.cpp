// 10. Let’s define a ‘special word’ as a lowercase alphabet followed by two consecutive digits.
// Given a string, replace all ‘special words’ of length 3 with 3 stars “***”, e.g.,
// S = “line: a70 and z72 will be replaced, aa24 and a872 will not”
// should be transformed into:
// S = “line: *** and *** will be replaced, aa24 and a872 will not”.

#include <bits/stdc++.h>
using namespace std;


int main() {
    // Input string
    std::string inputString = "line: a70 and z72 will be replaced, aa24 and a872 will not";

    // Define the regular expression pattern for a 'special word'
    std::regex pattern("\\b[a-z][0-9][0-9]\\b");

    // Use std::regex_replace to replace matches with "***"
    std::string resultString = std::regex_replace(inputString, pattern, "***");

    // Output the result
    std::cout << "Original string: " << inputString << std::endl;
    std::cout << "Transformed string: " << resultString << std::endl;

    return 0;
}
