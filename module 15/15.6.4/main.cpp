#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& vector, int listLength)
{
	for(int i = 1; i < listLength; i++)
	{
		int j = i - 1;
		while(j >= 0 && vector[j] > vector[j + 1])
		{
			swap(vector[j], vector[j + 1]);
			j--;
		}
	}
}

int main()
{
    vector <int> arr = {-100,-50, -5, 1, 10, 15};
    vector <int> temp_arr;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            arr[i] *= -1;
            temp_arr.push_back(arr[i]);
        }
    }

    insertionSort(arr, arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < temp_arr.size(); j++)
        {
            if (arr[i] == temp_arr[j])
            {
                arr[i] *= -1;
            }   
        }
    }
    cout<<endl;
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
        cout<<endl;
    }
    
    cout<<endl;

    return 0;
}