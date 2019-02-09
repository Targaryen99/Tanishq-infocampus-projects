#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare arrays
    string itemName[100];
    double itemCost[100] = {0.0};

    //declare variables
    string names = "";
    double total = 0;
    int numItems = 0;

    //number of items
    cout << "Enter number of grocery items you will be entering: ";
    cin >> numItems;
    cout << "\n";
    
        for (int i = 1; i <= 100; i++)
        {
        cin >> itemName[i] >> itemCost[i];
        }

        //input message
    cout << "Please enter the item names as one word only. Example: tomatoes\n" ;
    cout << "Enter the cost as a decimal number. Example: 2.44\n\n";

    //item name and price input
    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter item: ";
        cin >> itemName[i];
        cout << "Enter the cost of the " << itemName[i] << " $";
        cin >> itemCost[i];
        }

        cout << "\n";

    //Display Data
      for (int i = 0; i < 3; ++i)
{
    cout << itemName[i];
    cout << ' ';
    cout << itemCost[i];
    cout << endl;
}

//total calculations
for (int i = 1; i <= 3; i++)
{
    total += itemCost[i];
    cout << total;
}


return 0;
}