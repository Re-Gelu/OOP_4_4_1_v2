#ifndef _CL_BASE_H_
#define _CL_BASE_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cl_base {
    string object_name = ""; // ��� �������
    cl_base* head_object; // ������� ������
    vector<cl_base*> sub_objects; // �������� �������
public:
    cl_base(cl_base* head_object, string object_name = "Object_root"); // �����������
    ~cl_base(); // ����������
    string get_object_name(); // ����� ��������� ����� �������
    void set_object_name(string object_name); // ����� ����� ����� �������
    void set_head_object(cl_base* head_object); // ����� �������� �������� �������
    void print_tree(); // ����� ������ ������ ��������
    cl_base* get_head_object(); // ����� ��������� �������� �������
    cl_base* get_object(string object_name); // ����� ��������� ������ �������
};

#endif