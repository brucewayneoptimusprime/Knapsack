/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Item
{
 int weight;
 int value;
 double ratio;
};

bool compare(Item a,Item b)
{
    return a.ratio>b.ratio;
}

double FractionalKnapsack(int capacity,vector<Item>& items )
{
    sort(items.begin(),items.end(),compare);

    double total_value = 0.0;

    for(size_t i = 0;i<=items.size();++i)
    {
        if(capacity>=items[i].weight)
        {
            capacity = capacity-(items[i].weight);
            total_value = total_value + (items[i].value);
        }

        else
        {
         total_value = total_value + ((items[i].ratio)*capacity);
         break;
        }
    }

    return total_value;
}

int main()
{
    int n, capacity;
    cout << "Enter the number of items:";
    cin >> n;

    cout << "Enter the capacity:";
    cin >> capacity;

    vector<Item>items(n);

    cout << "Enter the weight and value of the items" << endl;

    for(int i =0;i<n;++i)
    {
        cout << "Enter the weight of Item " << i+1 << ":";
        cin >> items[i].weight;
        cout << "Enter the value of Item " << i+1 << ":";
        cin>>items[i].value;

        items[i].ratio = static_cast<double>(items[i].value)/items[i].weight;
    }

    double maxvalue = FractionalKnapsack(capacity, items);
    cout << "The maximum value of the Knapsack System is:" << maxvalue << endl;
    return 0;
}

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


struct Item
{
    double value;
    double weight;
    double ratio;
};

bool compare(Item A, Item B)
{
    return A.ratio>B.ratio;
}


double Fractional_Knapsack(vector<Item>& items, double capacity)
{
    sort(items.begin(),items.end(),compare);

    double Total_value = 0.0;

    for(size_t i = 0; i<items.size();++i)
    {
        if(capacity>=items[i].weight)
        {
            capacity = capacity - items[i].weight;
            Total_value = Total_value + items[i].value;
        }

        else{
            Total_value = Total_value + ((items[i].ratio)*capacity);
        }
    }

    return Total_value;
}

int main()
{
    double n, capacity;
    cout << "Enter the number of elements:";
    cin >> n;

    cout << "Enter the Capacity of Knapsack:";
    cin >> capacity;

    vector<Item> items(n);

    cout << "Enter the weight and value of elements:" << endl;

    for(int i=0;i<n;i++)
    {
        cout << "Enter the weight of element " << i+1 << ":";
        cin >> items[i].weight;

        cout << "Enter the value of element " << i+1 << ":";
        cin >> items[i].value;

        items[i].ratio = static_cast<double>(items[i].value)/items[i].weight;

    }

    double answer = Fractional_Knapsack(items,capacity);

    cout << "The value of the max knapsack is:" << answer ;

    return 0;


}





























