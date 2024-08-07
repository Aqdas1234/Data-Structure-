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

bool binarySearch(int arr[],int s,int e,int target)
{
    if (s>e){
        return false ;
        }
    else {
        int m = int((s+e)/2);
    if (arr[m]==target)
        return true;
    else if (target > arr[m])
       return  binarySearch(arr,m+1,e,target);
    else if (target<arr[m])
        return binarySearch(arr,s,m-1,target);
    }
    return false;
}

int main()
{
    int arr[10] = {8,5,0,10,2,1,7,2,34,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    //binary search is applied on sorted array 
    //so first we sorted array using insertion sort

    insertionSort(arr,length);

    //display(arr,length);

    int target = 7;
   
    if(binarySearch(arr,0,length-1,target))
    {
        cout << "Target value found in Array" <<endl;
    }else
    cout << "Target value  not found in Array" <<endl;



    return 0;

}