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

    return 0;
}

