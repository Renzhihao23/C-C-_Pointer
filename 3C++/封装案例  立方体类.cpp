//#include<iostream>
//using namespace std;
//
///*
//命名艺术：
//DrivePose_t* pPose;                   //DriverPose_t的_t结尾表示type，说明DriverPose_t是个类型
//				                      //pPose的p开头表示pointer,说明pPose是个指针
//int g_Mode;                           //g_开头表示global，说明g_Mode全局变量
//int m_Socket;                         //m_表示member，成员变量
//const char* k_Settings_RenderWidth;   //k_表示const或constexpr，常量
//bool bSwitch;                         //b表示bool
//
//// 涉及windows编程会碰到很多h，lp，w开头的变量
//HANDLE hTexture;//h表示handle,此变量为一句柄
//*/   
//class cube{
//public:
//	void set_L(int L)
//	{
//		m_L = L;
//	}
//	int get_L()
//	{
//		return m_L;
//	}
//
//	void set_W(int W)
//	{
//		m_W = W;
//	}
//	int get_W()
//	{
//		return m_W;
//	}
//
//	void set_H(int H)
//	{
//		m_H = H;
//	}
//	int get_H()
//	{
//		return m_H;
//	}
//
//	int calculateS()
//	{
//		return 2 * m_H * m_W + 2 * m_H * m_L + 2 * m_L * m_W;
//	}
//	int calculatesV()
//	{
//		return m_H * m_L * m_W;
//	}
//
//	bool is_Same_by_class(cube &c1)
//	{
//		if (m_L == c1.get_L() && m_H == c1.get_H() && m_W == c1.get_W())
//			return true;
//		else
//		{
//			return false;
//		}
//	}
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//
//};
//
//bool is_Same(cube &c1,cube  &c2)
//{
//	if (c1.get_L() == c2.get_L() && c1.get_H() == c2.get_H() && c1.get_W () == c2.get_W())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//
//
//
//int main(void)
//{
//	cube c1,c2;
//	c1.set_H(10);
//	c1.set_W(10);
//	c1.set_L(10);
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculatesV() << endl;
//
//	c2.set_H(10);
//	c2.set_W(10);
//	c2.set_L(10);
//
//	//用全局函数判断
//	    bool ret = is_Same(c1, c2);
//		if (ret)
//		{
//			cout << "c1 and c2 are equal" << endl;
//		}
//		else {
//			cout << "c1 and c2 are not equal" << endl;
//		}
//
//	
//	//用成员函数判断
//		bool ret1 = c1.is_Same_by_class(c2); 
//		if (ret1)
//		{
//			cout << "c1 and c2 are equal" << endl;
//		}
//		else {
//			cout << "c1 and c2 are not equal" << endl;
//		}
//	return 0 ;
//}
//
