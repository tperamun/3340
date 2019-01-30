#include "Print_Algorithm_Output.hpp"

void print_insertion_sort_20000(){

	
	std::vector<int> array_20000;
	


	for(int i = 20000; i >=1 ; i--){

		array_20000.push_back(i);
	}


	

	std::cout<< "\nFirst 20 integers *before* sorting for array_20000\n" <<std::endl;
	
	for(int i =0 ; i< 20; i++){
		std::cout<< array_20000[i] << " ";
	}
	
	std::cout<<std::endl<<std::endl;
	
	std::cout<< "First 20 integers *after* sorting for array_20000\n" <<std::endl;

	insertion_sort(array_20000);

	for(int i =0 ; i< 20; i++){
		std::cout<< array_20000[i] << " ";
	}
	
	std::cout<<std::endl<<std::endl;


}


void print_insertion_sort_200000(){
	
	std::vector<int> array_200000;


	for(int i = 200000; i>=1 ; i--){

		array_200000.push_back(i);
	}


	std::cout<< "\nFirst 20 integers *before* sorting for array_200000\n" <<std::endl;
	
	for(int i =0 ; i< 20; i++){
		std::cout<< array_200000[i] << " ";
	}
	
	std::cout<<std::endl<<std::endl;
	
	std::cout<< "First 20 integers *after* sorting for array_200000\n" <<std::endl;

	insertion_sort(array_200000);

	for(int i =0 ; i< 20; i++){
		std::cout<< array_200000[i] << " ";
	}

	std::cout<<std::endl<<std::endl;
}


void print_merge_sort_20000(){

	std::vector<int> array_20000;


	for(int i = 20000; i>=1 ; i--){

		array_20000.push_back(i);
	}

		std::cout<< "\nFirst 20 integers *before* sorting for array_20000\n" <<std::endl;
	
	for(int i =0 ; i< 20; i++){
		std::cout<< array_20000[i] << " ";
	}
	
	std::cout<<std::endl<<std::endl;
	
	std::cout<< "First 20 integers *after* sorting for array_20000\n" <<std::endl;

	merge_sort(array_20000);

	for(int i =0 ; i < 20; i++){
		std::cout<< array_20000[i] << " ";
	}

	std::cout<<std::endl<<std::endl;

}



void print_merge_sort_200000(){

	std::vector<int> array_200000;


	for(int i = 200000; i>=1 ; i--){

		array_200000.push_back(i);
	}

		std::cout<< "\nFirst 20 integers *before* sorting for array_200000\n" <<std::endl;
	
	for(int i =0 ; i< 20; i++){
		std::cout<< array_200000[i] << " ";
	}
	
	std::cout<<std::endl<<std::endl;
	
	std::cout<< "First 20 integers *after* sorting for array_200000\n" <<std::endl;

	merge_sort(array_200000);

	for(int i =0 ; i < 20; i++){
		std::cout<< array_200000[i] << " ";
	}

	std::cout<<std::endl<<std::endl;

}

void print_merge_sort_200000000(){

	std::vector<int> array_200000000;


	for(int i = 200000000; i>=1 ; i--){

		array_200000000.push_back(i);
	}

		std::cout<< "\nFirst 20 integers *before* sorting for array_200000000\n" <<std::endl;
	
	for(int i =0 ; i< 20; i++){
		std::cout<< array_200000000[i] << " ";
	}
	
	std::cout<<std::endl<<std::endl;
	
	std::cout<< "First 20 integers *after* sorting for array_200000000\n" <<std::endl;

	merge_sort(array_200000000);

	for(int i =0 ; i < 20; i++){
		std::cout<< array_200000000[i] << " ";
	}

	std::cout<<std::endl<<std::endl;

}
