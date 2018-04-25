#include <iostream>
#include <fstream>
#include <string>



class input{

private:

/*
структура с элементами данных 

*/struct data
{
	data(){std::cout<<"constructor\n";}
	data(const data& d){std::cout<<"copu\n";}
	~data(){std::cout<<"delete";}
	std::map;// имя ветки
};
std::multimap< data, std::string > KeyVal; //ключ и значение ветки
data* bin;
std::vector<data> vector;

public:
	input();
	~input();
	bool findDir(std::string dir);//поиск по ключу
	void pushDir(std::string dir);//добавление ветки
	void pushKeyVal(std::string key, std::string val);//добавление ключа и значения 
	void deleteDir(std::string dir);
}
