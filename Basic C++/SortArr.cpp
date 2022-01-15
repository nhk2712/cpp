#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[n];
    }

    for (int k=0;k<n-1;k++)
    {
        if (arr[k]<arr[k+1])
        {
            printf("true");
            break;
        }
        else
        {
            printf("false");
            break;
        }
    }
    
    return 0;
}