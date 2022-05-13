#include "cl_base.h"

cl_base::cl_base(cl_base* head_object, string object_name) : head_object(head_object), object_name(object_name) {
    if (head_object) head_object->sub_objects.push_back(this);
}

void cl_base::set_object_name(string object_name) {
    this->object_name = object_name;
}

string cl_base::get_object_name() {
    return object_name;
}

void cl_base::set_head_object(cl_base* head_object) {
    this->head_object = head_object;
}

cl_base* cl_base::get_head_object() {
    return head_object;
}

cl_base* cl_base::get_object(string object_name) {
    if (this->object_name == object_name) return this;

    cl_base* val = nullptr;

    if (!sub_objects.empty()) {
        for (int i = 0; i < sub_objects.size(); i++) {
            if (sub_objects[i]->object_name == object_name) val = sub_objects[i];
        }
        if (val == nullptr) {
            for (int i = 0; i < sub_objects.size(); i++) {
                val = sub_objects[i]->get_object(object_name);
            }
        }
    }
    //if (val == nullptr) set_state(-1);
    return val;
}

void cl_base::print_tree() {
    if (!head_object) cout << object_name;

    if (sub_objects.size() > 0) {
        cout << '\n' << object_name;

        for (int i = 0; i < sub_objects.size(); i++)
            cout << ' ' << sub_objects[i]->get_object_name();
        for (int i = 0; i < sub_objects.size(); i++) sub_objects[i]->print_tree();
    }
}

cl_base::~cl_base() {
    delete head_object;
    sub_objects.clear();
}