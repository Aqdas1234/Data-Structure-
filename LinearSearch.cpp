#include <iostream>

using namespace std;

bool linearSearch(int arr[],int n,int target )
{
    bool flag = false;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int arr[10] = {8,5,0,8,2,1,7,2,34,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    int target = 7;
   

    if(linearSearch(arr,length,target))
    {
        cout << "Target value found in array" << endl;
    }else
   cout << "Target value not found in array" << endl;



    return 0;
}
