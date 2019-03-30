#include<iostream>
#include<cstring>
using namespace std;

class Solution 
{
	string subPalindrom(string s)
	{
		if(isPalindrome(s)) return s;
		string s1 = subPalindrom(s.substr(0,s.size()-1));
		string s2 = subPalindrom(s.substr(1,s.size()-1));
	    return s1.size()>s2.size()?s1:s2;
	}
    public:
    string longestPalindrome(string s) 
	{
		return subPalindrom(s);
    }
    bool isPalindrome(string s)
    {
        size_t length = s.size();
        int i =0 ;
        int j = length -1;
        while(i<j)
        {
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
};

int main()
{
string s;
cin>>s;
Solution sln;
cout<<sln.longestPalindrome(s);
return 0;
}