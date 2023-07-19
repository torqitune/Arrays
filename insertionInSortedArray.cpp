// INSERT AN ELEMENT INTO SORTED ARRAY
//LOGIC: we are comparing the element(to be inserted) with each element of array starting from last element and if the array element is greater then element(to be inserted) then we shift one position right and keeps on doing untill array element becomes less then the element(to be inserted) , so at that position(actually next position) our element has to be inserted
#include<iostream>
using namespace std;

void insert(int array[],int size,int element){
    int i;                                          //this variable is declared globally bcoz it will keep track of the last position where our element has to be insertd, if we had declared inside the for loop(i.e locally) than the variable would not be able to store the last possible index where our element has to be inserted.
    for(i=size-1; i>=0 && array[i]>element ; i--){
        array[i+1]=array[i];                        //shifting one position towards right
    }
    array[i+1]=element;                             //once for loop ends, we get the desired position to insert our element, this is why 'i' was declared gloabally instead on declaring in the for loop.
    
    cout<<"\n---ARRAY AFTER INSERTION----\n";                    //array print
    for(int i=0; i<9; i++){
        cout<<array[i]<<",";
    }
    cout<<"\b \b";
}

int main(){
    int array[20]={1,3,5,7,9,11,13,15};
    int n=8;
    int element=0;                                  //element to be inserted
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"\n---ARRAY IS----\n";                    //array print
    for(int i=0; i<8; i++){
        cout<<array[i]<<",";
    }
    cout<<"\b \b";
    insert( array,n,element);                    //fucntion call
    cout<<" ";
    
    return 0;
}
// Time Complexity: O(N) [In the worst case all elements may have to be moved] 
// Auxiliary Space: O(1)