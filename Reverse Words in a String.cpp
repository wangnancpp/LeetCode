#include <vector>
class Solution {
public:
	inline bool isblank(char c)
	{
		return c==' '||c=='\t'||c=='\n';
	}
	void reverseWords(string &s) {
		std::vector<std::string> words;//split to words
		int start =0;
		for(int i=0 ;i < s.length();++i)
		{
			if(isblank(s[i]))//is blank
			{
				if(start!=i)//is not empty
				{
					string word = s.substr(start,i-start);
					words.push_back(word);
					//start = i+1;
				}
				start = i+1;//current is blank , start from next char
			}
		}
		if(!isblank(s.back()))//the last word
		{
			string word = s.substr(start,s.length()-start);
			words.push_back(word);
		}
		s.clear();
		for(int i=words.size()-1;i>=0;--i)//reverse
			s+=words[i]+(i?" ":"");//all blank is replaced by a space
	}
};