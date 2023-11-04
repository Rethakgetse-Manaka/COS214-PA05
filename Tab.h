#ifndef TAB_H
#define TAB_H

#include <string>
#include "TabMemento.h"
#include "CompositeBill.h"

class Bill;

class Tab {
public:
    Tab(int customerID, std::string customerName, Bill* bill);
    ~Tab();

    void restoreMemento( TabMemento* memento);
    TabMemento* getMemento();
   //customer
    int getCustomerID() const;
    std::string getCustomerName() ;
    //bill
    Bill* findBill(int customer) ;
  
private:
    int customerID;
    std::string customerName;
    mutable Bill* bill;
    
};

#endif