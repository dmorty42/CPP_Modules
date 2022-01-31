
#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong numbers of argument!" << std::endl;
		return (1);
	}
	Replace one(argv[2], argv[3], argv[1]);
	 one.in.open(argv[1]);
	 if (!one.in.is_open())
	 {
	 	std::cout << "File can't be opened!" << std::endl;
	 	return (1);
	 }
	 one.out.open(one.outfile, std::ios_base::out | std::ios_base::trunc);
     if (!one.out.is_open())
     {
         std::cout << "File can't be opened!" << std::endl;
         return (1);
     }
     while (one.isGetLine()) {
         std::cout << one.temp << std::endl;
         one.findAndReplace();
         one.out << one.temp << std::endl;
     }
     one.in.close();
     one.out.close();
}