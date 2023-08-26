#pragma once
#include <stdlib.h>
#include <vector>

class Neuron
{
public:
	Neuron() {};
	~Neuron() {};


	double initNeuron(){ // ������������� ������� ��������� ������ 0.1 - 1.0
		return ((double)rand()) / RAND_MAX;
	}

	std::vector<double>listOfWeightIn; // ������ �������� ����� ��������
	std::vector<double>listOfWeightOut; // ������ ��������� ����� ��������
	double outputValue;
	double error;
	double sensibility;
};
