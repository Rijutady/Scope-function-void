#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

// This program will demonstrate the scope rules.

// Huiqing Wu

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;

	cout << " Main function outer block" << endl;
	cout << " findArea,findCircumference are active here" << endl << endl;

	{
		float area=0;

		cout << "Main function first inner block" << endl;
		cout << "findArea, area, radius and PI are active here" << endl << endl;

		// Fill in the code to call findArea here
		
		cout << "The radius = " << radius << endl;
		cout << "The area = ";
		findArea(radius, area);
	}

	{
		float radius = 10;
		float circumference=0;

		cout << "Main function second inner block" << endl;
		cout << "findCircumference,radius, PI, circumference are active here" << endl << endl;

		// Fill in the code to call findCircumference here
		cout << "The radius = " << radius << endl;
		cout << "The circumference = ";
		findCircumference(radius, circumference);
	}

	cout << "Main function after all the calls" << endl;
	cout << "findArea,findCircumference,PI,area, radius and circumference are active here" << endl << endl;

	return 0;
}

//	*********************************************************************
//	findArea
//
//	task:	  This function finds the area of a circle given its radius
//	data in:  radius of a circle
//	data out: answer (which alters the corresponding actual parameter)
//
//	********************************************************************

void findArea(float rad, float& answer)
{
	answer = PI * rad *rad;
	cout << answer << endl;
	cout << "AREA FUNCTION" << endl << endl;
	cout << "PI,rad,findArea and answer are active here" << endl << endl;

	// FILL in the code, given that parameter rad contains the radius, that
	// will find the area to be stored in answer
}

//	******************************************************************************
//	findCircumference
//
//	task:	  This function finds the circumference of a circle given its radius
//	data in:  radius of a circle
//	data out: distance (which alters the corresponding actual parameter)
//
//	*****************************************************************************

void findCircumference(float length, float& distance)
{
	distance = 2 * PI *length;
	cout << distance << endl;
	cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
	cout << "PI, length,distance,findCircumference are active here" << endl << endl;

	// FILL in the code, given that parameter length contains the radius,
	// that will find the circumference to be stored in distance
	
}