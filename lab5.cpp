#include <iostream>
#include <string>

std::string runLengthEncode(const std::string &input) {
    std::string output;
    int length = input.length();

    for (int i = 0; i < length; i++) {
        int count = 1;
        while (i + 1 < length && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        output += input[i] + std::to_string(count);
    }
    return output;
}

int main() {
    std::string input = "aaabbbccdaa";
    std::string output = runLengthEncode(input);

    std::cout << "Input: " << input << std::endl;
    std::cout << "Encoded: " << output << std::endl;

    return 0;
}
