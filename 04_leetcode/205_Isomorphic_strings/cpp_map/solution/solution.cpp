#include "solution.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>

bool Solution::isIsomorphic(std::string s, std::string t)
{
    if(s.length() != t.length()) {
        return false;
    }

    std::unordered_map<char, char> sCharMap{};
    std::unordered_map<char, char> tCharMap{};
    for(int i = 0; i < s.length(); i++) {
        auto sElem = sCharMap.find(s[i]);
        auto tElem = tCharMap.find(t[i]);
        if(sElem == sCharMap.end() && tElem == tCharMap.end()) {
            sCharMap[s[i]] = t[i];
            tCharMap[t[i]] = s[i];
        } else if(sElem != sCharMap.end() && tElem == tCharMap.end()) {
            return false;
        } else if(sElem == sCharMap.end() && tElem != tCharMap.end()) {
            return false;
        } else {
            if(sElem->second != t[i] || tElem->second != s[i]) {
                return false;
            }
        }
    }

    return true;
}