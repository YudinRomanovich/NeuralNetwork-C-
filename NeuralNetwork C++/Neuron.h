#pragma once
#include <stdlib.h>
#include <vector>

class Neuron
{
public:
	Neuron() {};
	~Neuron() {};


	double initNeuron(){ // Инициализация нейрона рандомным числом 0.1 - 1.0
		return ((double)rand()) / RAND_MAX;
	}

	std::vector<double>listOfWeightIn; // Вектор входящих весов нейронов
	std::vector<double>listOfWeightOut; // Вектор выходящий весов нейронов
	double outputValue;
	double error;
	double sensibility;
};
