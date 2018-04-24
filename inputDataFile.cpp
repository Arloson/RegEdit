#include <inputDataFile.h>


input::input(){

}

~input::input(){

}

void input::pushDir(std::string dir){
	bin = new data();
	bin->dir = dir;

}

void input::pushKeyVal(std::string key, std::string val){

}