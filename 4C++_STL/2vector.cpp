#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void printVectorInt(vector<int> &v)
{
    vector<int>::iterator it = v.begin();
    for (; it != v.end(); it++)
    {
        // *it == int
        cout << *it << " ";
    }
}
void test01()
{
    vector<int> v1;
    // 预先分配合适的空间
    v1.reserve(10);

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40); // 10 20 30 40 
    cout << "头元素" << v1.front() << "尾元素" << v1.back() << endl;

    //尾部删除
    v1.pop_back();  // 10 20 30
    v1.insert(v1.begin() + 2, 3, 500); // 10 20 500 500 500 30 
    v1.erase(v1.begin() + 2, v1.begin() + 5); // 10 20 30
    
    // at越界会抛出异常   []越界不会抛出异常
    cout << v1[1] << " " << v1.at(1) << endl;
    v1.at(1) = 200;
    v1[2] = 300;
    v1.size();
    v1.capacity();
    
}

void test02()
{
    vector<int> v1(5, 100);
    v1.resize(15); //分配15个大小，过大 补0
    v1.resize(15, 2); //分配15个大小，过大 补2
    v1.resize(3); //过小 删除多余部分
    vector<int> v3;
    v3.assign(10, 10);
    vector<int> v2(v1.begin(), v1.end()); // 将v1开头和v1结尾区间的数据拷贝给v2
    v1.swap(v3); // 交换数据
}

void test03()
{
    vector<int> v;
    v.reserve(1000);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40); // 10 20 30 40  容量：1000 大小：4

    // swap收缩vector空间
    vector<int>(v).swap(v); // 容量：4 大小：4

}

void test04()
{
    vector<int> v1(5, 10);
    vector<int> v2(5, 100);
    vector<int> v3(5, 1000);

    // 定义一个vector容器存放v1, v2， v3
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // 遍历
    // 1. 定义一个迭代器
    vector<vector<int>>::iterator it = v.begin();
    // 2. for循环遍历
    for(; it!=v.end();it++)
    {
        //*it == vector<int>  *it不管多么复杂，都是指代尖括号里的内容
        vector<int>::iterator mit = (*it).begin(); //*it代表一个迭代器的内容
        for(; mit!=(*it).end();mit++)
        {
            cout << *mit; // *mit == int 
        }
    cout << endl;
    }
}

void test05()
{
    // 使用STL算法对vector进行排序
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(89);
    v1.push_back(34);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(839); // 10 30 89 34 2 3 839 
    sort(v1.begin(), v1.end()); // 2 3 10 30  34 89 839
}

class Person
{
    friend bool comparePerson(Person bo1, Person bo2);
private:
    string name;
    int num;
    float score;
public:
    Person()
    {
    }
    Person(int num, string name, float score)
    {
         // 成员名与形态名相同，用this作区分
        this->name = name;
        this->num = num;
        this->score = score;
    }
}

bool comparePerson(Person bo1, Person bo2)
{
    return bo1.num < bo2.num;
}

void test06()
{ 
   vector<Person> v1;
   v1.push_back(Person(100, "lucy", 73.4f));
   v1.push_back(Person(102, "luy", 76.4f));
   v1.push_back(Person(101, "lccy", 71.4f));
   v1.push_back(Person(104, "luuy", 73.4f));
   v1.push_back(Person(108, "llly", 74.4f));

    // 对自定义数据类型的vector排序 需要指定排序规则
   sort(v1.begin(), v1.end(), comparePerson);
}

int main()
{

    test02();
    return 0;
}