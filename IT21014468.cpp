//IT21014468 T.M.L.Devindi Wickramasinghe

#include <iostream>
#include <cstring>
using namespace std;

//Cteating Classes

class BusStaff //Bus Staff Class
{
	private : //Attributes
	
	    int S_ID;
	    int Stf_telno;
	    char Stf_name[50];
	    char Stf_type[10];
	    string Stf_add;
	    
	public : //Methods
	    BusStaff();
		
			
	    BusStaff(int pS_ID, int pStf_telno, char pStf_name, 
	char pStf_type, string pStf_add);
		
	    void setSID (int id);
	    void setStaffTelNo (int telno);
	    void setStaffName (char name);
	    void setStaffType (char type);
	    void setStaffAddress (string add);
	    	    
	    ~BusStaff();
	    
};

class Cards //Class Cards
{
	private : //Attributes
		
		int cvv;
		int E_date;
		int C_num;
		char C_type [10];
		
	public : //Methods
	    Cards();
		
		Cards(int pcvv, int pE_date, int pC_num, char pC_type);
		void setcvv ();
		void setExpireDate ();
		void setCardNumber ();
		void setCardType ();
		
	    ~Cards();
		
};

//Implementing Methods

//Bus Staff Class Methods

BusStaff::BusStaff()
{
	S_ID = 0;
	Stf_telno =0;
	strcpy = (Stf_name, " ");
	strcpy = (Stf_type, " ");
	string = (Stf_add, " ");
}

BusStaff::BusStaff(int pS_ID, int pStf_telno, char pStf_name, 
	char pStf_type, string pStf_add)
{
	S_ID = pU_ID;
	Stf_telno = pStf_telno;
	strcpy = (Stf_name, pStf_name);
	strcpy = (Stf_type, pStf_type);
	string = (Stf_add, pStf_add);
	
}

void BusStaff::setSID(int id)
{
	
}

void BusStaff::setStaffTelNo(int name)
{
	
}

string BusStaff::setStaffName(char name)
{
	
}

void BusStaff::setStaffType(char type)
{
	
}

void BusStaff::setStaffAddress(string add)
{
	
}

void BusStaff::setDisplayDetails()
{
	
}

BusStaff::~BusStaff()
{
	cout<< "Destructor Executed" << endl;
}

//Implementing Methods

//Card Class Methods

Cards::Cards()
{
	cvv = 0;
	E_date = 0;
	C_num = 0;
	strcpy (C_type, " ");	
}

Cards::Cards(int pcvv, int pE_date, int pC_num, char pC_type);
{
	cvv = pcvv;
	E_date = pE_date;
	C_num = pC_num;
	strcpy = (C_type, pC_type);
}

void Cards::setcvv(int cvv)
{
	
}

void Cards::setExpireDate (int date)
{
	
}

void Cards::setCardNumber(int card)
{
	
}

void Cards::setCardType(char type)
{
	
}


Cards::~Crads()
{
	cout<<"Destructor Executed"<<endl;
}















