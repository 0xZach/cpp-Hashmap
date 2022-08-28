#include <iostream>
#include "string.h"

void copy_array_int(int min_size, int size_avoid, int arrFrom[], int arrTo[], int avoid[]){
	bool add = true;
	int j = 0;
	for(int i=0;i<min_size;i++){
		if(size_avoid > 0){
			j = 0;
			while(j < size_avoid && add){
				if(avoid[j] == arrFrom[i]){
					add = false;
				}
				j++;
			}
		}
		if(add){
			arrTo[i]=arrFrom[i];
		}
	}
}




void copy_array_str(int min_size, int size_avoid, std::string arrFrom[], std::string arrTo[], std::string avoid[]){
	bool add = true;
	int j = 0;
	for(int i=0;i<min_size;i++){
		if(size_avoid > 0){
			j = 0;
			while(j < size_avoid && add){
				if(avoid[j] == arrFrom[i]){
					add = false;
				}
				j++;
			}
		}
		if(add){
			arrTo[i]=arrFrom[i];
		}
	}
}







/*
int main(){
	// functions
	void copy_array_int(int min_size, int size_avoid, int arrFrom[], int arrTo[], int avoid[]);

	// variables
	int arr1[4]={1,1,1,1};
	int arr2[5];
	int arrAvoid[0];
	
	//code
	copy_array_int(4,0,arr1,arr2,arrAvoid);
	arr2[4]=1234;
	
	for(int i=0;i<5;i++){
		std::cout << arr2[i] << std::endl;
	}
	return 0;
}*/
