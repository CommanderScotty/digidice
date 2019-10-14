#include "api.hpp"

#include <iostream>
#include <random>
#include <vector>

std::vector<int> roll(int die, int times) {
	std::vector<int> rolls;
	for (unsigned int i = 0; i < times; ++i) {
		rolls.push_back(genInt(die));
	}
	return rolls;
}

int genInt(int max) {
	std::random_device rd;
	std::mt19937 e2(rd());
	std::uniform_int_distribution<int> dist(1, max);
	return dist(e2);
}

void printVector(int die, std::vector<int> vec) {
	std::cout << "Roll a d" << die << ", " << vec.size() << " times" << std::endl;
	std::cout << "Results: ";
	
	for (unsigned int i = 0; i < vec.size(); ++i) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Sum = " << sumVector(vec) << std::endl;
}

int sumVector(std::vector<int> vec) {
	int sum = 0;
	for (unsigned int i = 0; i < vec.size(); ++i) {
		sum += vec[i];
	}
	return sum;
}
