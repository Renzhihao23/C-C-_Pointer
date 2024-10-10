#include <iostream>
#include <map>
#include <string>
using namespace std;
class Person
{
    friend void printfMapAll(map<int, Person> &m);
    private:
    int num;
    string name;
    float score;
    public:
    Person(){};
    Person(int num, string name, float score)
    {
        this->name = name;
        this->num = num;
        this->score = score;
    }
};

void printfMapAll(map<int, Person> &m)
{
    map<int, Person>::const_iterator it = m.begin();
    for(; it!=m.end();it++)
    {
        //*it == pair<int, Persom>
        cout << (*it).first << " " << (*it).second.name << " " << (*it).second.score << endl;
    }
    cout << endl;
}
void test01()
{
    map<int, Person> m;
    m.insert(pair<int, Person>(103, Person(103, "rzh", 88.8f)));
    m.insert(make_pair(101, Person(101, "yyy", 80.8f))); // 推荐插入方式
    m[104] = Person(104, "hyc", 70.9f); // 危险
    printfMapAll(m);
}

void test02()
{
    map<int, string> employees;

    employees[30] = "rzh";
    employees[25] = "yyy";
    employees[35] = "hyc";
    employees.insert(make_pair(40, "zy"));
    for (map<int, string>::iterator it = employees.begin(); it != employees.end(); ++it) {
        cout << (*it).second << " is " << (*it).first << " years old." << endl;
    }

}
int main() 
{
    test01();
    return 0;
}
