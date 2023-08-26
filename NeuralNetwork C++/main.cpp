#include "InputLayer.h"
#include "OutputLayer.h"
#include <ctime>


int main() {
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		InputLayer inputL;
		inputL.numberOfNeuronInLayer = 5;
		inputL = inputL.initLayer(inputL);
		inputL.printLayer(inputL);

		OutputLayer outputL;
		outputL.numberOfNeuronInLayer = 1;
		outputL = outputL.initLayer(outputL);
		outputL.printLayer(outputL);
	}

	getchar();


	return 0;
}