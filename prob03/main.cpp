// Name:
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main()
{
  double mealcost, tax, tip, total;


  // Little Welcome screen and asks for bill
    std::cout << " Hello! Welcome to THE Restaurant Bill Calculator";
    std::cout << " How much was your bill total?";
    std::cin >> mealcost;

  //Calculates bill and tax
  tax = mealcost * 0.0775;
  std::cout << " The taxed bill is " << tax << " dollars\n";

  //Calculate the tip
  tip = mealcost * 0.20;
  std::cout << " The tip is " << tip << " dollars\n";

//Finds the total
  total = mealcost + tax + tip;
  std::cout << "The total is " << total << " dollars\n";
return 0;
}
