#include <iostream>
#include <vector>
using namespace std;
// func to find all indices of a given element in an array
vector<int> findAllIndices(const vector<int>& arr, int key) 
{
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) 
    {
        if (arr[i] == key) 
            indices.push_back(i); // store index when key is found
    }
    return indices;
}
int main() 
{
    //test case 1:multiple occurrences
    vector<int> arr1 = {1, 2, 3, 2, 4, 2};
    vector<int> result1 = findAllIndices(arr1, 2);
    cout << "Indices of 2 in the first array: ";
    for (int i = 0; i < result1.size(); i++)
        cout << result1[i] << " ";
    cout << endl;

    //test case 2:key not present
    vector<int> result2 = findAllIndices(arr1, 10);
    cout << "\nIndices of 10 in the array: ";
    for (int i = 0; i < result2.size(); i++)
        cout << result2[i] << " ";
    cout << "\nempty since not found" << endl;

    //test case 3:empty array
    vector<int> e_arr = {};
    vector<int> result3 = findAllIndices(e_arr, 1);
    cout << "\nIndices in empty array: ";
    for (int i = 0; i < result3.size(); i++)
        cout << result3[i] << " ";
    cout << "\nempty since nothing in the array" << endl;
    return 0;
}
