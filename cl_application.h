#ifndef _CL_APPLICATION_H_
#define _CL_APPLICATION_H_

#include <iostream>
#include <string>
#include <vector>

#include "cl_base.h"

using namespace std;

class cl_application : public cl_base {
public:
    cl_application(cl_base* head = nullptr); // �����������
    void build_tree_obects(); // ����� ���������� ������ ��������
    int exec_app(); // ����� �������
};

#endif