
#include <iostream>
#include <time.h>
#include "MultArray.h"

using namespace std;


int main() {
    long arr1[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const int multiplier = 7;
    time_t startTime, endTime;

    //Testing the C++ function

    time(&startTime);
    CMultArray(multiplier, arr1, 10);
    time(&endTime);

    cout << "The time taken to run C++ function is: " << long(endTime - startTime) << " seconds.";

    //Testing the assembly language procedure
    time(&startTime);
    AsmMultArray(multiplier, arr1, 10);
    time(&endTime);

    cout << "The time taken to run Assembly language procedure is: " << long(endTime - startTime) << " seconds.";

    return 0;
}

void CMultArray(long multiplier, long arr1[], long count)
{
    for (int i = 0; i < count; i++)
    {
        arr1[i] = arr1[i] * multiplier;
    }
}
