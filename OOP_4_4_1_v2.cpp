#include <iostream>
#include <string>
#include <vector>

#include "cl_application.h"

using namespace std;

int main() {
    cl_application ob_cl_application(nullptr);
    ob_cl_application.build_tree_obects();
    return ob_cl_application.exec_app();
}