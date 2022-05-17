//IT21253508-A.R.B.L.Athapattu
//creating classes
#include <iostream>
#include <string>
using namespace std;

//Creating class Bus_Info
class Bus_Info
{
private:
    string B_num;
    string B_type;
    int R_num;
    string con_ID;
    int S_ID;
    string B_serv;

public:
    //default consructor
    Bus_Info();

    //overload constructor
    Bus_Info(string pB_num, string pB_type, int pR_num, string pcon_ID, int pS_ID, string pB_serv);
    
    //setters
    void setbusnum(string Bus_num);
    void setbustype(string Bus_type);
    void setroutenum(int Route_num);
    void setconductor(string conduct_id);
    void setstaffID(int stf_id);
    void setbusservice(string bus_serve);

    //getters
    string getbusnum();
    string getbustype();
    int getroutenum();
    string getconductor();
    int getstaffID();
    string getbusservice();

    //destructor
    ~Bus_Info();
};

//Creating class Payment
class Payment
{
private:
    string U_name;
    int P_ID;
    string P_type;

public:
    //default consructor
    Payment();
    //overload consructor
    Payment(string pU_name, int pP_ID, string pP_type);
    //setters
    void setname(string Name);
    void setpaymentid(int pay_ID);
    void setpaytype(string pay_type);
    //getters
    string getname();
    int getpaymentid();
    string getpaytype();

    ~Payment();
};

//Creating class Route_Category
class Route_Category
{
private:
    int R_num;
    string R_type;

public:
    //default consructor
    Route_Category();

    //overload consructor
    Route_Category(int pR_num, string pR_type);

    //setters
    void setroutenum(int ru_num);
    void setroutetype(string ru_type);

    //getters
    int getroutenum();
    string getroutetype();

    ~Route_Category();
};

//Implementing methods
//Implementing class Bus_Info

//default consructor
Bus_Info::Bus_Info()
{
    string str = (B_num, "");
    string str = (B_type, "");
    R_num = 0;
    string str = (con_ID, "");
    S_ID = 0;
    string str = (B_serv, "");
}

//overload constructor
Bus_Info::Bus_Info(string pB_num, string pB_type, int pR_num, string pcon_ID, int pS_ID, string pB_serv)
{
    string str = (B_num,pB_num);
    string str = (B_type,pB_type);
    R_num = pR_num;
    string str = (con_ID,pcon_ID);
    S_ID = pS_ID;
    string str = (B_serv,pB_serv);

}
//setters and getters
void Bus_Info::setbusnum(string Bus_num)
{
    B_num = Bus_num;
}

string Bus_Info::getbusnum()
{
    return B_num;
}

void Bus_Info::setbustype(string Bus_type)
{
    B_type = Bus_type;
}

string Bus_Info::getbustype()
{
    return B_type;
}

void Bus_Info::setroutenum(int Route_num)
{
    R_num = Route_num;
}

int Bus_Info::getroutenum()
{
    return R_num;
}

void Bus_Info::setconductor(string conduct_id)
{
    con_ID = conduct_id;
}

string Bus_Info::getconductor()
{
    return con_ID;
}

void Bus_Info::setstaffID(int stf_id)
{
    S_ID = stf_id;
}

int Bus_Info::getstaffID()
{
    return S_ID;
}

void Bus_Info::setbusservice(string bus_serve)
{
    B_serv = bus_serve;
}

string Bus_Info::getbusservice()
{
    return B_serv;
}

//destructor
Bus_Info::~Bus_Info()
{
    cout << "Destructor Executed" << endl;
}

//implementing class Payment
//default constructor
Payment::Payment()
{
	string str = (U_name,"");
	P_ID = 0;
	string str = (P_type, "");
}

//overload constructor
Payment::Payment(string pU_name, int pP_ID, string pP_type)
{
	string str = (U_name,pU_name);
	P_ID = pP_ID;
	string str = (P_type,pP_type);
}

//setters and getters
void Payment::setname(string Name)
{
	U_name = Name;
}

string Payment::getname()
{
	return U_name;
}

void Payment::setpaymentid(int pay_ID)
{
	P_ID = pay_ID;
}

int Payment::getpaymentid()
{
	return P_ID;
}

void Payment::setpaytype(string pay_type)
{
	P_type = pay_type;
}

string Payment::getpaytype()
{
	return P_type;
}

//destructor
Payment::~Payment()
{
	cout << "Destructor Executed" << endl;
}

//Implementing class Route_Category
//default constructor
Route_Category::Route_Category()
{
	R_num = 0;
	string str = (R_type,"");
}

//overload constructor
Route_Category::Route_Category(int pR_num, string pR_type)
{
	R_num = pR_num;
	string str = (R_type, pR_type);
}

//setters and getters
void Route_Category::setroutenum(int ru_num)
{
	R_num = ru_num;
}

int Route_Category::getroutenum()
{
	return R_num;
}

void Route_Category::setroutetype(string ru_type)
{
	R_type = ru_type;
}

string Route_Category::getroutetype()
{
	return R_type;
}

//destructor
Route_Category::~Route_Category()
{
	cout << "Destructor Executed" << endl;
}