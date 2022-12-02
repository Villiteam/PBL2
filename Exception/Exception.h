#ifndef PBL2_EXCEPTION_H
#define PBL2_EXCEPTION_H
#include <string>

using namespace std;

class Exception {
protected:
    string className;
    string message;
public:
    Exception(string className, string message);
};

#endif //PBL2_EXCEPTION_H
