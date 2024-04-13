#include <iostream>
#include <string>
using namespace std;

class State {
protected:
    int tp;

public:
    State() {
        tp = 0;
    }

    void inctp() {
        tp++;
    }

    int gettp() {
        return tp;
    }
};

class District : public State {
public:
    string Dname;
    float Distance;
    long int Population;

    void DINPUT() {
        cout << "Enter District name: ";
        cin >> Dname;
        cout << "Enter Distance: ";
        cin >> Distance;
        cout << "Enter Population: ";
        cin >> Population;
    }

    void DOUTPUT() {
        cout << "District Name: " << Dname << endl;
        cout << "Distance: " << Distance << " km" << endl;
        cout << "Population: " << Population << endl;
        cout << "Total TP: " << tp << endl;
    }
};

int main() {
    District district;
    district.DINPUT();
    cout << "\nDistrict Details:" << endl;
    district.DOUTPUT();

    return 0;
}
