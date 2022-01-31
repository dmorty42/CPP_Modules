
#include "replace.hpp"

Replace::Replace(char *str1, char *str2, std::string file) {
	this->str1.assign(str1);
	this->str2.assign(str2);
	this->outfile = file.append(".replace");
}

bool Replace::isGetLine() {
    temp.clear();
	std::getline(this->in, temp);
    if (temp.empty())
		return (false);
	return (true);
}

std::string Replace::findAndReplace() {
    size_t i;
    while ((i = temp.find(str1)) < std::string::npos) {
        std::cout << i << std::endl;
        temp.erase(i, str1.size());
        temp.insert(i, str2);
    }
    return (temp);
}
