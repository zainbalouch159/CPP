#include <iostream>
using namespace std;
void show(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<",";
    }
}
void insertion(int arr[],int size, int capacity, int index, int element) {
    if (size>capacity)
    {
        cout<<"Limit cross"<<endl;
    }
    else{ 
        for(int i = size-1; i >=index-1; i--)
    {
       arr[i+1]=arr[i];
    }
    arr[index-1]=element;
}
    }
void binary_search(int element; int size; int arr)
int main() {
    int arr[100]={23,15,151,1251,12,235};
    int size, index, element, choice;
    while{
        cout<<"\n1: Show array\n"
            <<"2: Array insertion\n"
            <<"0: Exit"<<endl;
    switch (choice)
    {
    case 1:
        show(arr, 6);
        break;
    case 2:
    insertion(arr, 6,100,4,67);
    default:
        break;
    }


    }
    return 0;
}
