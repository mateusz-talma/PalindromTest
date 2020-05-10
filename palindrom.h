#include<iostream>
#include<string>
#include<algorithm>

bool isPalindrome(const std::string& text)
{
    std::string textCopy(text);

    std::reverse(std::begin(textCopy), std::end(textCopy));

    if (textCopy == text)
        return true;
    else
        return false;
    
}