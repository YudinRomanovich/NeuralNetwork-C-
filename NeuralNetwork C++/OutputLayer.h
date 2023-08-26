#pragma once
#include <iostream>
#include <vector>


#include "Layer.h"
#include "Neuron.h"


class OutputLayer : public Layer
{
public:
	OutputLayer() {};
	~OutputLayer() {};

	OutputLayer& initLayer(OutputLayer& outputLayer);
	void printLayer(OutputLayer& outputLayer);

private:

};

OutputLayer& OutputLayer::initLayer(OutputLayer& outputLayer) {
	std::vector<double> listOfWeightOutTemp;
	std::vector<Neuron> listOfNeurons;

	for (size_t i = 0; i < outputLayer.numberOfNeuronInLayer; i++){
		Neuron neuron;
		listOfWeightOutTemp.push_back(neuron.initNeuron());

		neuron.listOfWeightOut = listOfWeightOutTemp;
		listOfNeurons.push_back(neuron);

		listOfWeightOutTemp.clear();
	}

	outputLayer.ListOfNeurons = listOfNeurons;
	return outputLayer;
}

void OutputLayer::printLayer(OutputLayer& outputLayer) {
	std::cout << "\n\nOutput Layer\n\n";
	int n = 1;
	for (Neuron& neuron : outputLayer.ListOfNeurons){
		std::cout << "Neuron #" << n << " :\n";
		std::cout << "Input Weights\n";
		std::vector<double> weights = neuron.listOfWeightOut;
		for (double weight : weights) {
			std::cout << weight << '\n';
		}
		n++;
	}
}