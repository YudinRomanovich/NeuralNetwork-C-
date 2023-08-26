#pragma once
#include <iostream>
#include <vector>


#include "Layer.h"
#include "Neuron.h"


/*
* 
*   Этот код определяет класс OutputLayer, который также используется в нейронной сети. 
*     Метод initLayer инициализирует выходной слой, создавая и инициализируя нейроны в нем. 
*       Метод printLayer выводит информацию о слое, включая информацию о весах каждого нейрона выходного слоя.
* 
*/


class OutputLayer : public Layer
{
public:
    OutputLayer() {}; // Конструктор без параметров
    ~OutputLayer() {}; // Деструктор

    OutputLayer& initLayer(OutputLayer& outputLayer); // Метод инициализации слоя
    void printLayer(OutputLayer& outputLayer); // Метод для вывода информации о слое

private:

};

OutputLayer& OutputLayer::initLayer(OutputLayer& outputLayer) {
    std::vector<double> listOfWeightOutTemp; // Временный вектор для хранения весов выходного нейрона
    std::vector<Neuron> listOfNeurons; // Вектор для хранения всех нейронов слоя

    for (size_t i = 0; i < outputLayer.numberOfNeuronInLayer; i++) { // Цикл по всем нейронам в слое
        Neuron neuron; // Создание нового нейрона
        listOfWeightOutTemp.push_back(neuron.initNeuron()); // Инициализация весов нейрона и добавление их во временный вектор

        neuron.listOfWeightOut = listOfWeightOutTemp; // Присвоение временного вектора весов нейрону
        listOfNeurons.push_back(neuron); // Добавление нейрона в вектор всех нейронов слоя

        listOfWeightOutTemp.clear(); // Очистка временного вектора весов
    }

    outputLayer.ListOfNeurons = listOfNeurons; // Присвоение вектора нейронов слоя
    return outputLayer; // Возврат объекта слоя
}

void OutputLayer::printLayer(OutputLayer& outputLayer) {
    std::cout << "\n\nOutput Layer\n\n"; // Вывод заголовка слоя
    int n = 1; // Счетчик для нумерации нейронов
    for (Neuron& neuron : outputLayer.ListOfNeurons) { // Цикл по всем нейронам в слое
        std::cout << "Neuron #" << n << " :\n"; // Вывод информации о номере нейрона
        std::cout << "Input Weights\n"; // Вывод заголовка для весов
        std::vector<double> weights = neuron.listOfWeightOut; // Получение весов нейрона
        for (double weight : weights) { // Цикл по всем весам нейрона
            std::cout << weight << '\n'; // Вывод каждого веса
        }
        n++; // Увеличение счетчика нейронов
    }
}