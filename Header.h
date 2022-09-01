#pragma once
#include<iostream>
#include<string>
#include<time.h>
#include <ctime>
#include <stddef.h>
#include <chrono>
using namespace std;

class medicine
{
public: struct date

	{
		int year;
		int month;
		int day;
		date(int y=2020, int m=12, int d=12)
		{
			year = y;
			month = m;
			day = d;
		}

	};
public:
	int price;
	int quantity;
	string name;
	string isPrescriptionNeeded;
	date expirationDate;
	medicine(int price=1, int quantity=1, string name="", string isPrescriptionNeeded="", date expirationDate=date())
    {
		this->price = price;
		this->quantity = quantity;
		this->name = name;
		this->isPrescriptionNeeded = isPrescriptionNeeded;
		this->expirationDate = expirationDate;
	}

	~medicine() {}

	void etda(date e)
	{
		this->expirationDate = e;
		date b = date(13, 11, 2020);
		if (expirationDate.day - b.day >= 0)
		{
			if (expirationDate.month - b.month >= 0)
			{
				if (expirationDate.year - b.year >= 0)
				{
					cout << "nice" << endl;
				}
				else
				{
					delete this;
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
	}
	
	
};
    class pharmacy :public medicine
	{
	using medicine::medicine;
	public:
		list <medicine> stuff;
		pharmacy(list<medicine> stuff2)
		{
			this->stuff = stuff2;
		}
		erase()
			this->list.erase()
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*void expired()
	{
		tm* meit = NULL(&expirationDate);
		strftime(gbuffer, 80, "%Y-%m-%d", meit);
		
		
		/*meit = NULL(&expirationDate);
		meit->tm_year;
		meit->tm_mon;
		meit->tm_mday;*/
		
		/*char* dt = ctime(&expirationDate);
		tm* gmt_time = gmtime(&expirationDate);
		dt = asctime(gmt_time);*/
		//cout << expirationDate;
       //const time_t k = time(NULL);
		/*time_t k;
	   struct tm* k;
	   char buffer[80];
	    tm* b = localtime(&k);
		strftime(buffer, 80, "%Y-%m-%d",b );
		puts (buffer);
		
		/*b->tm_year;
		b->tm_mon;
		b->tm_mday;*/
		/*double diff = difftime(expirationDate,k);
		if (diff >= 0)
		{
			cout << "nice" << endl;
		}
		else
		{
			//int* meds=pharmacy[5];
			cout << "its bad" << endl;
		}
	}*/
	/*public static void main(int[], args)
	{
		medicine m = new medicine();
		sale(m);
	}
	static void sale(medicine m)
	{
		m.price =m.price * 0.9;
	}*/




	/*void addmeds()
	{

	}*/


/*time_t expirationDate;
const int MAXLEN = 100;
char b[MAXLEN];
time_t expirationDate = time(0);
strftime(b, MAXLEN, "%m/%d/%Y", NULL(&expirationDate));
cout << "%m/%d/%Y", & expirationDate;
time_t k;
const int maxlen = 100;
char l[maxlen];
time_t k = time(0);
strftime(l, maxlen, "%m/%d/%Y", localtime(&k));
double diff = difftime(expirationDate, k);
if (diff >= 0)
{
	cout << "nice" << endl;
}
else
{
	cout << "shit" << endl;
}*/






/*#pragma once
#include<iostream>
#include<string>
#include <ctime>
using namespace std;

class medicine
{
public:
	int price;
	int quantity;
	string name;
	string	isPrescriptionNeeded;
	string expirationDate;
	medicine(int price, int quantity, string name, string	isPrescriptionNeeded, string expirationDate)
	{
		this->price = price;
		this->quantity = quantity;
		this->name = name;
		this->isPrescriptionNeeded = isPrescriptionNeeded;
		this->expirationDate = expirationDate;
	}
	medicine()
	{
		this->price = 1000;
		this->quantity = 2062004;
		this->name = "0";
		this->isPrescriptionNeeded = "0";
		this->expirationDate ;
	}
	~medicine() {}

	void expiration_ended();
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
				if (l->tm_mday - 5 < 0)
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
			if (m->tm_mon - 6 >= 0)
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
	}
	

		void discount();
		void chip_jung();
		void print()
		{
			cout  << price << "-price\t\t\t\n"  << quantity << "-quantity\t\t\t\n"  << name << "-name\t\t\t\n"  << isPrescriptionNeeded << "-isPrescriptionNeeded\t\t\t\n" << expirationDate << "-expirationDate\t\t\t\n";
		}
		
	};
	class pharmacy
	{
	public:
		string tetraciklin;
		string aktidin;
		string vancomicin;
		string polimikcin;
		string folic_acid;
		pharmacy(string tetraciklin, string aktidin, string vancomicin, string polimikcin, string folic_acid)
		{
			this->tetraciklin = tetraciklin;
			this->aktidin = aktidin;
			this->vancomicin = vancomicin;
			this->polimikcin = polimikcin;
			this->folic_acid = folic_acid;
		}
		~pharmacy(){}
		void add_stuff();
		void del_stuff();
		void Print()
		{
			cout << "name1\n" << tetraciklin << "name2\n" << aktidin << "name3\n" << vancomicin << "name4\n" << polimikcin << "name5\n" << folic_acid;
		}
	};*/