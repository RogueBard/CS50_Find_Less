/**
 * helpers.h
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n);
{
    //returns false if (n) is not valid.
    while(n <= 0 && !isalpha(n))
    {
        return false;
    }
    
    
    /**
     * returns true if "value" is in "values" and 
     * "false" if "value" is not in "Values"
    */
    while (value <= 0)
    {
        return false;
    }
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n);
