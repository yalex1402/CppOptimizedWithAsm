
#include <iostream>
#include <time.h>
#include "MultArray.h"

using namespace std;


int main() {
    long arr1[10] = { 15, 21, 35, 23, 65, 60, 12, 32, 76, 100 };
    const int multiplier = 5;
    time_t startTime, endTime;

    time(&startTime);
    CMultArray(multiplier, arr1, 10);
    time(&endTime);

    cout << "The time taken to run C++ function is: " << long(endTime - startTime) << " seconds.";

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
