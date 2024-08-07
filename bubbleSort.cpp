#include <iostream>

using namespace std;

void bubbleSort(int arr[],int n)
{
     for (int i=0 ;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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
    int arr[10] = {8,5,0,8,2,1,7,2,34,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted Array :" <<endl;
    display(arr,length);

    bubbleSort(arr,length);

    cout << "Sorted Array :" <<endl;
    display(arr,length);

    return 0;
}