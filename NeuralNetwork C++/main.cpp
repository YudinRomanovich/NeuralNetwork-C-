#include "InputLayer.h"
#include "OutputLayer.h"
#include <ctime>


int main() {

    srand(time(0)); // Инициализация генератора случайных чисел

    InputLayer inputL; // Создание объекта InputLayer
    inputL.numberOfNeuronInLayer = 5; // Установка количества нейронов во входном слое
    inputL = inputL.initLayer(inputL); // Инициализация входного слоя
    inputL.printLayer(inputL); // Вывод информации о входном слое

    OutputLayer outputL; // Создание объекта OutputLayer
    outputL.numberOfNeuronInLayer = 1; // Установка количества нейронов в выходном слое
    outputL = outputL.initLayer(outputL); // Инициализация выходного слоя
    outputL.printLayer(outputL); // Вывод информации о выходном слое

    return 0;
}
