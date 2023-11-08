#include<iostream>
using namespace std;

class Automobile {
protected:
    string date;
    double price;

public:
    Automobile(string date, double price) {
        this->date = date;
        this->price = price;
    }

    void setData() {
        cout << "Enter date of manufacture: ";
        cin >> date;
        cout << "Enter price: ";
        cin >> price;
    }

    void printData() {
        cout << "Date of manufacture: " << date << endl;
        cout << "Price: " << price << endl;
    }
};

class Lorry : public Automobile {
private:
    int capacity;

public:
    Lorry(string date, double price, int capacity) : Automobile(date, price) {
        this->capacity = capacity;
    }

    void setData() {
        Automobile::setData();
        cout << "Enter capacity: ";
        cin >> capacity;
    }

    void printData() {
        Automobile::printData();
        cout << "Capacity: " << capacity << endl;
    }
};

class Taxi : public Automobile {
private:
    int seats;

public:
    Taxi(string date, double price, int seats) : Automobile(date, price) {
        this->seats = seats;
    }

    void setData() {
        Automobile::setData();
        cout << "Enter number of seats: ";
        cin >> seats;
    }

    void printData() {
        Automobile::printData();
        cout << "Number of seats: " << seats << endl;
    }
};

int main() {
    Lorry l("12/12/2012", 100000, 100);
    Taxi t("12/12/2012", 100000, 4);

    cout << "Lorry data:" << endl;
    l.printData();

    cout << "\nTaxi data:" << endl;
    t.printData();

    return 0;
}
