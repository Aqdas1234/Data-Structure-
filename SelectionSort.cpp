#include <iostream>

using namespace std;

void selectionSort(int arr[],int n)
{
    for (int i=0 ;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[min] >  arr[j]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
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
    int arr[10] = {8,5,0,10,2,1,7,23,34,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted Array :" <<endl;
    display(arr,length);

    selectionSort(arr,length);

    cout << "Sorted Array :" <<endl;
    display(arr,length);


    return 0;

}