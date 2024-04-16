#include<iostream>
using namespace std;

class Building;
class GoodGay
{
public:

	void visit();

	Building* building;

};

class Building
{	
	//firend void GoodGay::visit();		  局部函数做友元
	//firend void GoodGay::visit();       全局函数做友元                             
	friend class GoodGay;  //GoodGay类    类做友元
public:

	string m_Sitting_Room;

private:

	string m_Bed_Room;
};

//类外写Buiding和GoodGay的成员函数
Building::Building()
{
	m_Sitting_Room = "客厅";
	m_Bed_Room = "卧室";
}

GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
	
}

void GoodGay::visit()
{
	cout << "好基友类真正访问：" << building->m_Sitting_Room << endl;
	cout << "好基友类真正访问：" << building->m_Bed_Room << endl;
}


int main(void)
{

	return 0;
}