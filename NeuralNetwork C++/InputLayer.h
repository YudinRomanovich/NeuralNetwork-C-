#pragma once
#include <iostream>
#include <vector>


#include "Layer.h"
#include "Neuron.h"


class InputLayer : public Layer
{
public:
	InputLayer() {};
	~InputLayer() {};

	InputLayer& initLayer(InputLayer& InputLayer);
	void printLayer(InputLayer& InputLayer);

private:

};

InputLayer& InputLayer::initLayer(InputLayer& InputLayer) {
	std::vector<double> listOfWeightInTemp;
	std::vector<Neuron> listOfNeurons;

	for (size_t i = 0; i < InputLayer.numberOfNeuronInLayer; i++) {
		Neuron neuron;
		listOfWeightInTemp.push_back(neuron.initNeuron());

		neuron.listOfWeightIn = listOfWeightInTemp;
		listOfNeurons.push_back(neuron);

		listOfWeightInTemp.clear();
	}

	InputLayer.ListOfNeurons = listOfNeurons;
	return InputLayer;
}

void InputLayer::printLayer(InputLayer& InputLayer) {
	std::cout << "\n\nInput Layer\n\n";
	int n = 1;
	for (Neuron& neuron : InputLayer.ListOfNeurons) {
		std::cout << "Neuron #" << n << " :\n";
		std::cout << "Input Weights\n";
		std::vector<double> weights = neuron.listOfWeightIn;
		for (double weight : weights) {
			std::cout << weight << '\n';
		}
		n++;
	}
}