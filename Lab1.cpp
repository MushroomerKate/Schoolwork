#include<iostream>
using namespace std;

class Cargo_co {
private:
	double price, mass;
	string name;
public:
	Cargo_co() : price(0), mass(0), name("")
	{ }
	Cargo_co(double pr, double m, string n) : price(pr), mass(m), name(n)
	{ }
	void get_data() {
		cout << "Input company name: ";
		cin >> name;
		cout << "\nInput price per ton: ";
		cin >> price;
		cout << "\nInput total mass transported: ";
		cin >> mass;
	}
	double revenue() {
		double r = price * mass;
		return (r);
	}
};

int main() {
	Cargo_co co1;
	co1.get_data();
	cout << "\nCompany revenue: " << co1.revenue();
}