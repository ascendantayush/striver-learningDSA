#include <bits/stdtr1c++.h>
using namespace std;

int main()
{
    // select minimum and swap them

    int arr[6] = {13, 46, 24, 52, 30, 9};

    for (int i = 0; i <= 4; i++) //from 0 to n-2
    {
        int min = i;
        for (int j = i; j <= 5; j++) //from 0 to n-1
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }

            swap(arr[i], arr[min]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
