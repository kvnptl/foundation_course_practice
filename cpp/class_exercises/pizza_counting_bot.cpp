#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> inpVec)
{
    for (int i = 0; i < inpVec.size(); i++)
    {
        cout << inpVec[i] << " ";
    }
    cout << endl;
}

// A function to implement bubble sort
void bubbleSort(vector<int> &inpVec)
{
    int temp;

    for (int i = 0; i < inpVec.size(); i++)
    {
        for (int j = i + 1; j < inpVec.size(); j++)
        {
            if (inpVec[j] < inpVec[i])
            {
                temp = inpVec[i];
                inpVec[i] = inpVec[j];
                inpVec[j] = temp;
            }
        }
    }
}

int main()
{

    int total_people{5};
    vector<int> user_ary{};
    vector<int> max_slices{};
    int slices{0};
    int max_index{0};
    int max{0};
    int min_index{0};
    int min{0};

    for (int i = 0; i < total_people; i++)
    {
        cout << "Enter number of slices you ate: ";
        cin >> slices;
        user_ary.push_back(slices);
        max_slices.push_back(i);
        if (i == 0)
        {
            max = user_ary[0];
            min = user_ary[0];
        }

        //ate max slices
        if (max < slices)
        {
            max = slices;
            max_index = i;
        }

        //ate least slices
        if (min > slices)
        {
            min = slices;
            min_index = i;
        }
    }

    // cout << "Before sorting..." << endl;
    // printVector(user_ary);
    // printVector(max_slices);

    bubbleSort(user_ary);
    std::reverse(user_ary.begin(), user_ary.end());
    bubbleSort(max_slices);
    std::reverse(max_slices.begin(), max_slices.end());

    cout << "Person with slices (descending order)..." << endl;
    printVector(max_slices);
    printVector(user_ary);

    cout << "Most number of Pizza slices eaten by: " << max_index << endl;
    cout << "Least number of Pizza slices eaten by: " << min_index << endl;
}