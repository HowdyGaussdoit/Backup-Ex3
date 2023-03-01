// Fig. 3.8: Account.h
// Account class with name and balance data members, and a 
// constructor and deposit function that each perform validation.
#include <string>
#include <iostream>

//using namespace std;

class Invoice {
public:
   // Account constructor with two parameters  
   explicit Invoice(std::string partNumber); //  , std::string partDescription, int quantity, int pricePerItem) { // assign accountName to data member name
    
   

   // Data Members initialized with const
    void partNumber(std::string) const { //const to initialize member function in constructor
      setParNumber{0};

    }
/*
	void partDescription(std::string partDescription) const {
      partDescription{0};
      
    }  

    void quantity(int) const {
        quantity{0};
    }

    void pricePerItem(int) const {
        pricePerItem{0};
    }




   // function(s) sets the members
  
  
   std::string setPartNumber() {
      // partNumber;
   }

   std::string setPartDescription() {
      // partDescription;
   } 

   // function that returns the members
   int setQuantity() {
     // return quantity;
   }

   int setPricePerItem() {
     // return pricePerItem;
   } 

*/


   // function(s) returns the members
   std::string getPartNumber() {
      return partNumber;
   }

   std::string getPartDescription() {
      return partDescription;
   } 

   // function that returns the members
   int getQuantity() {
      return quantity;
   }

   int getPricePerItem() {
      return pricePerItem;
   } 

private:
  

}; // end class Account

