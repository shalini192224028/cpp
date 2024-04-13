#include <iostream>
#include <string>

using namespace std;

// Define base class Employee
class Employee {
protected:
    // Member variables
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long long Mobile_no;

public:
    // Constructor to initialize member variables
    Employee(const string& name, int id, const string& addr, const string& mail, long long mobile)
        : Emp_name(name), Emp_id(id), Address(addr), Mail_id(mail), Mobile_no(mobile) {}

    // Virtual function to generate pay slip (to be overridden in derived classes)
    virtual void generatePaySlip(double basicPay) const {
        double DA = 0.97 * basicPay;
        double HRA = 0.10 * basicPay;
        double PF = 0.12 * basicPay;
        double clubFund = 0.001 * basicPay;
        double grossPay = basicPay + DA + HRA;
        double netPay = grossPay - (PF + clubFund);

        // Output pay slip details
        cout << "======================\n";
        cout << "EMPLOYEE PAYMENT SLIP\n";
        cout << "======================\n";
        cout << "EMPLOYEE NAME: " << Emp_name << "\n";
        cout << "EMPLOYEE ID: " << Emp_id << "\n";
        cout << "ADDRESS: " << Address << "\n";
        cout << "E-MAIL ID: " << Mail_id << "\n";
        cout << "MOBILE NUMBER: " << Mobile_no << "\n";
        cout << "BASIC PAY: " << basicPay << "\n";
        cout << "DEARNESS ALLOWANCE: " << DA << "\n";
        cout << "HOUSE RENT ALLOWANCE: " << HRA << "\n";
        cout << "PROVIDENT FUND: " << PF << "\n";
        cout << "CLUB FUND: " << clubFund << "\n";
        cout << "GROSS PAY: " << grossPay << "\n";
        cout << "NET PAY: " << netPay << "\n";
        cout << "\n";
    }
};

// Define derived class Programmer
class Programmer : public Employee {
public:
    // Constructor to initialize member variables using base class constructor
    Programmer(const string& name, int id, const string& addr, const string& mail, long long mobile)
        : Employee(name, id, addr, mail, mobile) {}

    // Override generatePaySlip function to generate pay slip for Programmer
    void generatePaySlip(double basicPay) const override {
        // Call base class's generatePaySlip function
        Employee::generatePaySlip(basicPay);
    }
};

int main() {
    // Variables to store input data
    string name, address, mail;
    int id;
    long long mobile;
    double basicPay;

    // Input details from the user
    cout << "Enter Name of the Employee: ";
    getline(cin, name);
    cout << "Enter Address of the Employee: ";
    getline(cin, address);
    cout << "Enter ID of the Employee: ";
    cin >> id;
    cout << "Enter Mobile Number: ";
    cin >> mobile;
    cout << "Enter E-Mail ID of the Employee: ";
    cin >> mail;
    cout << "Enter the Basic Pay of the Programmer: ";
    cin >> basicPay;

    // Create a Programmer object
    Programmer programmer(name, id, address, mail, mobile);

    // Generate pay slip
    programmer.generatePaySlip(basicPay);

    return 0;
}
