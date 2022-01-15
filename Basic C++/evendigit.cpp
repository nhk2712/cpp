#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
    int count=0;

    int n; cin >> n;

    int arr[n];

    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    */
    int n; cin >> n;

    /*
    for (int j=0;j<n;j++)
    {
        for (int k=0;k<7;k++)
        {
            int m=(arr[j])/(10^k);
            if (m<0)
            {
                break;
                if (k%2==0)
                {
                    count++;
                }
            }
            
        }
    }

    cout << count << endl;
    */

    float m=n;
    int numdig;
    float mot=1;
    for (int k=0;k<7;k++)
    {
        m=m/10;
        if (m<mot)
        {
            break;
            
        }
        cout << "m:" << m << endl;
        numdig=k;
    }

    cout << numdig << endl;

    /*
    if (numdig%2==0)
    {
        printf("true");
    }
    
    if (numdig%2==1)
    {
        printf("false");
    }
    */

    return 0;
}