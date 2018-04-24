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
	data(){std::cout<<"constructor\n";}
	data(const data& d){std::cout<<"copu\n";}
	~data(){std::cout<<"delete";}
	std::string dir;// имя ветки
	std::multimap<std::string, std::string> KeyVal; //ключ и значение ветки
};
data* bin;
std::vector<data> vector;

	void findDir(std::string dir);
public:
	input();
	~input();
	void pushDir(std::string dir);//добавление ветки
	void pushKeyVal(std::string key, std::string val);//добавление ключа и значения 
	void deleteDir(std::string dir);
}
