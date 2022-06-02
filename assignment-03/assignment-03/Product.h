#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product {
    private:
        string sellerID;
        string name;
        string company;
        int price;
        int supply;
        int stock;
        double rating;
        int sumReview;
        int numReview;

    public:
        Product(string sellerID, string name, string company, int price, int Supply, int stock);

        void purchaseProduct();

        string getSellerID();
        string getName();
        string getCompany();
        int getSupply();
        int getPrice();
        int getStock();
        double getRating();

        int getSumReview();
        int getNumReview();

        void setStock(int stock);
        void setRating(double rating);
        void addSumReview(int review);
        void addNumReview();
};