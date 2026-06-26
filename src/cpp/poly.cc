#include <iostream>

using namespace std;

class Foo {
public:
    Foo() {

    }

    virtual void f();

    void g();

private:
    char ch_;
    int val_;
};
#if 0
int main() {
    Foo foo;
    printf("%ld\n", sizeof(foo));
}
#endif 
