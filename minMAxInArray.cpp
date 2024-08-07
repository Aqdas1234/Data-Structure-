#include <iostream>

using namespace std;

int min(int arr[],int n)
{
    int min = arr[0];
    for (int i=1;i<n ;i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[],int n)
{
    int max = arr[0];
    for (int i=1;i<n ;i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    return max;

}

int main(){

    int arr[6]= {7,3,6,92,1,9};
    int length= sizeof(arr)/sizeof(arr[0]);


    cout <<"Minimum Number in Array  :" <<  min(arr,length) << endl;
    cout << "maximum number in array :" << max(arr,length) << endl;

    return 0;
}