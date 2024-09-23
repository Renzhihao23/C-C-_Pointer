//#include<iostream>
//using namespace std;
//
////点和圆关系案例
//class Point
//{
//public:
//	void set_X(int X)  //设置x轴和y轴  获取x轴和y轴
//	{
//		m_X = X;
//	}
//	int get_X()
//	{
//		return m_X;
//	}
//
//	void set_Y(int Y)
//	{
//		m_Y = Y;
//	}
//	int get_Y()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//class Circle
//{
//public:
//	void set_R(int R)
//	{
//		m_R = R;
//	}
//	int get_R()
//	{
//		return m_R;
//	}
//
//
//	//设置圆心和获得圆心
//	void set_Center(Point center)
//	{
//		m_Center = center;
//	}
//	Point get_Center()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;
//
//	Point m_Center;
//    
//
//};
////判断点和圆之间关系的函数
//void is_In_Circle(Circle &c, Point &p)
//{
//	int distance = (c.get_Center().get_X() - p.get_X())* (c.get_Center().get_X() - p.get_X()) +
//		           (c.get_Center().get_Y() - p.get_Y()) * (c.get_Center().get_Y() - p.get_Y());
//
//	int r_Distance = c.get_R() * c.get_R();
//
//	if (distance == r_Distance)
//	{
//		cout << "in circle" << endl;
//
//	}
//	else
//	{
//		cout << "not in circle" << endl;
//	}
//
//}
//int main(void)
//{
//	//创建圆
//	Circle c;
//	c.set_R(10);
//	Point center;
//	center.set_X(10);
//	center.set_Y(0);
//	c.set_Center(center);
//
//
//		//创建点
//	Point p;
//	p.set_X(0);
//	p.set_Y(0);
//
//	is_In_Circle(c, p);
//	return 0;
//}
//
