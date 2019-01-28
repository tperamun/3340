#include <iostream>
#include <vector>
#include <string>



void insertion_sort(std::vector<int> & array){

	for(int i = 1; i < array.size(); i ++){

		int key = array[i];
		for(int j = i - 1; j >= 0 ; j --){
			if(key < array[j]){
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}

}



int main(){



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
	



	/**

	std::vector<int> array_200000;


	for(int i = 200000; i>=1 ; i--){

		array_200000.push_back(i);
	}


	std::cout<< "\nFirst 20 integers *before* sorting for array_200000\n" <<std::endl;
	
	for(int i =0 ; i< 20; i++){
		std::cout<< array_20000[i] << " ";
	}
	
	std::cout<<std::endl<<std::endl;
	
	std::cout<< "First 20 integers *after* sorting for array_200000\n" <<std::endl;

	insertion_sort(array_20000);

	for(int i =0 ; i< 20; i++){
		std::cout<< array_20000[i] << " ";
	}



**/



	//

	

	


}
