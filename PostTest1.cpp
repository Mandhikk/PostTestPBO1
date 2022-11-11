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
};
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

int main()
{
    BasicTicket Ekonomi;
    PremiumTicket VIP;
    int Regoe = 23000;

    
    Ekonomi.setprice(Regoe);
    VIP.setprice(Regoe);
    Ekonomi.showharga();
    VIP.showharga();

}

