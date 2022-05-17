//Rochell Shanesh Costa
//IT21212154

#include <iostream>
#include <cstring>
using namespace std;

//Creating class

class Ticket //Class Ticket
{
	private : //Attributes
		
		int U_ID;
	    int T_ID;
	    int B_No;
	    string B_Num;
	    float price;
	    char S_oint;
	    char Dest;
	    int S_Num;
	    int B_date;
	    int B_time;
	    
	public : //Methods
	
	    Ticket();
	    
	    Ticket (int pU_ID, int pT_ID, int pB_no, string pB_num, float pprice, char pS_point, char pdest, int S_num, int B_date, int B_time);
	    
	    void setUID(int uid) ;
	    void setTID(int tid) ;
	    void setBusNo(int no) ;
	    void setBusNum(string num) ;
	    void setPrice(float price) ;
	    void setStartPoint(char start) ;
	    void setDestination(char dest) ;
	    void setSeatNum(int saet) ;
	    void setBusDate(int date) ;
	    void setBusTime(int time) ;
	    void DisplayTicketDetails() ; 
	
	    ~Ticket();
	
	
};

class BusCategory //Class Bus Category
{
	private ://Attributes
		
		string BC_ID;
		string B_Num;
		char B_Type[10];
		
	public ://Methods 
	
	    BusCategory();
	    
	    BusCategory(string pBC_ID, string pB_num, char pB_type);
	    void setBCID (string id);
		void setBusNum (string num);
		void setBusType (char type) ;
		void DisplayDetails ();
		
		~BusCategory();
		
};

//Implementing Methods

//Bus Staff Class Methods

Ticket::Ticket()
{
	U_ID = 0;
	T_ID = 0;
	B_no = 0;
	strcpy (B_num ," ");
	price = 0;
	strcpy (S_point , " ");
	strcpy (dest , " ");
	S_num = 0;
	B_date = 0;
	B_time = 0;
}

Ticket::Ticket  (int pU_ID, int pT_ID, int pB_no, string pB_num, float pprice, char pS_point, char pdest, int S_num, int B_date, int B_time)
{
    U_ID = pU_ID;
	T_ID = pT_ID;
	B_no = pB_no;
    strcpy (B_num, pB_num);
	price = pprice;
	strcpy (S_point ,pS_point);
	strcpy (dest ,pdest);
	S_num = pS_num;
	B_date = pB_date;
	B_time = pB_time;
}

void Ticket::setUID(int uid)
{
	
}

void Ticket::setTID(int tid)
{
	
}

void Ticket::setBusNo(int no)
{
	
}

void Ticket::setBusNum(string num)
{
	
}

void Ticket::setPrice(float price)
{
	
}

void Ticket::setStartPoint(char start)
{
	
}

void Ticket::setDestination(char dest)
{
	
}

void Ticket::setSeatNum(int seat)
{
	
}

void Ticket::setBusDate(int date)
{
	
}

void Ticket::setBusTime(int time)
{
	
}

void Ticket::DisplayTicketDetails()
{
	
}

Ticket::~Ticket()
{
	cout<< "Destructor Executed" << endl;
}

BusCategory::BusCategory()
{
    strcpy  (BCID ," ");
	strcpy (BusNum ," ");
	strcpy  (BusType ," ");
}

BusCategory::BusCategory(string pBC_ID, string pB_num, char pB_type);
{
	strcpy (BCID ,pBC_ID);
	strcpy (BusNum ,pB_num);
	strcpy (BusType ,pB_type;
}

void BusCategory::setBCID(string id)
{
	
}

void BusCategory::setBusNum(string num)
{
	
}

void BusCategory::setBusType(char type)
{
	
}

void BusCategory::DisplayDetails()
{
	
}
BusCategory::~BusCategory()
{
	cout<< "Destructor Executed" << endl;
}
