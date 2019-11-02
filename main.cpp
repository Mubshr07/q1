#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<limits>
#include <q1.h>
using namespace std;

int main()
{
    int arrayLength = 0;
    char repeatAnswer = 'n';

    do{
        cout <<"\t\tWelcome to Q1 Solution" << endl;
        cout<<"\n\t Please enter the length of floating point array : \t";

        //cin>>arrayLength;
        int x = 0;

        while(!(cin >> x)){
                cin.clear();
                //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (cin.get() != '\n'){    continue; }

                cout << "\n\tInvalid input.  Try again: ";
            }

        arrayLength = (int) x;

        if(arrayLength>1)
        {
            //creating class object
            cout<<" Yes Array length is greater then 1";
            q1 *q1_object = new q1(arrayLength);
        }
        else {
            system("cls");
            cout<<" \nThis program is not designed to create the array for only one floatin point, please be human-being";
        }

        cout<<"\n\n Do you want to Re-allocate the array again:??\n\t Press y for Yes or any key for program termination :\t";
        cin>>repeatAnswer;
        if(repeatAnswer == 'y')
        {
            system("cls");
        }
    }while(repeatAnswer == 'y' || repeatAnswer == 'Y');




    return 0;
}
