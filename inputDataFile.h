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
структура с элементами данных 

*/struct data
{
	std::string dir;// имя ветки
	map<std::string, std::string> KeyVal; //ключ и значение ветки
};

std::vector<data> vector;

public:
	input();
	~input();
	void findDir(std::string dir);

}
