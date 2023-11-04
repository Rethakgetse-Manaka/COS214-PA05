#ifndef CUSTOMER_H
#define CUSTOMER_H

class TableVisitor;
#include "CustomerState.h"
#include "Order.h"
#include "OrderHandler.h"
#include "RestaurantOrderMediator.h"
#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include "Bill.h"
#include "Neutral.h"
#include "ComplaintsManager.h"
#include "Item.h"
#include "AccountingSystem.h"
#include "Transaction.h"
#include "AdminManager.h"
#include "Waiter.h"



class Customer
{
private:
    int customerID;
    int valletID;
    int tableID;
    std::string customerName;
    CustomerState *state;
    Order *order;
    int tabID;
    double tip;
    Table* table;
public:
    Customer();
    Customer(int id, std::string name);
    ~Customer();
    void setTable(Table* t);
    Table* getTable();
    int getCustomerID();
    std::string getCustomerName();
    int getTableID();
    CustomerState *getState();
    Order* getOrder();
    int getTabID();
    double getTip();
    void setTableID(int id);
    void setValletID(int id);
    OrderHandler *requestWaiter();
    void setState(CustomerState *s);
    void payBill(Bill* bill, AccountingSystem* aS);
    void placeOrder();
    Order* menu();
    void complain();
    void resolveComplaint();
    void resolveService();
    void increaseTip();
    void decreaseTip();
    void respondWithSatifaction();
    void respondWithDissatifaction();
    void eat();
    void leave();
    void accept(TableVisitor *v);
};

#endif