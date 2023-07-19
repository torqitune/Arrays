#include<iostream>
using namespace std;

// void function(int array[], int index, int size, int element){
//     if(index>=size)
//         cout<<"Array already full";
//     else
//         array[index]=element;
// }

int main(){
    // int size;
    // cout<<"Enter size of array : ";         //input size
    // cin>>size;
    // int array[size];
    // cout<<"\n---Enter elements in array----\n";     //array input
    // for(int i=0; i<size; i++){
    //     cin>>array[i];
    // }
    // cout<<"\n---ARRAY IS----\n";    //array print
    // for(int i=0; i<size; i++){
    //     cout<<array[i]<<",";
    // }
    // cout<<"\b \b";


    //Searching an element in array
    // int find;
    // cout<<"\nEnter element to be searched : ";        //input element to be searched
    // cin>>find;
    // for(int i=0; i<size; i++){                      //traversing the array
    //     if(array[i]==find)                          //if condition 
    //         cout<<"\nElement found at "<<i<<" index.\n";
    // }


    //display an intiallized 2D array.
    // int array[3][2]={ {1,2},{3,4} ,{5,6} };
    // for(int i=0; i<3 ; i++){                    //traversing rows
    //     for(int j=0; j<2; j++){                 //treversing colums
    //         cout<<array[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<array[0][1];


    //INSERTION EXAMPLE
    // int array[20]={1,2,3,4,5};
    // int index=5,input;
    // int size=sizeof(array)/sizeof(array[0]);
    // cout<<"Enter element to be inserted : ";
    // cin>>input;

    // cout<<"\n---ARRAY IS----\n";    //array print
    // for(int i=0; i<index; i++){
    //     cout<<array[i]<<",";
    // }
    // cout<<"\b \b";
    // function(array,index,size,input);

    // cout<<"\n---ARRAY IS----\n";    //array print
    // for(int i=0; i<index+1; i++){
    //     cout<<array[i]<<",";
    // }
    // cout<<"\b \b";


  

    return 0;
}
//this code is having space compelixity of O(1) as it is only using constant amount of memory bcoz unlike other arrays here the size is finite and not , 
// while the time complexity is O(n^2) bcoz we are using nested loop, one for row and other for column.
