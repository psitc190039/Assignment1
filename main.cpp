#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{



    //Global variable declaration
    cout<<"\a\a";
    double totalCost,totalAmountPaid,balance;
    //Question
     string ui="Yes";"yes";"YES";
     string tr="Yes";"yes";"YES";"NO";"no";"NO";
     int li=3;


    do{
   // Welcoming message
    cout<<endl;
    cout<<" WELCOME TO INF SUPERMARKET "<<endl;
    cout<<"         --------------------------     "<<endl;

    //Declarations
    string contact= "549887964";
    string loc="KWAHU-NKAWKAW E/R";

    cout<<"CONTACT US: "<<"0" <<contact<<"        "<<"LOCATE US @:"<<loc<<endl;

    //For spacing
    cout<<endl;
    cout<<"Please, obey what you will be asked to do here. "<<endl;
    cout<<endl;

    cout<<"Enter your full  name: "<<endl;
    string name1;
    getline(cin,name1);

    cout<<endl;

    //Things done at the supermarket
    cout<<"Two things are done in the company but at the moment option one only works: "<<endl;
    cout<<"1. Purchasing an item"<<endl;
    cout<<"2. Make enquirers"<<endl;

       // Name of the customer

     int option;
    cout<<"Select an option"<<endl;
    cin>>option;







    //Items been sold
    cout<<"The items been sold and prices are: "<<endl;
    cout<<"ITEMS      |   PRICES"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"A.Printer: |   40CEDIS "<<endl;
    cout<<"B.Phone    |   80CEDIS  "<<endl;
    cout<<"C.Table    |   30CEDIS  "<<endl;

    //For spacing
    cout<<endl;


    // VAT
    const double vat=0.12;

    //Customer ID
    cout<<"Please enter your Unique ID in numbers"<<endl;
    int ID;
    cin>>ID;

    //For spacing
     cout<<endl;
     //strings
     string print1= "Printer";
     string phone1= "Phone";
     string table1= "Table";

     // Demand of customer
    cout<<"What do you want to buy? (One at a time for now). Please, type the name of the item to avoid any inconveniences"<<endl;
    string buy;
    cin>>buy;

    //For spacing
    cout<<endl;




    // Quantity demanded
    cout<<"Can we know the quantity you like to buy? "<<endl;
    int quantity;
    cin>>quantity;

    //For spacing
    cout<<endl;

    //Constant prices
    double printPrice=40;
    double phonePrice=80;
    double tablePrice=30;

    cout<<"How much do you have on you? "<<endl;
    double moneyNow;
    cin>>moneyNow;

    //For spacing
    cout<<endl;



    if(moneyNow<printPrice || moneyNow<phonePrice || moneyNow<tablePrice){
        cout<<"#####Your money can't buy the items you need just load your wallet!! BECAUSE YOU OWE####" <<endl;
        cout<<"Do you want to try again??"<<endl;
        cin>>tr;

        //For spacing
        cout<<endl;



    }


   else if(buy=="Printer" || buy=="printer" || buy=="PRINTER"){

      totalCost=(quantity*printPrice);
      cout<<"The total cost is: "<< totalCost<<endl;
      totalAmountPaid=totalCost+vat;
      cout<<"Total amount to be paid with vat: "<<totalAmountPaid<<" Cedis"<<endl;
      balance=moneyNow-totalAmountPaid;
      cout<<"Your balance after payment: "<<fixed<<balance<<" Cedis"<<endl;

      cout<<"** RECEIPT **"<<endl;
      cout<<"NAME OF CUSTOMER: "<<setw(4)<<name1<<endl;
      cout<<"UNIQUE ID: "<<setw(10)<< ID<<endl;
      cout<<"ITEM BOUGHT: "<<setw(12)<<buy<<endl;
      cout<<"QUANTITY BOUGHT: "<<setw(2)<<quantity<<endl;
      cout<<"VAT AMOUNT: "<<setw(10)<<vat<<endl;
      cout<<"TOTAL COST: "<<fixed<<setw(8)<<totalCost<<" Cedis"<<endl;
      cout<<"TOTAL AMOUNT PAID: "<<fixed<<setw(5)<<totalAmountPaid<<" Cedis"<<endl;
      cout<<"BALANCE: "<<fixed<<setw(16)<<balance<<" Cedis"<<endl;
      cout<<"THANK YOU FOR TRANSACTING WITH US"<<endl;
      cout<<endl;

      cout<<"Do you want to buy again??"<<endl;
      cin>>ui;
      cout<<endl;

    }


     else if(buy=="Phone" || buy=="phone" || buy=="PHONE"){

      totalCost=(quantity*phonePrice);
      cout<<"The total cost is: "<< totalCost<<endl;
      totalAmountPaid=totalCost+vat;
      cout<<"Total amount to be paid with vat: "<<totalAmountPaid<<endl;
      balance=moneyNow-totalAmountPaid;
      cout<<"Your balance after payment: "<<fixed<<balance<<endl;

      //For spacing

      cout<<"** RECEIPT **"<<endl;
      cout<<"NAME OF CUSTOMER: "<<setw(4)<<name1<<endl;
      cout<<"UNIQUE ID: "<<setw(10)<< ID<<endl;
      cout<<"ITEM BOUGHT: "<<setw(12)<<buy<<endl;
      cout<<"QUANTITY BOUGHT: "<<setw(2)<<quantity<<endl;
      cout<<"VAT AMOUNT: "<<setw(10)<<vat<<endl;
      cout<<"TOTAL COST: "<<fixed<<setw(8)<<totalCost<<" Cedis"<<endl;
      cout<<"TOTAL AMOUNT PAID: "<<fixed<<setw(5)<<totalAmountPaid<<" Cedis"<<endl;
      cout<<"BALANCE: "<<fixed<<setw(16)<<balance<<" Cedis"<<endl;
      cout<<"THANK YOU FOR TRANSACTING WITH US"<<endl;
      cout<<endl;

      cout<<"Do you want to buy again??"<<endl;
      cin>>ui;
      cout<<endl;


    }

       else if(buy=="Table" || buy=="table" || buy=="TABLE"){

      totalCost=(quantity*tablePrice);
      cout<<"The total cost is: "<< totalCost<<endl;
      totalAmountPaid=totalCost+vat;
      cout<<"Total amount to be paid with vat: "<<totalAmountPaid<<endl;
      balance=moneyNow-totalAmountPaid;
      cout<<"Your balance after payment: "<<fixed<<balance<<" Cedis"<<endl;

      cout<<"** RECEIPT **"<<endl;
      cout<<"NAME OF CUSTOMER: "<<name1<<endl;
      cout<<"UNIQUE ID: "<< ID<<endl;
      cout<<"ITEM BOUGHT: "<<buy<<endl;
      cout<<"QUANTITY BOUGHT: "<<quantity<<endl;
      cout<<"VAT AMOUNT: "<<vat<<endl;
      cout<<"TOTAL COST: "<<fixed<<totalCost<<" Cedis"<<endl;
      cout<<"TOTAL AMOUNT PAID: "<<fixed<<totalAmountPaid<<" Cedis"<<endl;
      cout<<"BALANCE: "<<fixed<<balance<<" Cedis"<<endl;
      cout<<"THANK YOU FOR TRANSACTING WITH US: Message"<<endl;
      cout<<"Do you want to buy again??"<<endl;
      cin>>ui;
      cout<<endl;



    }


    else{
        cout<<"Obey simple instructions"<<endl;
    }


     } while((ui=="Yes" || ui=="yes" || ui=="YES") && (tr=="Yes" || tr=="yes" || tr=="YES") && (li<=3) );
     cout<<"Thank you for coming"<<endl;





















    return 0;
}
