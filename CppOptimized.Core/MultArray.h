#include <stdio.h>
extern "C" {
    //call to assembly language procedure
    void AsmMultArray(long multiplier, long arr1[], long count);

    //call to c++ language function
    void CMultArray(long multiplier, long arr1[], long count);

}