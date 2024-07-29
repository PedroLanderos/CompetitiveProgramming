#include<iostream>
#include<map>
#include<vector>

using namespace std;

map<char, string> miMapa = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

vector<string> answer;

//Input: digits = "23"
//Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

//se debe de llamar recursivamente 
vector<string> letterCombinations(string digits)
{
    
}

int main(int argc, char const *argv[])
{
    string digits;
    cin>>digits;

    letterCombinations(digits);
    return 0;
}
