#include <iostream>

using namespace std;

int& f() {
    int a = 10;
    return a;
}
#if 0
int main() {
    int &&r = f();

}
#endif
