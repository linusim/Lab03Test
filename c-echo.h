#include <iostream>

/*int main(int argv, char** argc){
	//skip the first argc index because its the program
	for(int i = 1; i < argv; i++){
		std::cout << argc[i];
		//Print a whitespace after al but the last iteration
		if(i < argv - 1){
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}*/
std::string echo(int length, char** chars){
	std::string ret = "";
	for(int i = 1; i < length; i++){
		ret += chars[i];
		if(i < length - 1){
			ret += " ";
		}
	}
	return ret;
}


