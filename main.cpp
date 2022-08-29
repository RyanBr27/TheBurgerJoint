//
//  main.cpp
//  TheBurgerJoint
//
//  Created by Ryan Breeden on 8/22/22.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <vector>

using namespace std;

void burgers();
void fries();
void drinks();
double orderTotal(double sum);


void dashboard()
{
    string name;
    
    //Welcome dashboard
    cout<<"\t\t\t|-------------------------------------------------------|\n";
    cout<<"\t\t\t|                 Ryan's Burger Joint                   |\n";
    cout<<"\t\t\t|-------------------------------------------------------|\n\n";
    
    cout << "Please enter your name: ";
    getline(cin, name);
    
    cout << "\nHey" << " " << name << ", What would you like to order?" << endl << endl;
}


int main()
{
    int option = 0;
    
    bool go = true;
    while(go)
    {
        dashboard();
        
        //Displays all the available menu options.
        cout<<"\t\t\t|-------------------------------------------------------|\n";
        cout<<"\t\t\t|                      Fast Food Menu                   |\n";
        cout<<"\t\t\t|-------------------------------------------------------|\n\n";
        
        cout << "1) Burgers";
        cout << "\n2) Fries";
        cout << "\n3) Drinks\n\n";
        
        cout << "Please select a menu option: " << endl;
        cin >> option;
        
        switch (option)
        {
            case 1:
                burgers();
                break;
            case 2:
                fries();
                break;
            case 3:
                drinks();
                break;
                
            default:
                break;
        }
    }
    return 0;
}


void burgers()
{
    int selectBurger, qty;
    char choose;
    
    cout << "1. Bourbon Bacon Cheddar Burger.............$8.89" << "\n";
    cout << "2. Avocado Bacon Burger.....................$8.99" << "\n";
    cout << "3. Hamburger................................$5.89" << "\n";
    cout << "4. Cheeseburger.............................$6.29" << "\n";
    cout << "5. Bacon Cheeseburger.......................$6.99" << "\n";
    cout << "6. Bourbon Bacon Cheddar Burger.............$8.89" << "\n";
    cout << "7. DC Smokehouse Burger.....................$7.89" << "\n";
    cout << "8. Shroom Burger............................$8.99" << "\n";
    
    cout << "Please choose the burger option of your choice: " << "\n";
    cin >> selectBurger;
    
    if (selectBurger >= 1 && selectBurger <= 8)
    {
        cout << "\nPlease enter your quantity: ";
        cin >> qty;
        
        switch (selectBurger)
        {
            case 1:
                selectBurger = 8.89 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "Bourbon Bacon Cheddar Burger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 2:
                selectBurger = 8.99 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "Avocado Bacon Burger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 3:
                selectBurger = 5.89 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "Hamburger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 4:
                selectBurger = 6.29 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "Cheeseburger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 5:
                selectBurger = 6.99 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "Bacon Cheeseburger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 6:
                selectBurger = 8.89 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "Bourbon Bacon Cheddar Burger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 7:
                selectBurger = 7.89 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "DC Smokehouse Burger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 8:
                selectBurger = 8.99 * qty;
                cout << "\t\t--------Your Order---------\n";
                cout << qty << "Shroom Burger";
                cout << "\nYour current total is " << selectBurger << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose;
                
                    if (choose == 'Y' || choose == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
                
            default:
                break;
        }
    }
}


void fries()
{
    int selectFries, qty2;
    char choose2;
    
    cout << "1. Fries (Regular)..........................$3.29" << "\n";
    cout << "2. Cheese Fries.............................$4.29" << "\n";
    cout << "3. Bacon Cheese Fries.......................$5.29" << "\n";
   
    cout << "Please choose the fries of your choice: " << "\n";
    cin >> selectFries;
    
    if (selectFries >= 1 && selectFries <= 3)
    {
        cout << "\nPlease enter your quantity: ";
        cin >> qty2;
        
        switch (selectFries)
        {
            case 1:
                selectFries = 3.29 * qty2;
                cout << "\t\t--------Your Order---------\n";
                cout << qty2 << "Fries (Regular)";
                cout << "\nYour current total is " << selectFries << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose2;
                
                    if (choose2 == 'Y' || choose2 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 2:
                selectFries = 4.29 * qty2;
                cout << "\t\t--------Your Order---------\n";
                cout << qty2 << "Cheese Fries";
                cout << "\nYour current total is " << selectFries << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose2;
                
                    if (choose2 == 'Y' || choose2 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 3:
                selectFries = 5.29 * qty2;
                cout << "\t\t--------Your Order---------\n";
                cout << qty2 << "Bacon Cheese Fries";
                cout << "\nYour current total is " << selectFries << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose2;
                
                    if (choose2 == 'Y' || choose2 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
      
            default:
                break;
        }
    }
}


void drinks()
{
    int selectDrinks, qty3;
    char choose3;
    double payment = 0.0;
    
    cout << "1. Water....................................$1.89" << "\n";
    cout << "2. Strawberry Lemonade......................$3.29" << "\n";
    cout << "3. Apple Juice..............................$2.29" << "\n";
    cout << "4. Root Beer................................$3.09" << "\n";
    cout << "5. Chocolate Smoothie.......................$6.49" << "\n";
    
    cout << "Please select a drink of your choice: " << "\n";
    cin >> selectDrinks;
    
    if (selectDrinks >= 1 && selectDrinks <= 5)
    {
        cout << "\nPlease enter your quantity: ";
        cin >> qty3;
        
        switch (selectDrinks)
        {
            case 1:
                payment = 1.89 * qty3;
                cout << "\t\t--------Your Order---------\n";
                cout << qty3 << " " << "Water";
                cout << "\nYour current total is " << payment << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose3;
                
                    if (choose3 == 'Y' || choose3 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 2:
                payment = 3.29 * qty3;
                cout << "\t\t--------Your Order---------\n";
                cout << qty3 << " "<< "Strawberry Lemonade";
                cout << "\nYour current total is " << payment << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose3;
                
                    if (choose3 == 'Y' || choose3 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 3:
                payment = 2.29 * qty3;
                cout << "\t\t--------Your Order---------\n";
                cout << qty3 << " "<< "Apple Juice";
                cout << "\nYour current total is " << payment << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose3;
                
                    if (choose3 == 'Y' || choose3 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 4:
                payment = 3.09 * qty3;
                cout << "\t\t--------Your Order---------\n";
                cout << qty3 << "Root Beer";
                cout << "\nYour current total is " << payment << ".";
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose3;
                
                    if (choose3 == 'Y' || choose3 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
            case 5:
                payment = 6.49 * qty3;
                cout << "\t\t--------Your Order---------\n";
                cout << qty3 << " " << "Chocolate Smoothie";
                
                cout << "\nYour current total is " << orderTotal(payment) << "." << endl;
                
                cout << "Would you like to add to your order: 'Y' or 'N' ";
                cin >> choose3;
                
                    if (choose3 == 'Y' || choose3 == 'y')
                    {
                        main();
                    }
                    else
                    {
                        cout << "\nThank you for ordering with The Burger Joint, your order will be ready for pick in 15 minutes.";
                    }
                break;
        }
    }
}


double orderTotal (double pmt)
{
    double orderTotal = 0;
   
    for(int i = 0; i < 15; i++)
    {
        orderTotal = orderTotal + pmt;
    }
    
    return orderTotal;
}
