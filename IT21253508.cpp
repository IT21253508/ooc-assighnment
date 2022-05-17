//IT21253508-A.R.B.L.Athapattu
//creating classes
#include <iostream>
#include <string>
#include<cstring>
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

//main cpp
//Bus_Info

int main()

{
    Bus_Info B1, B2, B3, B4;

    B1.setbusnum("NA-7987");
    B2.setbusnum("NB-3515");
    B3.setbusnum("NC-6446");
    B4.setbusnum("NA-5569");

    B1.setbustype("Semi-Luxury");
    B2.setbustype("Luxury");
    B3.setbustype("Semi-Luxury");
    B4.setbustype("Super-Luxury");

    B1.setroutenum(17);
    B2.setroutenum(01);
    B3.setroutenum(69);
    B4.setroutenum(13);

    B1.setconductor("0055");
    B2.setconductor("0056");
    B3.setconductor("0057");
    B4.setconductor("0057");

    B1.setstaffID(1111);
    B2.setstaffID(2222);
    B3.setstaffID(3333);
    B4.setstaffID(4444);

    B1.setbusservice("Student");
    B2.setbusservice("Public");
    B3.setbusservice("Staff");
    B4.setbusservice("Public");

    // output
    cout << "Bus num: " << B1.getbusnum() << endl;
    cout << "Bus type: " << B1.getbustype() << endl;
    cout << "Route number: " << B1.getroutenum() << endl;
    cout << "Conducter number: " << B1.getconductor() << endl;
    cout << "Staff ID: " << B1.getstaffID() << endl;
    cout << "Bus service: " << B1.getbusservice() << endl;

    cout << "\n" << endl;

    cout << "Bus num: " << B2.getbusnum()  << endl;
    cout << "Bus type: " << B2.getbustype() << endl;
    cout << "Route number: " << B2.getroutenum() << endl;
    cout << "Conducter number: " << B2.getconductor()  << endl;
    cout << "Staff ID: " << B2.getstaffID() << endl;
    cout << "Bus service: " << B2.getbusservice() << endl;

    cout << "\n" << endl;

    cout << "Bus num: " << B3.getbusnum() << endl;
    cout << "Bus type: " << B3.getbustype() << endl;
    cout << "Route number: " << B3.getroutenum() << endl;
    cout << "Conducter number: " << B3.getconductor() << endl;
    cout << "Staff ID: " << B3.getstaffID() << endl;
    cout << "Bus service: " << B3.getbusservice() << endl;

    cout << "\n" << endl;

    cout << "Bus num: " << B4.getbusnum() << endl;
    cout << "Bus type: " << B4.getbustype() << endl;
    cout << "Route number: " << B4.getroutenum() << endl;
    cout << "Conducter number: " << B4.getconductor() << endl;
    cout << "Staff ID: " << B4.getstaffID() << endl;
    cout << "Bus service: " << B4.getbusservice() << endl;

    cout << endl;

    return 0;

}

//payment
int main()
{
	Payment P1, P2, P3, P4;

	P1.setname("Supun Nirmal");
	P2.setname("Lasitha Sandun");
	P3.setname("Kanchana Anuradhi");
	P4.setname("Janaka Sandun");

	P1.setpaymentid(0561);
	P2.setpaymentid(0562);
	P3.setpaymentid(0563);
	P4.setpaymentid(0564);

	P1.setpaytype("Cash");
	P2.setpaytype("Card");
	P3.setpaytype("Card");
	P4.setpaytype("Cash");

	//Output
	cout << "Name: " << P1.getname() << endl;
	cout << "Payment ID: " << P1.getpaymentid() << endl;
	cout << "Payment type: " << P1.getpaytype() << endl;

	cout << "\n" << endl;

	cout << "Name: " << P2.getname() << endl;
	cout << "Payment ID: " << P2.getpaymentid() << endl;
	cout << "Payment type: " << P2.getpaytype() << endl;

	cout << "\n" << endl;

	cout << "Name: " << P3.getname() << endl;
	cout << "Payment ID: " << P3.getpaymentid() << endl;
	cout << "Payment type: " << P3.getpaytype() << endl;

	cout << "\n" << endl;

	cout << "Name: " << P4.getname() << endl;
	cout << "Payment ID: " << P4.getpaymentid() << endl;
	cout << "Payment type: " << P4.getpaytype() << endl;

	cout << endl;

	return 0;
}

//Route_Category
int main()
{
	Route_Category R1, R2, R3, R4;

	R1.setroutenum(17);
	R2.setroutenum(01);
	R3.setroutenum(69);
	R4.setroutenum(13);

	R1.setroutetype("Normal");
	R2.setroutetype("Normal");
	R3.setroutetype("Normal");
	R4.setroutetype("Express Way");

	//Output
	cout << "Route number: " << R1.getroutenum() << endl;
	cout << "Route type: " << R1.getroutetype() << endl;

	cout << "\n" << endl;

	cout << "Route number: " << R2.getroutenum() << endl;
	cout << "Route type: " << R2.getroutetype() << endl;

	cout << "\n" << endl;

	cout << "Route number: " << R3.getroutenum() << endl;
	cout << "Route type: " << R3.getroutetype() << endl;

	cout << "\n" << endl;

	cout << "Route number: " << R4.getroutenum()  << endl;
	cout << "Route type: " << R4.getroutetype() << endl;

	cout << endl;

	return 0;
}