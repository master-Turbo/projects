#include<iostream>

using namespace std;
void reverse (int* arr, int len)
{
    int temp = 0;

    for (int i = 0; i < len/2; ++i)
    {
            temp = *(arr + i);
            *(arr + i) = *(arr + len - i - 1);
            *(arr + len - i - 1) = temp;
    }
}


int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
    int lenght = (sizeof(arr)/sizeof(*arr));
    reverse(arr, lenght);

    for (int i = 0; i < lenght; ++i)
    {
        cout << *(arr + i) << " ";
    }
    
    return 0;
}
