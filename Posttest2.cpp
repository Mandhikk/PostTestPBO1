#include <iostream>
#include<math.h>
#include<string>
using namespace std;

class BasicTicket
{
    protected:
        string nama;
        string departure;
        string arrival;
        int flightcode;
        double ticketprice;
        int ticketprices2;
    public:
        int getprice();
        void setprice(int);
        void showharga();
        
};
int BasicTicket::getprice()
{
    return ticketprice;
}
void BasicTicket::setprice(int rego)
{
    ticketprice = rego;
}
void BasicTicket::showharga()
{
    cout << "harga tiket basic ialah ="<<getprice()<<endl; 
}


class PremiumTicket:public BasicTicket
{
    public:
    int getprice();
    void setprice(int);
    void showharga();
    void showharga2();
    int getprice2();
    void setprice2(int);
};
int PremiumTicket::getprice2()
{
    return ticketprices2;
}
void PremiumTicket::setprice2(int regoa)
{
    ticketprices2 = regoa;
}

int PremiumTicket::getprice()
{
    return ticketprice;
}
void PremiumTicket::setprice(int rego)
{
    ticketprice = rego;
    ticketprice = rego+rego*10/100;
}
void PremiumTicket::showharga()
{
    cout << "harga tiket premium ialah ="<<getprice()<<endl; 
}

void PremiumTicket::showharga2()
{
    cout << "harga kedua tiket ="<<getprice()+getprice2()<<endl; 
    
}

int main()
{
    BasicTicket Ekonomi;
    PremiumTicket VIP;
    int Regoe = 23000;

    
    Ekonomi.setprice(Regoe);
    VIP.setprice(Regoe);
    Ekonomi.showharga();
    VIP.showharga();
    VIP.showharga2();
    //maaf pak belum sepenuhnya memahami overload
    
    
}

