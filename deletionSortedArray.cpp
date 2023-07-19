//DELETION OF AN ELEMENT IN SORTED ARRAY.
#include <iostream>
using namespace std;
int BinarySearch(int low, int high, int array[], int element, int size)
{
    int mid;
    mid = (low + high) / 2; // declaring middle index of the array.
    if (high < low)
    { // break condition if element is not found
        cout << "\nOOPS! Element is not in the array.";
        return 0;
    }

    if (element > array[mid])
    { // if the element is in 2nd of the array.
        return BinarySearch(mid + 1, high, array, element, size);
    }

    if (element < array[mid])
    { // if the elemnent is 1st half of the array.
        return BinarySearch(low, mid - 1, array, element, size);
    }

    if (element == array[mid])
    { // if element is found at the middle position itself.
        return mid;
    }
    return 0;
}

void del(int array[], int size, int element)                        //delete fucntion
{
    int index;                                                      
    index = BinarySearch(0, size - 1, array, element, size);        //index value from where our element will be deleted, we used binary search to get the index value
    if (index != 0){                                                 //if index=0 then element is not found. So it is like a break condition
        for (int i = index; i < size - 1; i++){                      //starting form index we shift every element one position left 
            array[i] = array[i + 1];
        }
        cout << "\n---ARRAY AFTER DELETION\n";                      // array print
        for (int i = 0; i < size - 1; i++){
            cout << array[i] << ",";
        }
    }

    cout << "\b \b";
}

int main()
{
    int array[] = {4, 6, 7, 8, 9, 10, 14}; // NOTE: for binary search array must be sorted.
    int size = sizeof(array) / sizeof(array[0]);
    int low = 0, high = size - 1, element; // low and high are minm and maxm index value of the array.

    element = 12;                            // elemnent to be deleted
    del(array, size, element);              //function call

    return 0;
}
