// include necessary libraries
#include <iostream>
using namespace std;

// start main function
int main(int argc, char **argv)
{
    // output progrma intro
    cout << endl;
    cout << "***************************************** Salary Calculator ********************************************" << endl
         << endl;

    int monthsCount;
    cout << "Please enter the amount of months you have been saving for: ";
    cin >> monthsCount;
    // create an array with sixth months worth of savings, create a for loop for asking for the amount saved each month
    double *monthsArray = new double[monthsCount];
    double total = 0.0;
    int i;
    for (i = 0; i < monthsCount; i++)
    {
        cout << "Enter the amount of savings you did the " << i + 1 << " month $";
        cin >> monthsArray[i];

        total += monthsArray[i];
    }

    double average = total / i;
    cout << endl;
    cout << "Your total savings are $" << total << endl;
    cout << "You have been saving an average of $" << average << " a month" << endl;
    if (monthsCount < 6)
    {
        double tilYearEnd = average * 6;
        cout << "If you will keep this rate of savings up, you will get $" << tilYearEnd << " till the end of this year" << endl;
    }
    else if (monthsCount > 6 && monthsCount < 12)
    {
        double inYear = average * 12;
        cout << "If you will keep this rate of savings up, you will get $" << inYear << " in a year" << endl;
    }
    else if (monthsCount > 12 && monthsCount < 24)
    {
        double inTwoYears = average * 24;
        cout << "If you will keep this rate of savings up, you will get $" << inTwoYears << " in two years" << endl;
    }
    else
    {
        double inFiveYears = average * 60;
        cout << "If you will keep this rate of savings up, you will get $" << inFiveYears << " in five years" << endl;
    }

    // output program outro
    cout << endl;
    cout << "********************************************************************************************************" << endl;

    // end main function
    delete[] monthsArray;
    monthsArray = NULL;
    system("pause");
    return 0;
}