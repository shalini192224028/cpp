#include <iostream>
using namespace std;

class A {
public:
    void func(int x) {
        cout << "A's func: " << x * 2 << endl;
    }
};

class B {
public:
    void func(int x) {
        cout << "B's func: " << x * 3 << endl;
    }
};

class C {
public:
    void func(int x) {
        cout << "C's func: " << x * 5 << endl;
    }
};

class D : public A, public B, public C {
public:
    // Override func to call the desired version from one of the parent classes
    void func(int x) {
        // For example, call func from class A
        A::func(x);
        B::func(x);
        C::func(x);
		
    }
};

int main() {
    D obj;
    obj.func(10); // This will call func from class A and print "A's func: 20"
    return 0;
}
