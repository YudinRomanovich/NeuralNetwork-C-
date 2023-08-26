#include "InputLayer.h"
#include "OutputLayer.h"
#include <ctime>


int main() {

    srand(time(0)); // ������������� ���������� ��������� �����

    InputLayer inputL; // �������� ������� InputLayer
    inputL.numberOfNeuronInLayer = 5; // ��������� ���������� �������� �� ������� ����
    inputL = inputL.initLayer(inputL); // ������������� �������� ����
    inputL.printLayer(inputL); // ����� ���������� � ������� ����

    OutputLayer outputL; // �������� ������� OutputLayer
    outputL.numberOfNeuronInLayer = 1; // ��������� ���������� �������� � �������� ����
    outputL = outputL.initLayer(outputL); // ������������� ��������� ����
    outputL.printLayer(outputL); // ����� ���������� � �������� ����

    return 0;
}
