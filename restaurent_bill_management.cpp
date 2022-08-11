#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
};

int main()
{
    Restaurant *my_restaurant = new Restaurant;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> my_restaurant->food_item_codes[i];
        cin.ignore(); // adding out of course content
        getline(cin, my_restaurant->food_item_names[i]);
        cin >> my_restaurant->food_item_prices[i];
    }

    cout << "\t\t\t\t MAKE BILL" << endl;
    cout << "\t\t\t__________________________" << endl;

    cout << "Item Code \t\t";
    cout << "Item Name \t\t\t";
    cout << "Item Price";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << my_restaurant->food_item_codes[i] << "\t\t\t";
        cout << my_restaurant->food_item_names[i] << "\t\t";
        cout << my_restaurant->food_item_prices[i];
        cout << endl;
    }
    cout << endl;
    cout << endl;

    cout << "Enter Table No : ";
    int table_no;
    cin >> table_no;
    cout << "Enter Number of Items : ";
    int items;
    cin >> items;
    for (int i = 1; i <= items; i++)
    {
        cout << "Enter Item " << i << " Code : ";
        int code;
        cin >> code;
        cout << "Enter Item " << i << " Quantity : ";
        int quantity;
        cin >> quantity;
    }

    return 0;
}
// 11
// 170
// Chicken Soup 1:2
// 260
// 171
// Chicken Corn Soup 1:2
// 200
// 172
// Thai Special Soup 1:2
// 300
// 260
// Chicken Fried Rice 1:2
// 250
// 261
// Egg Fried Rice 1:2
// 230
// 262
// Prawn Fried Rice 1:2
// 300
// 310
// Beef Mutton Kabab 1:1
// 150
// 311
// Chicken Grill 1:4
// 340
// 450
// Chicken Curry 1:3
// 550
// 451
// Beef Special Curry 1:3
// 760
// 452
// Chicken Sizzling 1:3
// 710
