// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

//using namespace std;

int main() 
{
   Account account1{"Jane Green", 50};
   Account account2{"John Blue", -7}; 

   // display initial balance of each object
   std::cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance(); 
   std::cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance(); 

   std::cout << "\n\nEnter deposit amount for account1: "; // prompt
   int depositAmount;
   std::cin >> depositAmount; // obtain user input
   std::cout << "adding " << depositAmount << " to account1 balance";
   account1.deposit(depositAmount); // add to account1's balance

   // display balances
   std::cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance(); 
   std::cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance(); 

   std::cout << "\n\nEnter deposit amount for account2: "; // prompt
   std::cin >> depositAmount; // obtain user input
   std::cout << "adding " << depositAmount << " to account2 balance";
   account2.deposit(depositAmount); // add to account2 balance

   // display balances
   std::cout << "\naccount1: " << account1.getName() << " balance is $" << account1.getBalance(); 
   std::cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << std::endl; 

   //display withdraw amount  
   
   std::cout << "\n\nEnter withdraw amount for account1: "; // prompt
   int withdrawAmount;
   std::cin >> withdrawAmount; // obtain user input
   std::cout << "withdrawing " << withdrawAmount << " to account1 balance";
   account1.withdraw(withdrawAmount); // add to account2 balance
   std::cout << "\naccount1: " << account1.getName() << " balance is $" << account1.getBalance(); //print withdraw amount

   std::cout << "\n\nEnter withdraw amount for account2: "; // prompt
   std::cin >> withdrawAmount; // obtain user input
   std::cout << "withdrawing " << withdrawAmount << " to account2 balance";
   account2.withdraw(withdrawAmount); // add to account2 balance
    std::cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << std::endl; 

} 
