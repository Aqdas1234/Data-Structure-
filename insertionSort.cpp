#include <iostream>

using namespace std ;

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
       int  key = arr[i];
       
        int j=i-1;
        while(j>=0 && key<arr[j])
       {
            arr[j+1]= arr[j];
            j--;
       }
       arr[j+1]=key;

    }
}

void display(int arr[],int n)
{
     for (int i=0;i<n;i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;
}

int main()
{
    int arr[10] = {8,5,0,10,2,1,7,2,34,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted Array :" <<endl;
    display(arr,length);

    insertionSort(arr,length);

    cout << "Sorted Array :" <<endl;
    display(arr,length);

    return 0;
}