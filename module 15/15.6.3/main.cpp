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
    int input = 0;
    vector <int> arr;

    while (input != -2)
    {
        cout << "Input: ";
        cin >> input;
        // cout << " ";

        if (input != -1) arr.push_back(input);
        
        if (input == -1)
        {
            if (arr.size() < 5)
            {
                cout << "The program cannot output the contents of 5 elements, there are " << arr.size() << " elements in the array" << endl;
            }
            else
            {
                insertionSort(arr, arr.size());
                cout<<endl;
                cout << "Output: " << arr[4] <<" (In sorted form , the array looks like this: {";
                for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
                cout << "})"<< endl;
            }
        }
    }
    
    return 0;
}