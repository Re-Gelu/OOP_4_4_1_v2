#include "cl_application.h"
#include "cl_base.h"

cl_application::cl_application(cl_base* head) :cl_base(head) {}

void cl_application::build_tree_obects() {
    string object_name_1, object_name_2;

    cin >> object_name_1;

    set_object_name(object_name_1);

    while (true) {
        cin >> object_name_1 >> object_name_2;

        if (object_name_1 == object_name_2) return;

        cl_base* sub = new cl_base(get_object(object_name_1), object_name_2);
        //sub->set_state(1);
    }
}

int cl_application::exec_app() {
    print_tree();
    return 0;
}
