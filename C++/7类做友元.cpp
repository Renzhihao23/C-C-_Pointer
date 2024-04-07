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
	//firend void GoodGay::visit();
	friend class GoodGay;  //GoodGay类 是本类的好朋友，可以访问本类中的私有成员
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