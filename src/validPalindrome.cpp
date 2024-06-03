#include <iostream>
#include <string>
using namespace std;

char lower(char ch)
{
    if ((ch >= 'A' && ch <= 'Z'))
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    return ch;
}

bool valid(char ch)
{
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'));
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    int n = s.length();
    int start =0;
    int end = n-1;
    while(start <= end)
    {
        if (valid(s[start]) && valid(s[end]))
        {
            if(lower(s[start]) == lower(s[end])){
                start++, end--;
            }
            else{
                cout<<"not paindrome";
                break;
            } 
        }
        else if(!valid(s[start])){
            start++;
        }   
        else end--;
    }
    cout<<"palindrome";

    return 0;


    // int end = ans.length();
    // while (start < end)
    // {
    //     if (ans[start++] != ans[end--])
    //     {
    //         return false;
    //     }
    // }
    // return true;
}