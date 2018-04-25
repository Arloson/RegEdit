#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

vector& readFile(string name, vector<string> &v){
	string dat;
	ifstream ifile;
	ifile.open(name, ios_base::in);
	if (ifile.is_open()!=0)
	{
		wcout<<L"Файл открыт"<<endl;
		ifile.getline(dat);

	}



	ifile.close();
}

void writeNewReg(vector<string>& v){

}

int main(int argc, char** argv){
	setlocale(0, "");
	wcout<<L"Тест"<<endl;








	return 0;
}