#include <iostream>
#include <unordered_map>

const std::string alpha = "abcdefghijklmnopqrstuvwxyz";
std::unordered_map<char, int> mapping;

int main()
{
    for (std::string::size_type i = 0; i < alpha.size(); ++i)
    {
        mapping[alpha[i]] = i+1;
    }
    std::string input;
    std::getline(std::cin >> std::ws, input);
    std::string output;
    char c;
    for (std::string::size_type i = 0; i < input.size(); ++i)
    {
        c = tolower(input[i]);
        if (mapping.count(c) == 0)
        {
            output += input[i];
        }
        else
        {
            output += std::string(mapping[c], input[i]);
        }
    }
    std::cout << output << std::endl;
    return 0;
}