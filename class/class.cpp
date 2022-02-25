#include <iostream>

using namespace std;

class boxs
{
	public:
		double length;
		double breadth;
		double height;
	
		double GetVolume(void);
		void set(double len, double bre,double hei);
};

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
	
	box2.set(5.0,12.0,7.0);
	volume = box2.GetVolume();
	cout<<"the volume of box2:"<<volume<<endl;

}