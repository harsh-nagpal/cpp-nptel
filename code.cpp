/*
 * code.cpp
 *
 *  Created on: 26-Dec-2018
 *      Author: rohan
 */

#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;


//int Add(int a , int b) {return (a+b);}
//double Add(double c , double d) {return (c+d);}

//int area(int a , int b  ) {return (a*b);}
//int area (int c ) {return (c*c);}

//typedef struct _String {char *str;}String;
//String operator+(const String& s1, const String& s2){
//
//	String s ;
//	s.str = (char *)malloc(strlen(s1.str) + strlen(s2.str) +1);
//	strcpy(s.str , s1.str);
//	strcat (s.str , s2.str);
//	return s;
//}


int main(){
//-------------function overloading------
//when you have different parametric uses of a function
//having the same functionality or algorithm

//	int x = 5, y = 6, z;
//	z = Add(x , y);
//	cout << "int sum " << z <<endl;
//
//	double a = 5, b = 6, c;
//	c = Add(a , b);
//	cout << "double sum " << c <<endl;

//	int x = 5, y = 6, z;
//	z = area(x , y);
//	cout << "rect area " << z <<endl;
//
//	int a = 9, c;
//	c = area( );
//	cout << "sq area " << c <<endl;


//--------------operator overloading--------------
//Note: infix : a+b (operator)
// 		prefix : ++a (function)
//		postfix : a++

//	String fName , lName , name;
//	fName.str = strdup("Rohan ");
//	lName.str = strdup("Panda");
//
//	name = fName + lName;//overload operator +
//
//	cout << "First Name : " << fName.str << endl;
//	cout << "Last Name : " << lName.str << endl;
//	cout << "Full Name : " << name.str << endl;

//--------------dynamic memory allotment-------------

//	int *p = (int *)malloc(sizeof(int));
//	*p = 5;									//usual allocation
//	cout << *p <<endl;
//	free(p);

//	int *p = new int(5);		//'new' allocation
//	int *p = (int*) operator new(sizeof(int));
//
//	*p = 5;						//new operator returns
//								//poiner to allocated heap space
//	cout << *p <<endl;
//	delete p;
//	operator delete(p);

//	for arrays...
//	int *a = new int[3];
//
//	for(int i =0;i<3;i++){
//		a[i] = i;
//		cout << a[i]<<endl;
//	}

//	delete [] a;

	unsigned char buf[sizeof(int)*2]; //buffer on stack

	int *pInt = new (buf) int (3);
	int *qInt = new (buf + sizeof(int)) int (5);

	int *pBuf = (int *) (buf);
	int *qBuf = (int *) (buf+sizeof(int));

	cout << "Buffer addr Int addr" << endl;
	cout << pBuf << " " << pInt << endl << qBuf << " "<< qInt
			<< endl;
	cout << "1st int 2nd Int"<< endl;
	cout << *pBuf << " " << *qBuf << endl;

	int *rInt = new int(7);
	cout << "heap addr 3rd int" << endl;
	cout << rInt << " "<< *rInt <<endl;
	delete rInt;








	return 0;
}


