//INSERT AT PARTICULAR POSITION/LOCATION
#include<iostream>
using namespace std;

void function(int array[],int size,int element, int position,int index){
    for(int i=index-1; i>=position-1; i--){             //approach: start from last element of the array and decrement till your desired postion of insertion, while doing so shift elements of array by one position towards right side.
        array[i+1]=array[i];                            //shifting one element towards right
    }
    array[position-1]=element;                          //after the above iteration , our desired location will be empty so insert the value

    cout<<"\n---ARRAY AFTER INSERTION----\n";    //array print
    for(int i=0; i<index+1; i++){
        cout<<array[i]<<",";
    }
    cout<<"\b \b";

}

int main(){
    int array[20]={1,2,3,4,5};              //intialize array with a slightly large array size
    int index=5;                            //index to keep track/reference of last element
    int size=sizeof(array)/sizeof(array[0]);

    cout<<"\n---ARRAY IS----\n";    //array print
    for(int i=0; i<index; i++){
        cout<<array[i]<<",";
    }
    cout<<"\b \b";

    int position , element;                  //inputs
    cout<<"\nEnter element to be inserted : ";      
    cin>>element;
    cout<<"\nEnter position : ";
    cin>>position;

    function(array,size,element,position,index);

    return 0;

}