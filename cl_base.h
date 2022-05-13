#ifndef _CL_BASE_H_
#define _CL_BASE_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cl_base {
    string object_name = ""; // Имя объекта
    cl_base* head_object; // Главный объект
    vector<cl_base*> sub_objects; // Дочерние объекты
public:
    cl_base(cl_base* head_object, string object_name = "Object_root"); // Конструктор
    ~cl_base(); // Деструктор
    string get_object_name(); // Метод получения имени объекта
    void set_object_name(string object_name); // Метод смены имени объекта
    void set_head_object(cl_base* head_object); // Метод создания главного объекта
    void print_tree(); // Метод вывода дерева объектов
    cl_base* get_head_object(); // Метод получения главного объекта
    cl_base* get_object(string object_name); // Метод получения любого объекта
};

#endif