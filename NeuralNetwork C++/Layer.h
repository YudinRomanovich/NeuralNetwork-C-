#pragma once
#include "Neuron.h"
#include <vector>

class Layer
{
public:
	Layer() {};
	~Layer() {};

	void printLayer() const {
	}

protected:
	std::vector<Neuron> ListOfNeurons;
	size_t numberOfNeuronInLayer;

};

