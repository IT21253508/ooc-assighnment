//group - MLB_WD_CSNE_13_05
//main cpp for programme
#include <iostream>
#include <cstring>

//adding headers
#include "RegisteredUser.h"
#include "FeedbackandReview.h"
#include "BusStaff.h"
#include "Card.h"
#include "Bus_info.h"
#include "Payment.h"
#include "Route_Category.h"
#include "Ticket.h"
#include "BusCategory.h"
#include "booking.h"
#include "cncl.h"

using namespace std;

int main()
{
    //creating objects
    RegisteredUser u1, u2, u3, u4, u5;
    FeedbackandReview f1, f2, f3, f4, f5;
    BusStaff bs1, bs2, bs3, bs4, bs5;
    Card c1, c2, c3, c4, c5;
    Bus_info b1, b2, b3, b4, b5;
    Payment p1, p2, p3, p4, p5;
    Route_Category r1, r2, r3, r4, r5;
    Ticket t1, t2, t3, t4, t5;
    BusCategory bc1, bc2, bc3, bc4, bc5;
    Booking N1, N2, N3, N4, N4;
    Cancellation CA1, CA2, CA3, CA4;
    

    return 0;
}

//method calling
RegisteredUser* user = new user(); 
FeedbackandReview* feed = new feed(); 
BusStaff* staff = new staff(); 
Card* card = new Bcard(); 
Bus_info* info = new info(); 
Payment* payment = new payment(); 
Route_Category* route = new route(); 
Ticket* ticket = new ticket(); 
BusCategory* bcat = new bcat();
Booking* book = new book();
Cancellation* cancel = new cancel();

//delete objects
delete RegisteredUse;
delete FeedbackandReview;
delete BusStaff;
delete Card;
delete Bus_info;
delete Payment;
delete Payment;
delete Route_Category;
delete Ticket;
delete Ticket;
delete BusCategory;
delete Booking;
delete Cancellation;
