#include <iostream>
using namespace std;
class Item {
private:
    int m, n;

public:
    void setData(int m, int n) {
        this->m = m;
        this->n = n;
    }

    void showData() {
        cout << this->m << " " << this->n << endl;
    }
};
class Product {
private:
    int a, b;
public:
    void setData(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void showData() {
        cout << this->a << " " << this->b << endl;
    }

    // Conversion operator from Product to Item
    operator Item() {
        Item temp;
        temp.setData(this->a, this->b);
        return temp;
    }
};
int main() {
    Item i1;
    Product p1;
    p1.setData(6, 7);
    // Using the conversion operator to convert Product to Item
    i1 = p1;
    i1.showData();

    return 0;
}
