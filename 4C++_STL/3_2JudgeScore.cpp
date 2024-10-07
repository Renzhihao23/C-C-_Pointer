#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <numeric>
#include <time.h>
using namespace std;
class Person
{
    friend void createPerson(vector<Person> &v);
    friend  void judgeScore();
    friend void showPerson(vector<Person> &v);
    friend void playGame(vector<Person> &v);
    private:
    string name;
    float score;
    public:
    Person(){};
    Person(string name, float score)
    {
        this->name = name;
        this->score = score;
    }
};

void createPerson(vector<Person> &v)
{
    string tmpName = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        string name = "player";
        name+=tmpName[i];
        v.push_back(Person(name, 0.0f));
    }
    
}
void showPerson(vector<Person> &v)
{
    vector<Person>::iterator it = v.begin();
    for(; it!=v.end();it++)
    {
        cout << (*it).name << " " << (*it).score << endl;
    }

}
void playGame(vector<Person> &v)
{
    // 每个人逐个比赛
    vector<Person>::iterator it = v.begin();
    for(;it!=v.end();it++)
    {
        // 定义一个deque容器存放10个评委的分数
        deque<float> d;
        int i = 0;
        for(; i < 10; i++)
        {
            d.push_back((float)(rand()%41 + 60));  // 41 -> 0~40
        }

        sort(d.begin(), d.end());
        d.pop_back();
        d.pop_front();
        (*it).score = (float)accumulate(d.begin(), d.end(), 0)/d.size();

    }

}
 void judgeScore()
 {
    // 设置随机数种子
    srand(time(NULL));
    vector<Person> v;
    // 1. 创建五名选手
    createPerson(v);
    // 2. 比赛
    playGame(v);
    // 3. 显示选手成绩
    showPerson(v);
 }

int main()
{
    judgeScore();
    return 0;
}