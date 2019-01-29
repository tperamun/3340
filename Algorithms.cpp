#include "Algorithms.hpp"


void merge(std::vector<int> & array, int start, int end){

	std::vector<int> temp(array.size());
	
	int mid = (start + end) / 2;

	int i = start; int j = mid + 1; int k = start;

	while(i <= mid && j <= end){

		if(array[i] < array[j])
			temp[k++] = array[i++];
		
		else
			temp[k++] = array[j ++];

	}
	
	while(i <= mid){
		temp[k++] = array[i ++];
	}

	while(j <= end){
		
		temp[k++] = array[j ++];

	}
	
	
	for(int i = start; i <= end ; i ++){
		array[i] = temp[i];
	
	}


}


void merge_sort_helper(std::vector<int> &array, int start, int end){


	if(start == end) return;


	int mid = (start + end) / 2;

	merge_sort_helper(array, start, mid);
	merge_sort_helper(array, mid + 1, end);



	merge(array, start, end);


}


void merge_sort(std::vector<int> &array){

	merge_sort_helper(array, 0, array.size() - 1);

}










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



