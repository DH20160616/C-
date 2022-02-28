/*****************************************************************************
|-----------------------------------------------------------------------------
| 描      述
|-----------------------------------------------------------------------------
| $项 目 名 称: C-Exercise
| $链      	接: git@github.com:DH20160616/C-Exercise.git $
| $描 			述: 这是一个C++练习的项目
|
|	$$文 件 名 称: private.c
| $$目       标: 了解C++ 类访问修饰符的基本用法
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

#define   PUBLIC      1//公有成员
#define   PROTECTED   2//受保护的成员
#define   PRIVATE     3//私有成员

//通过设置Type的值查看三种成员修饰符的用法
#define Type PRIVATE


#if (Type == PUBLIC)
class Boxs
{
  //公有成员在程序中类的外部是可访问的。可以不使用任何成员函数来设置和获取公有变量的值
  public:
    double Length;
    void SetLen( double len)
    {
      Length = len;
    }
    double GetLen(void)
    {
      return Length;
    }
};

int main()
{
  Boxs Box1;
  //使用成员函数
  Box1.SetLen(6.0);
  cout<<"Length of Box1 : "<<Box1.GetLen()<<endl;
  //直接设置
  Box1.Length = 6.0;
  cout<<"Length of Box1 : "<<Box1.GetLen()<<endl;
}

#elif (Type == PRIVATE)
class Boxs
{
  //私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。
  //默认情况下，类的所有成员都是私有的。
  double Width;
  public:
    double Length;
    void Setwid( double wid)
    {
      Width = wid;
    }
    double Getwid(void)
    {
      return Width;
    }
};

int main()
{

  Boxs Box1;
#if 1// 不使用成员函数设置长度
  Box1.Length = 10.0;
  cout<<"Length of Box1 : "<<Box1.Length<<endl;
  
  // 使用成员函数设置宽度
  Box1.Setwid(10.0); 
  cout<<"Width of Box1 : "<<Box1.Getwid()<<endl;
#else// 不使用成员函数设置宽度是编译不过的
  Box1.Width = 10.0;
  cout<<"Width of Box1 : "<<Box1.Width<<endl;
#endif//在实际使用中,常常是用private修饰数据,public修饰函数供外部调用

}

#elif (Type == PRIVATE)
#endif