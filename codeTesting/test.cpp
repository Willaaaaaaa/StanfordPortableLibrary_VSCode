#include <iostream>
#include "strlib.h"
// The following two header files are just for demonstration.
#include <Qt>
#include <QtCore/qglobal.h>

int main() {
    std::cout << "Hello, testing..." << std::endl;
    std::cout << boolToString(0);  // a func in strlib.h from Stanford Library
}