#include <iostream>
#include <sstream>
using namespace std;

class Student 
{
private:
    int age,standard;
    string first_name,last_name;

public:
    void set_age(int a)
    {
        age = a;
    }

    void set_first_name(string fname)
    {
        first_name = fname;
    }

    void set_last_name(string lname)
    {
        last_name = lname;
    }

    void set_standard(int std) 
    {
        standard = std;
    }

    int get_age() 
    {
        return age;
    }

    string get_first_name() 
    {
        return first_name;
    }

    string get_last_name()
    {
        return last_name;
    }

    int get_standard() 
    {
        return standard;
    }

    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student s;
    s.set_age(age);
    s.set_standard(standard);
    s.set_first_name(first_name);
    s.set_last_name(last_name);
    
    cout << s.get_age() << "\n";
    cout << s.get_last_name() << ", " << s.get_first_name() << "\n";
    cout << s.get_standard() << "\n";
    cout << "\n";
    cout << s.to_string();
    
    return 0;
}
