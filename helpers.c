/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include "helpers.h"

//Returns true if value is in array of n values, else false.
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    //returns false if n is non positive
    while( n <= 0)
    {
        return false;
    }
    
    //searches through array starting in the middle and returns true if value is there.
    if( values[values[] / 2] == value )
    {
        return true;
    }
    //if value is less then begin searching towards the right of the array
    else if (values[values[] / 2] < value )
    {
        //recursive to the search function starting in the middle + 1 (right of the array)
        return( search(value, values[(values[] / 2) + 1], n));
    }
    //if value is more then begin searching towards the left of the array.
    else if (values[values[] / 2] > value )
    {
        //recursive to the search function starting in the middle - 1 (left of the array)
        return( search(value, values [(values[] / 2) - 1], n));
    }
    
    //returns false if the number isn't fucking there
    return false;
    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    return;
}
