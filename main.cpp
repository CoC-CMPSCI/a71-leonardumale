#include <iostream>
#include <random>
#include <iomanip>
#include "main.hpp"

using namespace std;

int makearray(int number[])
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> sizeRand(10, 20);
    uniform_int_distribution<> valueRand(0, 99);

    int count = sizeRand(gen);

    for(int i = 0; i < count; i++)
    {
        number[i] = valueRand(gen);
    }

    return count;
}

void bubble(int number[], int last)
{
    for(int i = 0; i < last; i++)
    {
        if(number[i] > number[i + 1])
        {
            int temp = number[i];
            number[i] = number[i + 1];
            number[i + 1] = temp;
        }
    }
}

void printout(int number[], int last)
{
    for(int i = 0; i <= last; i++)
    {
        cout << number[i] << "\t";
    }

    cout << endl;
}
