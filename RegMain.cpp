#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void readFile(string name, vector<string> &v){
	string dat;
	ifstream ifile;
	ifile.open(name, ios_base::in);
	if (ifile.is_open()!=0)
	{
		wcout<<L"Файл открыт"<<endl;
		while(getline(ifile, dat)){
			//cout<<dat<<endl;
			v.push_back(dat);
		}

	}
		wcout<<L"Готово\n";

	ifile.close();

}

void writeNewReg(vector<string>& v){
	ofstream outfile;
	outfile.open("new.reg");
	
	for(auto it = v.begin();it != v.end(); ++it){
		cout<<*it<<endl;
	}
}

int main(int argc, char** argv){
	setlocale(0, "");
	wcout<<L"Тест"<<endl;
	std::vector<string> v;
	v.reserve(100);
	wcout<<"запуск функции, добавление данных в вектор\n";
	readFile("C:\\Users\\Sergey\\Desktop\\tt\\parsReg\\reg.reg", v);
	cout<<"vector size() = "<<v.size();
	writeNewReg(v);

	return 0;
}