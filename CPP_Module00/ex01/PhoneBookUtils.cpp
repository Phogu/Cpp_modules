#include "PhoneBook.hpp"
#include <string>

int my_len(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

std::string formatter(std::string str){
    
    int len = my_len(str);
    int i = 0;

    std::string ret;

    if(len < 10)
    {
        while(i < 10 - len)
        {
            ret += " ";
            i++;
        }

        ret += str;
    }
    else if (len >= 10)
    {
        while(i < 9)
        {
            ret += str[i];
            i++;
        }
        ret += ".";
    }
    return ret;
}