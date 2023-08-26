#pragma once
#include <iostream>
#include <vector>


#include "Layer.h"
#include "Neuron.h"

/*
* 
*    В данном коде представлены определения методов класса InputLayer, 
*         который является производным классом от класса Layer.
* 
*    Этот код определяет класс InputLayer, который используется в нейронной сети. 
*       Метод initLayer инициализирует слой, создавая и инициализируя нейроны в нём. 
*           Метод printLayer выводит информацию о слое, включая информацию о весах каждого нейрона.
*/


class InputLayer : public Layer
{
public:
    InputLayer() {}; // Конструктор без параметров
    ~InputLayer() {}; // Деструктор

    InputLayer& initLayer(InputLayer& InputLayer); // Метод инициализации слоя
    void printLayer(InputLayer& InputLayer); // Метод для вывода информации о слое

private:

};

InputLayer& InputLayer::initLayer(InputLayer& InputLayer) {
    std::vector<double> listOfWeightInTemp; // Временный вектор для хранения весов входного нейрона
    std::vector<Neuron> listOfNeurons; // Вектор для хранения всех нейронов слоя

    for (size_t i = 0; i < InputLayer.numberOfNeuronInLayer; i++) { // Цикл по всем нейронам в слое
        Neuron neuron; // Создание нового нейрона
        listOfWeightInTemp.push_back(neuron.initNeuron()); // Инициализация весов нейрона и добавление их во временный вектор

        neuron.listOfWeightIn = listOfWeightInTemp; // Присвоение временного вектора весов нейрону
        listOfNeurons.push_back(neuron); // Добавление нейрона в вектор всех нейронов слоя

        listOfWeightInTemp.clear(); // Очистка временного вектора весов
    }

    InputLayer.ListOfNeurons = listOfNeurons; // Присвоение вектора нейронов слоя
    return InputLayer; // Возврат объекта слоя
}

void InputLayer::printLayer(InputLayer& InputLayer) {
    std::cout << "\n\nInput Layer\n\n"; // Вывод заголовка слоя
    int n = 1; // Счетчик для нумерации нейронов
    for (Neuron& neuron : InputLayer.ListOfNeurons) { // Цикл по всем нейронам в слое
        std::cout << "Neuron #" << n << " :\n"; // Вывод информации о номере нейрона
        std::cout << "Input Weights\n"; // Вывод заголовка для весов
        std::vector<double> weights = neuron.listOfWeightIn; // Получение весов нейрона
        for (double weight : weights) { // Цикл по всем весам нейрона
            std::cout << weight << '\n'; // Вывод каждого веса
        }
        n++; // Увеличение счетчика нейронов
    }
}