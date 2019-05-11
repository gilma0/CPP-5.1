 /**
 * A demo program for itertools.
 *
 * @author Erel Segal-Halevi
 * @since  2019-05
 */


#include <iostream>
using namespace std;

#include "range.hpp"
#include "chain.hpp"
#include "zip.hpp"
#include "product.hpp"
#include "powerset.hpp"
#include "badkan.hpp"
#define COMMA ,

using namespace itertools;


int main() {

	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {	
//===========================================================================//Test - RANGE//=====================================================================================
	
		testcase.setname(" **Range > Test** ");
	
		int n = 0;
			for (int i : range(0,1))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
		 n = 1;
			for (int i : range(1,2))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
		 n = 1;
			for (int i : range(1,3))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
		 n = 1;
			for (int i : range(1,4))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
	         n = 1;
			for (int i : range(1,5))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
		 n = 1;
			for (int i : range(1,6))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
		 n = 0;
			for (int i : range(0,9))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
		 n = 13;
			for (int i : range(13,55))
			{
				testcase.CHECK_EQUAL(i, n);
				n++;
			}
		

	char CCounter='a';
			for (char i : range('a', 'd'))
			{
				testcase.CHECK_EQUAL(i, CCounter);
			CCounter++;
			}
		CCounter='f';
			for (char i : range('f', 'x'))
			{
				testcase.CHECK_EQUAL(i, CCounter);
			CCounter++;
			}
			CCounter='e';
			for (char i : range('e', 'q'))
			{
				testcase.CHECK_EQUAL(i, CCounter);
			CCounter++;
			}
			CCounter='b';
			for (char i : range('b', 'z'))
			{
				testcase.CHECK_EQUAL(i, CCounter);
			CCounter++;
			}
			CCounter='b';
			for (char i : range('b', 'q'))
			{
				testcase.CHECK_EQUAL(i, CCounter);
			CCounter++;
			}
			CCounter='a';
			for (char i : range('a', 'f'))
			{
				testcase.CHECK_EQUAL(i, CCounter);
			CCounter++;
			}
			CCounter='a';
			for (char i : range('a', 'n'))
			{
				testcase.CHECK_EQUAL(i, CCounter);
			CCounter++;
			}


	
	
//===========================================================================//Test - CHAIN//=====================================================================================


	testcase.setname("  **Chain->Test**  ");

		int n0 = 0;

int arr1[]={1,2,3,5,6,7};
for (int i: chain(range(1,4), range(5,8)))
	{
		testcase.CHECK_EQUAL(i, arr1[n0]);
		n0++;
	}


n0=0;
int arr2[]={0,1,2,3,9,10};
for (int i: chain(range(0,4), range(9,11)))
	{
		testcase.CHECK_EQUAL(i, arr2[n0]);
		n0++;
	}

n0=0;
int Temp=0;
char arr3[]={'h','e','l','l','o'};
char arr4[]={'a','b','c'}	;

for (auto i: chain(range('a','d'), string("hello")))
	{
		if(n0<3)
		{
		testcase.CHECK_EQUAL(i, arr4[n0]);
		n0++;
		}
	else{
		testcase.CHECK_EQUAL(i, arr3[Temp]);
		Temp++;
	}
	}

//===========================================================================//Test - ZIP//=====================================================================================

	
	
		testcase.setname(" **Zip->Test** ");
int n1=0;

string arr5[]={"1,h","2,e","3,l","4,l","5,o"};
for (auto pair: zip(range(1,6), string("hello")))
{
		testcase.CHECK_OUTPUT(pair,arr5[n1]);
		n1++;

}

n1=0;

		string arr6[]={"6,0","7,1","8,2","9,3","10,4"};
	for (auto pair: zip(range(6,11), range(0,5)))
{
		testcase.CHECK_OUTPUT(pair,arr6[n1]);
		n1++;

}

n1=0;
		string arr7[]={"6,q","7,w","8,e","9,r","10,t"};
for (auto pair: zip(range(6,11), string("qwert")))
{
		testcase.CHECK_OUTPUT(pair,arr7[n1]);
		n1++;

}



//===========================================================================//Test - PRODUCT//=====================================================================================

	testcase.setname(" **Product->Test** ");


	int n2=0;
		string arr8[]={"0,5","0,6","1,5","1,6","2,5","2,6","3,5","3,6","4,5","4,6"};
for (auto pair: product(range(0,5), range(5,7)))
{
		testcase.CHECK_OUTPUT(pair,arr8[n2]);
		n2++;

}


    testcase.print(cout, /*show_grade=*/false);
    grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}
