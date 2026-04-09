#include<bits/stdc++.h>
using namespace std;

class AddToCart{
private:
    //why we use private constructor:
    //When we need to create fewer numbers(1/2/3..) of object of a class.
    //ex: Online shopping, we can create a cart object to count and show the product cart for different customer.
    //We can't create the object from outside of this class
    //By creating an object within this class,
    //we can use it to do similar task for different user
    AddToCart() {

    }
public:
    static AddToCart* createCart() {
        //object creation e static use na korlao hobe,but function k static dite hobe must,
        //otherwise we cann't access this function using classname from outside the class
        static AddToCart* cart = new AddToCart();
        return cart;
    }
    void updateProduct(string id) {
        //datage chage the number of product that user select to buy
        cout << "Update Successful" << endl;
    }
    void showCart(string id) {
        //data comes from database then show it
        cout << "This is the cart product for use: " << id << endl; 
    }
};

int main() {
    //To call a method by using class name, the method must be written as static
    AddToCart::createCart()->updateProduct("123");//for an user1
    AddToCart::createCart()->updateProduct("234");//for an user2

    AddToCart::createCart()->showCart("123");//show the cart for user1
    AddToCart::createCart()->showCart("234");//show the cart for user2

    return 0;
}