#include <iostream>
#include "string.h"
#include "array_copy.h"

/*
int ascii_value(char c){
	return int(c);
}*/

int crypt(std::string word){
	int crypted = 0;
	for(int i=0;i<word.size();i++){
		crypted += int(word[i])+i;
	}
	
	return crypted;
}

std::string hashmap(std::string key, std::string table[]){
	int crypt(std::string word);	
	return table[crypt(key)];
}


int main(){

	// functions
	int crypt(std::string word);
	std::string hasmap(std::string key, std::string table[]);
	
	// variables
	std::string key, value;
	std::string table_of_words[1000];
	int action = 0;

	// code
	while(action != 3){
		std::cout << "#==============================#" << std::endl;
		std::cout << "" << std::endl;
		std::cout << " 1) input key value" << std::endl;
		std::cout << " 2) search in dictionary" << std::endl;
		std::cout << " 3) quit" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "#==============================#" << std::endl;
		std::cin >> action;
		switch(action){
			case 1:
				std::cout << "input the key: " <<  std::endl;
				std::cin >> key;
			
				std::cout << "input the value: " <<  std::endl;
				std::cin >> value;
				if(crypt(key) > (int)sizeof(table_of_words)){
					std::string tempArray[crypt(key)+1];
                    std::string avoid[1] = {"\0"};
					copy_array_str((int)sizeof(table_of_words), 1, table_of_words, tempArray, avoid);
                    memcpy(table_of_words,tempArray,sizeof(tempArray));
                    delete [] tempArray;
                    delete [] avoid;
				}
				table_of_words[crypt(key)] = value;
			break;

			case 2:
				std::cout << "key: ";
				std::cin >> key;
			
				std::cout << "value: " << hashmap(key, table_of_words) << std::endl;
			break;

			case 3:
				std::cout << "see you next time.";
			break;
			
			default:
				std::cout << "Only values 1 or 2 are useful" << std::endl;
		}
	}

		
	
	
	
	
	// std::cout << "crypting the word test" << std::endl << crypt(test);
	

	
	return 0;	
}
