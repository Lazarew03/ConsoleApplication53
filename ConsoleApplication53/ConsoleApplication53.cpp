
#include <iostream>
#include <string>
using namespace std;

struct students
{
    string name;
    string NumberGroup;
    string Address;
    int mark;
};

int main()
{
    setlocale(LC_ALL, "rus");
    students  s1;
    s1.name = "Ночевный Максим Юрьевич";
    s1.NumberGroup = "21Д";
    s1.Address = "Библиотечная 5А";
    s1.mark = 7;
    if (s1.mark > 8.5) {
        cout << "ФИО: " << s1.name <<  "\tНомер группы: " << s1.NumberGroup << "\tАдрес: " << s1.Address << "\tБалл: " << s1.mark << endl;
    }
    else {
        
        cout << "" << endl;
         }

      
    return 0;
}