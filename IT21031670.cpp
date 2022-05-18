//IT21031670 A.M.W.Y. Abayakoon
#include<iostream>
#include <cstring>
using namespace std;

//creating class

class Booking 
{
  private:
	  int B_no;
	  string B_num;
	  int R_num;
	  string B_type;
	  string R_type;
	  string S_point;
	  string dest;
	  int S_num;
	  string B_date;
	  string B_time;
	  string B_serv;

  public:
	  int setBookN(int bookN);
	  void setBusN(string busN);
	  void setRouteNum(int routeN);
	  void setBusType(string busType);
	  void setRoadtype(string roadType);
	  void setSPoint(string start);
	  void setDest(string destination);
	  int getSeatNum(int seatN);
	  string setDate(string date);
	  string setTime(string time);
	  void setBusServ(string service);

};

//Implementing methods
int Booking::setBookN(int bookN);
{
	B_no = bookN;
}

void Booking::setBusN(string busN);
{
	B_num = busN;
}

void Booking::setRouteNum(int routeN);
{
	R_num = routeN;
}

void Booking::setBusType(string busType);
{
	B_type = busType;
}

void Booking::setRoadtype(string roadType);
{
	R_type = roadType;
}

void Booking::setSPoint(string start);
{
	S_Point = start;
}

void Booking::setDest(string destination);
{
	dest = destination;
}
int Booking::int getSeatNum(int seatN);
{
	S_num = seatN;
}

string Booking::setDate(string date);
{
	B_date = date;
}

string Booking::setTime(string time);
{
	B_time = time;
}

void Booking::setBusServ(string service);
{
	B_serv = service;
}


//function main

int main()
{

	Booking N1, N2, N3, N4;

	N1.setBookN(0001);
	N1.setBusN('NA - 7987');
	N1.setRouteNum(17);
	N1.setBusType('Semi-Luxury');
	N1.setRoadtype('Normal');
	N1.setSPoint('Panadura');
	N1.setDest('Malabe');
	N1.getSeatNum(15);
	N1.setDate('2022-04-21');
	N1.setTime('15:00:00');
	N1.setBusServ('Student');

	N2.setBookN(0002);
	N2.setBusN('NB-3515');
	N2.setRouteNum(01);
	N2.setBusType('Luxury');
	N2.setRoadtype('Normal');
	N2.setSPoint('Pettah');
	N2.setDest('Kandy');
	N2.getSeatNum(13);
	N2.setDate('2022-05-15');
	N2.setTime('15:30:00');
	N2.setBusServ('Public');

	N3.setBookN(0003);
	N3.setBusN('NC-6446');
	N3.setRouteNum(69);
	N3.setBusType('Semi-Luxury');
	N3.setRoadtype('Normal');
	N3.setSPoint('Kandy');
	N3.setDest('Awissawella');
	N3.getSeatNum(27);
	N3.setDate('2022-05-22');
	N3.setTime('13:00:00');
	N3.setBusServ('Staff');

	N4.setBookN(0004);
	N4.setBusN('NA-5569');
	N4.setRouteNum(13);
	N4.setBusType('Super-Luxury');
	N4.setRoadtype('Express Way');
	N4.setSPoint('Colombo');
	N4.setDest('Matara');
	N4.getSeatNum(11);
	N4.setDate('2022-04-29');
	N4.setTime('08:00:00');
	N4.setBusServ('Public');
}

//creating class

class Cancellation
{
private:
	int C_code;
	int U_ID;
	char U_name;
	int P_ID;

public:
	void setcancelcode(int cnclcode);
	int getcancelcode(int cnclcode);
	void setuserID(int UID);
	int getuserID(int UID);
	void setusername(char Uname);
	char getusername(char Uname);
	void setpayID(int payID);
	int getpayID(int payID);
	
};

//Implementing methods
void Cancellation::setcancelcode(int cnclcode);
{
	C_code = cnclcode;
}

int Cancellation::getcancelcode(int cnclcode);
{
	C_code = cnclcode;
}

void Cancellation::setuserID(int UID);
{
	U_ID = UID;
}

int Cancellation::getuserID(int UID);
{
	U_ID = UID;
}

void Cancellation::setusername(char Uname);
{
	U_name = Uname;
}

char Cancellation::getusername(char Uname);
{
	U_name = Uname;
}

void Cancellation::setpayID(int payID);
{
	P_ID = payID;
}
int Cancellation::getpayID(int payID);
{
	P_ID = payID;
}

//function main

int main()
{
	Cancellation C1, C2, C3, C4;

	C1.setcancelcode(45614);
	C1.getcancelcode(45614);
	C1.setuserID(10);
	C1.getuserID(10);
	C1.setusername('Supun Nirmal');
	C1.getusername('Supun Nirmal');
	C1.setpayID(0561);
	C1.getpayID(0561);
	

	C2.setcancelcode(11643);
	C2.getcancelcode(11643);
	C2.setuserID(11);
	C2.getuserID(11);
	C2.setusername('Lasitha Sandun');
	C2.getusername('Lasitha Sandun');
	C2.setpayID(0562);
	C2.getpayID(0562);

	C3.setcancelcode(65133);
	C3.getcancelcode(65133);
	C3.setuserID(12);
	C3.getuserID(12);
	C3.setusername('Kanchana Anuradhi');
	C3.getusername('Kanchana Anuradhi');
	C3.setpayID(0563);
	C3.getpayID(0563);

	C4.setcancelcode(51654);
	C4.getcancelcode(51654);
	C4.setuserID(13);
	C4.getuserID(13);
	C4.setusername('Janaka Sandun');
	C4.getusername('Janaka Sandun');
	C4.setpayID(0564);
	C4.getpayID(0564);
}
