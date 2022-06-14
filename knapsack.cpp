#include <iostream>
using namespace std;

void knapsack_calculation(int maximum_weight_of_knapsack, int total_number_of_items, int weights[], int values[])
{

    cout << "    ";

    for (int m = 0; m <= maximum_weight_of_knapsack; m++)
    {
        cout << m << " ";
    }
    cout << endl
         << "___________________________________________________________" << endl;

    int knapsack_table[total_number_of_items + 1][maximum_weight_of_knapsack + 1];

    for (int i = 0; i <= total_number_of_items; i++)
    {

        cout << i << "  |";
        for (int w = 0; w <= maximum_weight_of_knapsack; w++)
        {
            if (i == 0 || w == 0)
            {
                knapsack_table[i][w] = 0;
                cout << knapsack_table[i][w] << " ";
            }
            else if (weights[i] <= w)
            {
                knapsack_table[i][w] = max(values[i] + knapsack_table[i - 1][w - weights[i]], knapsack_table[i - 1][w]);
                cout << knapsack_table[i][w] << " ";
            }
            else
            {
                knapsack_table[i][w] = knapsack_table[i - 1][w];
                cout << knapsack_table[i][w] << " ";
            }
        }
        cout << endl;
    }
    cout<< endl;
    cout << "Maximum value of the knapsack is " << knapsack_table[total_number_of_items][maximum_weight_of_knapsack] << endl;
}

int main()
{

    int total_number_of_items, maximum_weight_of_knapsack;
    cout << "Enter the maximum weight of the knapsack:";
    cin >> maximum_weight_of_knapsack;
    cout << "Enter the total number of items in the knapsack:";
    cin >> total_number_of_items;

    int weights[total_number_of_items + 1], values[total_number_of_items + 1];

    for (int i = 0; i <= total_number_of_items; i++)
    {
        cout << "Enter the weight and value of item " << i << ":";
        cin >> weights[i];
        cin >> values[i];
    }

    cout << endl;
    cout << " --------------0/1 KNAPSACK TABLE------------------" << endl;
    cout<< endl;
    knapsack_calculation(maximum_weight_of_knapsack, total_number_of_items, weights, values);

    return 0;
}