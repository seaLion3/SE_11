#pragma once
#include <iostream>
#include <vector>

#include "Product.h"
#include "UserAccount.h"

using namespace std;

class ProductList {
private:
    vector<Product*> products;
    string currentlySearchedProduct;

public:

    void enrollProduct(string sellerID, string name, string company, int price, int supply, int stock);

    vector<Product*>* getProducts();

    //// �Ǹ���
    vector<Product*> getSellingProducts(string id);

    //// ������
    Product* getProduct(string name); // ��ǰ �˻�
    void writeReview(UserAccount* user, string name, int rating); // ���� �ۼ�

    vector<Product*> getSoldOutProducts(string id);

    vector<Product*> getSoldProducts(string id);
};

