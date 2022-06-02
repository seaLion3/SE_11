#pragma once
#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

class UserAccount {
private:
    string name;
    string ssn;
    string id;
    string pw;
    Product* searchHistory;
    vector<Product*> purchaseHistory;

public:
    UserAccount(string name, string ssn, string id, string pw);
    string getName();
    string getSsn();
    string getId();
    string getPw();

    void addPurchaseHistory(Product* product);
    vector<Product*> getPurchaseHistory();

    Product* getSearchHistory();
    void setSearchHistory(Product* searchedProduct);
};
