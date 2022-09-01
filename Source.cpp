#include<iostream>
#include<string>
#include <ctime>
#include <time.h>
#include<cstdlib>
#include<algorithm>
# include <stdio.h>
# include <stdlib.h>
# include <list>
#include"Header.h"


using namespace std;
int main()
{

	pharmacy tetraciklin(10, 50, "no", "tetraciklin", medicine::date());
	tetraciklin.etda();
	pharmacy actidin(20, 50, "no", "actidin", 30 - 12 - 2022);
	actidin.etda();
	pharmacy polimiksin(30, 40, "no", "polimiksin", 12 - 8 - 2020);
	polimiksin.etda();
	pharmacy vancomicin(24, 36, "no", "vancomicin", 24 - 5 - 2018);
	vancomicin.etda();
	pharmacy folic_acid(32, 100, "no", "folic_acid", 8 - 8 - 2013);
	folic_acid.etda();
	list <medicine> listofitems;
	listofitems.push_back(tetraciklin);
	
}

	/*SybclassOfmedicine stuff;
	stuff.id = otherStuff;
	listofitems.push_back( stuff );*/
	/*pharmacy
	pharmacy[5]{tetraciklin,actidin,polimiksin,vancomicin,folic_acid};*/





































































































/*#include<iostream>
#include<string>
#include <ctime>
#include <time.h>
#include<cstdlib>
#include<algorithm>
# include <stdio.h>
# include <stdlib.h>
#include"Header.h"


using namespace std;
int main()
{
	//string str;
	medicine pharmacy[5] = {};
	medicine a(100, 1000, "tetraciklin", "no", "7 / 2 /2021");
	a.print();
	medicine b(100, 1000, "aktidin", "no", "9 / 5 / 2021");
	b.print();
	medicine c(100, 1000, "vancomicin", "no", "6 / 2 / 2021");
	c.print();
	medicine z(100, 1000, "polimikcin ", "no", "6 / 6 / 2022");
	z.print();
	medicine x(100, 1000, "folic_acid", "no", "6 / 20 / 2023");
	x.print();

	//char chars[] = "()-";
	const time_t timer = time(NULL);
	tm* now = localtime(&timer);
	now->tm_year = 2021;
	now->tm_mon = 10;
	now->tm_mday = 20;
	if (now->tm_year - 2020 >= 0)
	{
		if (now->tm_mon - 10 >= 0)
		{
			if (now->tm_mday - 30 < 0)
			{
				cout << "nice" << endl;
			}
			else
			{
				cout << "shit" << endl;
			}
		}
		else
		{

			cout << "shit" << endl;
		}
	}
	else
	{
		cout << "shit" << endl;
	}
}*/


/*#include<iostream>
#include<string>
#include <ctime>
#include <time.h>
#include<cstdlib>
#include<algorithm>
# include <stdio.h>
# include <stdlib.h>
#include"Header.h"


using namespace std;
int main()
{
	
	medicine pharmacy[5] = {};
	const time_t k = time(NULL);
	tm* b = localtime(&k);
	b->tm_year = 2021;
	b->tm_mon = 10; 
	b->tm_mday = 20;
	if (b->tm_year - 2021 >= 0)
	{
		if (b->tm_mon - 7 >= 0)
		{
			if (b->tm_mday - 2 < 0)
			{
				medicine a(100, 1000, "tetraciklin", "no", "7 / 2 /2021");
				a.print();
			}
			else
			{
				cout << "shit" << endl;
			}
		}
		else
		{

			cout << "shit" << endl;
		}
	}
	else
	{
		cout << "shit" << endl;
	}

	const time_t c = time(NULL);
	tm* l = localtime(&c);
	l->tm_year = 2021;
	l->tm_mon = 10;
	l->tm_mday = 20;
	if (l->tm_year - 2021 >= 0)
	{
		if (l->tm_mon - 9 >= 0)
		{
			if (l->tm_mday - 5< 0)
			{
				medicine b(100, 1000, "aktidin", "no", "9 / 5 / 2021");
				b.print();
			}
			else
			{
				cout << "shit" << endl;
			}
		}
		else
		{

			cout << "shit" << endl;
		}
	}
	else
	{
		cout << "shit" << endl;
	}

	const time_t r = time(NULL);
	tm* u = localtime(&r);
	u->tm_year = 2021;
	u->tm_mon = 10;
	u->tm_mday = 20;
	if (u->tm_year - 2021 >= 0)
	{
		if (u->tm_mon - 6 >= 0)
		{
			if (u->tm_mday - 2 < 0)
			{
				medicine c(100, 1000, "vancomicin", "no", "6 / 2 / 2021");
				c.print();
			}
			else
			{
				cout << "shit" << endl;
			}
		}
		else
		{

			cout << "shit" << endl;
		}
	}
	else
	{
		cout << "shit" << endl;
	}
	const time_t p = time(NULL);
	tm* m = localtime(&p);
	m->tm_year = 2021;
	m->tm_mon = 10;
	m->tm_mday = 20;
	if (m->tm_year - 2022 >= 0)
	{
		if (m->tm_mon - 6>= 0)
		{
			if (m->tm_mday - 6 < 0)
			{
				medicine z(100, 1000, "polimikcin ", "no", "6 / 6 / 2022");
				z.print();
			}
			else
			{
				cout << "shit" << endl;
			}
		}
		else
		{

			cout << "shit" << endl;
		}
	}
	else
	{
		cout << "shit" << endl;
	}
	const time_t y = time(NULL);
	tm* j = localtime(&y);
	j->tm_year = 2021;
	j->tm_mon = 10;
	j->tm_mday = 20;
	if (j->tm_year - 2023 >= 0)
	{
		if (j->tm_mon - 6 >= 0)
		{
			if (j->tm_mday - 20 < 0)
			{
				medicine x(100, 1000, "folic_acid", "no", "6 / 20 / 2023");
				x.print();
			}
			else
			{
				cout << "shit" << endl;
			}
		}
		else
		{

			cout << "shit" << endl;
		}
	}
	else
	{
		cout << "shit" << endl;
	}
	a. expiration_ended();
}



















	
	
	/*string removenum(string str)
{
	for (int i = 0;i < str.length();i++)
	{
		str.erase(i, 1);
	}
	return str;
}*/







	/*void removechars(string & str, char* charstoremove)
	{
		for (unsigned i = 0; i < strllen(charstoremove); ++i);
		{
			str.erase(remove(str.begin, str.end, charstoremove[i]), str.end);
		}
	}
	removechars(str, "()-");
}*/


	/*time_t date(int year, int mon, int day)
	{
		tm tmp = tm();
		tmp.tm_year = year;
		tmp.tm_mon = mon;
		tmp.tm_mday = day;
		return mktime(&tmp);
		
	}*/
	




	   /* size_t  expirationDate = expirationDate;
		
		medicine::expirationDate.tm_mday = expirationDate ;
		
		expirationDate.tm_mon = expirationDate - 6;

		expirationDate.tm_year = expirationDate - 2022;*/
	
	/*if (expirationDate.tm_mday, expirationDate.tm_mon,expirationDate.tm_year <= 0)
	{
	
		cout << "its_dead" << endl;
	}

	else
	{
		cout << "its_fine" << endl;

	}*/

	/*if (2021 - <= 0)
	{

		cout << "its_dead" << endl;
	}

	else
	{
		cout << "its_fine" << endl;
	}*/














