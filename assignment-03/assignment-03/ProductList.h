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

    //// 판매자
    vector<Product*> getSellingProducts(string id);

    //// 구매자
    Product* getProduct(string name); // 상품 검색
    void writeReview(UserAccount* user, string name, int rating); // 리뷰 작성

    vector<Product*> getSoldOutProducts(string id);

    vector<Product*> getSoldProducts(string id);
};

