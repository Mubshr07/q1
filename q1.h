#ifndef Q1_H
#define Q1_H
#include<iostream>

class q1
{
private:
    float *farray = nullptr;
    int arraylength = 0;
public:
    q1(int length);
    ~q1();

    int MainMenu();
    // member functions
    void Store_Number();
    void Retrive_Number();
    void Get_HighestValue();
    void Get_LowestValue();
    void Get_AverageValue();


    // function supporting functions
    void WhichOperation(int i);
    void Store_it(int index, float value);



};

#endif // Q1_H
