#include <string>
#include <iostream>
#include <cmath>


// Employee class definition 
class Employee {
public:

	explicit Employee(std::string firstName, std::string lastName, int monthlySalary) : name{employeeName} {

        void firstName(std::string) const {
            return firstName;
        }

        void lastName(std::string) const {
            return lastName;
        }

        void monthlySalary(int raiseSalary) const {
            monthlySalary = monthlySalary;
            if(monthlySalary < 0) {
                monthlySalary = 0;
                
            }

            elif(raiseSalary) {
                raiseSalary = monthlySalary + (monthlySalary * 0.10);
               // return monthlySalary;
            }
            else {
                return monthlySalary;    
        }
        
        
        std::string setFirstName() {
            const std::string;
        }
        std::string setLastName() {
            const std::string;
        }
        std::string setMonthlySalary() {
            const std::string;
        }
        std::string getFirstName() {
            return firstName;
        }
        std::string getLastName() {
            return lastName;
        }
        std::string getMonthlySalary() {
            return monthlySalary;
        }

    

        private:
            std::string firstName;
            std::string lastName;
            int monthlySalary;
    }
};    











//**********************************************************************************************************

// Fig. 3.8: Account.h
// Account class with name and balance data members, and a 
// constructor and deposit function that each perform validation.
#include <string>
#include <iostream>

//using namespace std;

class Employee {
public:
   // Account constructor with two parameters  
   explicit Employee(std::string employeeName, int monthlySalary) : name{accountName} { // assign accountName to data member name
      // validate that the initialBalance is greater than 0; if not,
      // data member balance keeps its default initial value of 0
      if (initialBalance > 0) { // if the initialBalance is valid
         balance = initialBalance; // assign it to data member balance
      }
   }

   // function that deposits (adds) only a valid amount to the balance
   void deposit(int depositAmount) {
      if (depositAmount > 0) { // if the depositAmount is valid
         balance = balance + depositAmount; // add it to the balance 
      }
   }

	void withdraw(int withdrawAmount) {
      if (balance >= withdrawAmount) { // if the depositAmount is valid
		   balance = balance -= withdrawAmount; // added 
      }
      else 
         std::cout << "Withdraw amount exceeded account balance";
      }  

   // function returns the account balance
   int getBalance() const {
      return balance;
   }


   // function that returns the name
   std::string getName() const {
      return name;
   }
private:
   std::string name; // account name data member 
   int balance{0};	// data member with default initial value

}; // end class Account

