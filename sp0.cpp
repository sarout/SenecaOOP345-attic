#include <iostream>
#include <string>
using namespace std;

class X {
  string name;
  uint8_t memBlock[1024*1024];  // 1 MByte
public:
  X(const std::string& n) { name = n; cout << "X ctor " << name << "\n"; }
  ~X() { cout << "X dtor " << name << "\n"; }
};

X xgbefore("global xgbefore before main");

int main(int argc, char**argv)
{
  atexit( [] () { cout << "atexit function\n"; } );
}

X xgafter("global xgafter after main");
