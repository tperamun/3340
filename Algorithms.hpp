
#ifndef ALGORITHMS_HPP_
#define ALGORITHMS_HPP_

#include <iostream>
#include <vector>
#include <string>


void merge(std::vector<int> & array, int start, int end);

void merge_sort_helper(std::vector<int> &array, int start, int end);

void merge_sort(std::vector<int> &array);

void insertion_sort(std::vector<int> & array);


#endif
