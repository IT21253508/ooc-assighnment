//IT21229916 S.C.W. Dissanayake
#include <iostream>
#include <cstring>
using namespace std;

// Creating Classes

class RegisteredUser //Registered User Class
{
    private: //Attributes
        int U_ID;
        char U_name;
        char U_email;
        int U_telno;
        char U_add;
        int U_dob;
        char l_pword;

    public: //Method
        RegisteredUser();
        
        RegisteredUser(int pU_ID, char pU_name, char pU_email, int pU_telno, char pU_add, int pU_dob, char pl_pword);
        
        void setUserID(int id);
        void setUserName(char name);
        void setUserEmail(char email);
        void setUserTelno(int telno);
        void setUserAdd(char add);
        void setUserDoB(int dob);
        void setUserLpword(char pword);
        
        ~RegisteredUser();
};

class FeedbackandReview //Feedback and Review Class
{
    private: //Attributes
        int U_ID;
        int F_no;
        char U_email;
        char feed;
        char U_name;        
        
    public: //Method
        FeedbackandReview();

        FeedbackandReview(int pU_ID, int pF_no, char pU_mail, char pfeed, char pU_name);

        void setUserID(int id);
        void setFeedNo(int fno);
        void setUserEmail(char email);
        void setUserFeed(char feed); 
        void setUserName(char name);
        
        ~FeedbackandReview();
};

//Implementig Methods

//Registered User Class Methods 

RegisteredUser::RegisteredUser() 
{
    U_ID = 0;
    strcpy(U_name,"");
    strcpy(U_email,"");
    U_telno = 0;
    strcpy(U_add,"");
    U_dob = 0;
    strcpy(l_pword,"");
}
RegisteredUser::RegisteredUser(int pU_ID, char pU_name, char pU_email, int pU_telno, char pU_add, int pU_dob, char pl_pword)
{
    U_ID = pU_ID;
    strcpy(U_name,pU_name);
    strcpy(U_email,pU_email);
    U_telno = pU_telno;
    strcpy(U_add,pU_add);
    U_dob = pU_do;
    strcpy(l_pword,pl_pword);
}
void RegisteredUser::setUserID(int id)
{
    
}

void RegisteredUser::setUserName(char name)
{
    
}

void RegisteredUser::setUserEmail(char email)
{
    
}

void RegisteredUser::setUserTelno(int telno)
{
    
}

void RegisteredUser::setUserAdd(char add)
{
    
}

void RegisteredUser::setUserDoB(int dob)
{
    
}

void RegisteredUser::setUserLpword(char pword)
{
    
}

RegisteredUser::~RegisteredUser()
{
    cout<<"Destructor Executed"<<endl;
}

//Feedback and Review Class Methods

FeedbackandReview::FeedbackandReview()
{
    U_ID = 0;
    F_no = 0;
    strcpy(U_email,"");
    strcpy(feed,"");
    strcpy(U_name,"");
}

FeedbackandReview::FeedbackandReview(int pU_ID, int pF_no, char pU_mail, char pfeed, char pU_name)
{
    U_ID = pU_ID;
    F_no = pF_no;
    strcpy(U_email,pU_mail);
    strcpy(feed,pfeed);
    strcpy(U_name,pU_name);
}

void FeedbackandReview::setUserID(int id)
{
    
}

void FeedbackandReview::setFeedNo(int fno)
{
    
}

void FeedbackandReview::setUserEmail(char email)
{
    
}

void FeedbackandReview::setUserFeed(char feed)
{
    
}

void FeedbackandReview::setUserName(char name)
{
    
}

FeedbackandReview::~FeedbackandReview()
{
    cout<<"Destructor Executed"<<endl;
}
