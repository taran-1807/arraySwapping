#include <iostream>
using namespace std;

// function for swaping the array
void swapArray(int arr[], int n){
   
    for(int i=0; i<n; i+=2){
        if((i+1)<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

// printing the swapped array

void printArray(int arr[], int n){
    
    for(int i=0; i<n; i++){
        
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    // talking input: size of array
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    
    // intialising array
    int arr[100];
    
    // taking input: elements of the array
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    swapArray(arr, size);
    cout<<"The array after swapping is: "<<endl;
    printArray(arr, size);

    return 0;
}
