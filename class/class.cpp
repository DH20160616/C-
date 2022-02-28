/*****************************************************************************
|-----------------------------------------------------------------------------
| 描      述
|-----------------------------------------------------------------------------
| $项 目 名 称: C-Exercise
| $链      	接: git@github.com:DH20160616/C-Exercise.git $
| $描 			述: 这是一个C++练习的项目
|
|	$$文 件 名 称: calss.c
| $$目       标: 了解C++ 类成员函数的基本用法
| $$描 			 述: 以求解一个盒子(Box)的体积(Volume)为例理解类(class)以及范围解析运
								 算符(::)
|
|      Name						       State                  Date
|      ----------------      --------------------   --------------------------
|      JD.Liu                InWork            			2022/2/28
|-----------------------------------------------------------------------------
*****************************************************************************/

//头文件定义
#include <iostream>
//使用std命名空间
using namespace std;
// 关键字 : class 类
class boxs
{
	//访问修饰符:private/public/protected
	public:

		double length;
		double breadth;
		double height;
#if 0
		//成员函数可以定义在类定义内部
		double GetVolume(void)
		{
			return length*breadth*height;
		}
#endif
		double GetVolume(void);
		void set(double len, double bre,double hei);
};
//成员函数在外部定义使用范围解析运算符(::)
double boxs::GetVolume(void)
{
	return length*breadth*height;
}

void boxs::set(double len, double bre,double hei )
{
	length = len;
	breadth = bre;
	height = hei;
}

int main()
{
	boxs box1;
	boxs box2;
	double volume = 0.0;
	
	box1.length = 5.0;
	box1.breadth = 6.0;
	box1.height = 7.0;
	volume = box1.length * box1.breadth*box1.height;
	cout<<"the volume of box1:"<<volume<<endl;
	
	//调用成员函数使用(.)
	box2.set(5.0,12.0,7.0);
	volume = box2.GetVolume();
	//<< 运算符用于向屏幕传多个值
	cout<<"the volume of box2:"<<volume<<endl;

}