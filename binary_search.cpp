//BINARY SEARCH IN AN ARRAY
#include<iostream>
using namespace std;
int BinarySearch(int low,int high, int array[],int element,int size){
    int mid;
    mid=(low+high)/2;                                 //declaring middle index of the array.
    if(high<low){                                     //break condition if element is not found 
        cout<<"\nOOPS! Element is not in the array.";
        return 0;
    }


    if(element>array[mid]){                           //if the element is in 2nd of the array.
        BinarySearch(mid+1,high,array,element,size);
    }

    if(element<array[mid]){                           //if the elemnent is 1st half of the array.
        BinarySearch(low,mid-1,array,element,size);
    }

    if(element==array[mid]){                          //if element is found at the middle position itself.
        cout<<"\nElement found at "<<mid<<" index.";
    }
    

    return 0;
}

int main(){
    int array[]={ 4, 6, 7, 8, 9, 10, 14};             //NOTE: for binary search array must be sorted.
    int size=sizeof(array)/sizeof(array[0]);
    int low=0,high=size-1,element;                //low and high are minm and maxm index value of the array.
    
    element=11;                                       //elemnent to be searched
    BinarySearch(low,high, array,element,size);

    return 0;
}
//Space complexity: O(logn), it could have been O(1), but here we are calling our function recursively so in each recursive call some space is being alloted.
//Time complexity: O(logn) , reason it is not O(N) is that here we are not using the tradition iterative way of searching, so complexity is less
 