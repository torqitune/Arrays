//DELETION OPERATION IN AN ARRAY
#include<iostream>
using namespace std;
int del(int array[],int size,int element){
    int index;
    int count=0;
    for(int i=0; i<size; i++){                      //loop for linear search of the element, here we will use index value of the element to be deleted
        if(array[i]==element){   
            index=i;                                //storing index of the element in index.
            count++;
        }
    }

    if(count==0){
        cout<<"\nOOPS! Element not found.";
        return 0;
        
    }

    for(int j=index; j<=size-1; j++){               //loop for shifting each element to left starting from index value
        array[j]=array[j+1];
    }

    cout<<"\n---ARRAY AFTER DELETION----\n";        //array print
    for(int i=0; i<size-1; i++){
        cout<<array[i]<<",";
    }
    cout<<"\b \b";
    return 0;
}


int main(){
    int array[]={2,43,65,1,8,4,23};
    int size=sizeof(array)/sizeof(array[0]);        //size of array, NOTE: here we didnt declared the array size unlike before, bcoz in deletion opertion we won't be needing extra space , indtead size is reducing so we can use actual size of array.
    int element, index;                             //inputs
    cout<<"\n---ARRAY IS----\n";                    //array print
    for(int i=0; i<size; i++){
        cout<<array[i]<<",";
    }
    cout<<"\b \b";
    
    cout<<"\nEnter element to be deleted : ";       //element to delete
    cin>>element;

    del(array,size,element);                        //function call


    return 0;
}

//time compexity : O(N)
//space compexity : O(1)
