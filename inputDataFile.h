#include <iostream>
#include <fstream>
#include <string>

struct test
{
	std::string dir;
	
};

class input{

private:

/*
структура хронящая данные

*/struct data
{
	std::string dir;
	map<std::string, std::string> KeyVal; 
};

std::vector<data> vector;

public:
	input();
	~input();
	void findDir(std::string dir);

}
