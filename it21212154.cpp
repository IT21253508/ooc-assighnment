//Rochell Shanesh Costa
//IT21212154

#include <iostream>
#include <cstring>
using namespace std;

//Creating Classes

class Photo_Gallery //Class Photo Gallery
{

    private: //Attributes
    
        string P_name;
        int P_ID;
        char P_type[10];

    public: //Methods
    	
		Photo_Gallery();
		
        Photo_Gallery(string pP_name, int pP_ID, char pP_type);
        void setPhotoGalleryName (string name);
        void setID (int id);
        void setPhotoGalleryType (char type);
        
        ~Photo_Gallery();
};

class event //Class event 
{
    private: //Attributes
    	
        string E_name;
        int E_ID;
        char E_rype[20];
        string location;

    public:
        event();
        
        event (string peName, int pE_ID, char pE_type, string pLocation);
        void setEventName(string name);
        void setID(int id);
        void setEventType(char type);
        void setLocation(string loc);
        
        ~event();
        
};

class report //Class report
{
    private: //Attributes
    	
        string R_name;
        int R_ID;
        char R_type[10];
        int R_date;
        
    public: //Methods
    
        report();
        
		report(string pR_name, int pR_ID, char pR_type, int R_date);
        void setReportName(string name);
        void setID(int id);
        void setReportType(char type);
        void setDate(int date);
        
        ~report();
};

//Implementing Methods

//Bus Staff Class Methods

Photo_Gallery::Photo_Gallery()
{
	string str = (P_name, " "); 
	P_ID =0;
	strcpy (P_type, " ");
}

Photo_Gallery::Photo_Gallery(string pP_name, int pP_ID, char pP_type)
{
    string str = (P_name, pP_name); 
	P_ID =pP_ID;
	strcpy (P_type, pP_type);
}

void Photo_Gallery::setPhotoGalleryName(string name)
{
    
}

void Photo_Gallery::setID(int id)
{
    
}

void Photo_Gallery::setPhotoGalleryType(char type)
{
    
}

Photo_Gallery::~Photo_Gallery()
{
	cout<< "Destructor Executed" << endl;
}

event::event()
{
	string str = (E_name , " ");
    E_ID = 0;
    strcpy (E_type ," ");
    string str = (location, " ");
}

event::event(string peName, int pE_ID, char pE_type, string pLocation)
{
    string str = (E_name ,pE_name);
    E_ID = pE_ID;
    strcpy (E_type ,pE_type);
    string str = (location, pLocation);
}

void event::setEventName(string name)
{
    
}

void event::setID(int id)
{
    
}

void event::setEventType(char type)
{
    
}

void event::setLocation(string loaction)
{
    
}

event::~event()
{
	cout<< "Destructor Executed" << endl;
}

report::report()
{
	string str = (R_name, " ");
    R_ID = pR_ID;
    strcpy (R_type = " ");
    R_date = pR_date;
}

report::report(string pR_name, int pR_ID, char pR_type, int pR_date)
{
    string str = (R_name, pR_name);
    R_ID = pR_ID;
    strcpy (R_type = pR_type);
    R_date = pR_date;
}

report::setReportName(string name)
{
    
}

void report::setID(int id)
{
    
}

void report::setReportType(char type)
{
    
}

void report::setDate(int date)
{
    
}

report::~report()
{
	cout<< "Destructor Executed" << endl;
}

int main(void)
{
    Photo_Gallery *g1 = new Photo_Gallery();
    event *e1 = new event();
    report *r1 = new report();

    return 0;

}
