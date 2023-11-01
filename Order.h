#ifndef Order_H
#define Order_H
#include "FoodItem.h"
#include <vector>
class Waiter;
class Order
{
    private:
        int tableNumber;
        int customerID;
        std::string customerName;
        std::vector<FoodItem*> items;
    public:
        Order(int cID, std::string cName);
        void addStarter(std::string, double val);
        void addItem(std::string item, bool g, bool s, double val,bool well);
        void removeItem(std::string item);
        std::vector<FoodItem*> getFoodItems();
        std::string getCustomerName();
        
        ~Order();
    


};
#endif