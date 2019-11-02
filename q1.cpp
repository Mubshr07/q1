#include "q1.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

q1::q1(int length)
{
    arraylength = length;
    farray = new float[length];
    for (int i = 0; i < length; ++i) {
        farray[i] = 0;
    }
    MainMenu();
}
q1::~q1()
{
    delete [] farray;
    farray = nullptr;
}


int q1::MainMenu()
{
    int operationNum = 0;
    do{
        system("cls");
        cout<<"\n\t\t Welcome to Q1 Solution\n";
        cout<<" \n\t Your array is created and populated with \'0\'.";
        cout<<"\n\t   Please select the desired operation:\n";
        cout<<"\n\t **************************************************************";
        cout<<"\n\t Press 1 for Storing number in array,";
        cout<<"\n\t Press 2 for Retriving a number from the array,";
        cout<<"\n\t Press 3 for Getting the highest number available in array,";
        cout<<"\n\t Press 4 for Getting the lowest number available in array,";
        cout<<"\n\t Press 5 for Getting the Average value of array";
        cout<<"\n\t Press 9 for exit";
        cout<<"\n\t **************************************************************\n";
        cout<<"\n\t Please enter a number :\t";
        cin>>operationNum;
        if(operationNum == 9)
        {
            //exiting
            return 0;
        }
        WhichOperation(operationNum);

    }while(true);
    return 0;
} // end of MainMenu function

void q1::WhichOperation(int i)
{
    switch (i) {
    case 1:
    {
        Store_Number();
        break;
    }
    case 2:
    {
        Retrive_Number();
        break;
    }
    case 3:
    {
        Get_HighestValue();
        break;
    }
    case 4:
    {
        Get_LowestValue();
        break;
    }
    case 5:
    {
        Get_AverageValue();
        break;
    }
    default:
    {
        cout<<"Q1 Class Switch Operations Statement Default Option is called";
    }
    } // end of Switch statements
} // end of WhichOperation

void q1::Store_Number()
{
    int index = 0;
    float fvalue;
    char goToMainMenu = 'n';
    do{
        system("cls");
        cout<<"\n\t\t\tWelcome to Store Number function";
        cout<<"\n\n\t Your array length is : "<<arraylength;
        cout<<"\n\t Please enter the array index :\t";
        cin>>index;
        cout<<"\n\tEnter Floating Value to store at : "<<index<<" :\t";
        cin>>fvalue;
        if(index > 0 && index <= arraylength)
        {
            Store_it(index, fvalue);
        }else {
            cout<<"\n\n\t Array length is "<<arraylength<<" and you are desired index is : "<<index;
        }
        cout<<"\n\n Do you want to Store an other number?\n\t Press y for Yes or any key for Main Menu :\t";
        cin>>goToMainMenu;
    }while(goToMainMenu == 'y' || goToMainMenu == 'Y');
}

void q1::Store_it(int index, float value)
{
    farray[index-1] = value;
    cout<<" \n\t\t Value : "<<value << " is stored at : "<<index;
}


void q1::Retrive_Number()
{
    char repeat = 'n';
    system("cls");
    cout<<"\n\n\t\t Welcome to Retrive Number Function\n";
    for (int i =0; i<arraylength; i++) {
        cout<<"\n\t Index : "<<i+1<<" has value : "<<farray[i];
    }
    cout<<"\n\n\n\n";
    system("PAUSE");
}

void q1::Get_HighestValue()
{
    float max = farray[0];
    for (int i =0; i<arraylength; i++) {
        if(max < farray[i])
        {
            max = farray[i];
        }
    }

    system("cls");
    cout<<"\n\t\t\t Welcome to Highest Value function";
    cout<<"\n \t*****************************************************";
    cout<<"\n\t\t\t Highest value is : "<<max;
    cout<<"\n \t*****************************************************";
    cout<<"\n\n\n";
    system("PAUSE");
}

void q1::Get_LowestValue()
{
    float min = farray[0];
    for (int i =0; i<arraylength; i++) {
        if(min > farray[i])
        {
            min = farray[i];
        }
    }

    system("cls");
    cout<<"\n\t\t\t Welcome to Lowest Value function";
    cout<<"\n \t*****************************************************";
    cout<<"\n\t\t\t Lowest value is : "<<min;
    cout<<"\n \t*****************************************************";
    cout<<"\n\n\n";
    system("PAUSE");
}
void q1::Get_AverageValue()
{
    float average = 0.0;
    for (int i =0; i<arraylength; i++) {
        average += farray[i];
    }

    average = average / arraylength ;

    system("cls");
    cout<<"\n\t\t\t Welcome to Average Value function";
    cout<<"\n \t*****************************************************";
    cout<<"\n\t\t\t Average value is : "<<average;
    cout<<"\n \t*****************************************************";
    cout<<"\n\n\n";
    system("PAUSE");
}





