
#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace {
	public:
		std::string str1;
		std::string	str2;
        std::string temp;
		std::string outfile;
		std::ifstream in;
		std::ofstream out;
		Replace(char *str1, char *str2, std::string file);
		bool isGetLine();
        std::string findAndReplace();
};

#endif