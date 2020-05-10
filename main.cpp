#include "palindrom.h"
#include <vector>

int main()
{
    std::vector<std::string> inputsString = {
        "ala ma kota", "ala", "kajak", "neveroddoreven", "abacada"
    };

    for (auto& sz : inputsString)
        {
            if(isPalindrome(sz))
                std::cout << sz << " jest palindromem\n";
            else
                std::cout << sz << " nie jest palindromem\n";                   
        }

}