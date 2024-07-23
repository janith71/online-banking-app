#include<iostream>
using namespace std;

string account_number[5]={"4810055992","4962006345","4753008741","3345256348","4954083265"};
string customer_name[5]={"Tom Lara","Simon David","Ben Stacy","John Mark","Cooper Jake"};
string nic_number[5]={"965622411V","931122456v","927391333V","961343267V","967591530V"};
string account_type[5]={"saving","current","fixed","current","saving"};
double balance[5]={153000.00,250000.00,85000.00,62000.00,178000.00};

void display_menu()
{
    cout<<"1-customer details"<<endl;
    cout<<"2-search account details"<<endl;
    cout<<"3-deposit"<<endl;
    cout<<"4-withdrawal"<<endl;
    cout<<"5-interest"<<endl;
}

void display_accounts()
{
    cout<<"account-number\t"<<"customer-name\t"<<"nic-number\t"<<"account-type\t"<<"balance\t"<<endl;
    
    
    for(int i=0; i<5; i++)
    {
       cout<<account_number[i]<<"\t"<<customer_name[i]<<"\t"<<nic_number[i]<<"\t"<<account_type[i]<<"\t\t"<<balance[i]<<endl;
    }
}
void search_account()
{
    string nic;
    int flag=0;

    cout<<"enter nic number :";
    cin>>nic;

    for(int i=0; i<5; i++)
    {
        if(nic==nic_number[i])
        {
            cout<<"account-number\t"<<"customer-name\t"<<"nic-number\t"<<"account-type\t"<<"balance\t"<<endl;
            cout<<account_number[i]<<"\t"<<customer_name[i]<<"\t"<<nic_number[i]<<"\t"<<account_type[i]<<"\t\t"<<balance[i]<<endl;
            flag=1;
            break;

        }
        if(flag=0)
        {
            cout<<"sorry,we dont have any account for this nic number"<<endl;
        }
    }
}
void deposit_amount()
 {
    string acc;
    double amount;
    int flag=0;

    cout<<"enter account number :";
    cin>>acc;

    cout<<"enter deposit amount :";
    cin>>amount;

    for(int i; i<5; i++)
    {
        if(acc==account_number[i])
        {
            balance[i]=balance[i]+amount;
            cout<<"account-number\t"<<"customer-name\t"<<"nic-number\t"<<"account-type\t"<<"balance\t"<<endl;
            cout<<account_number[i]<<"\t"<<customer_name[i]<<"\t"<<nic_number[i]<<"\t"<<account_type[i]<<"\t\t"<<balance[i]<<endl;
            flag=1;
            break;

        }
        if(flag=0)
        {
            cout<<"error";
        }
    }
 }
void withdraw_amount()
{
    string acc;
    double withdraw;
    int flag=0;

    cout<<"enter account number :";
    cin>>acc;

    cout<<"enter amount of withdraw :";
    cin>>withdraw;

    for(int i=0; i<5; i++)
    {
        if(acc==account_number[i] && balance[i]>10000)
        {
            balance[i]=balance[i]-withdraw;
            cout<<"account-number\t"<<"customer-name\t"<<"nic-number\t"<<"account-type\t"<<"balance\t"<<endl;
            cout<<account_number[i]<<"\t"<<customer_name[i]<<"\t"<<nic_number[i]<<"\t"<<account_type[i]<<"\t\t"<<balance[i]<<endl;
            flag=1;
            break;
        }
        if(flag==0)
        {
            cout<<"the balance is not sufficient to withdraw"<<endl;
            break;
        } 
    }


}
int main()
{
    
   char x; 
   do
   {
   display_menu();
   int num;
   cout<<"enter your choice :";
   cin>>num;
   switch(num)
   {
    case 1:
      display_accounts();
    break;
    case 2:
      search_account();
    break;
    case 3:
      deposit_amount();
    break;
    case 4:
      withdraw_amount();
    break;
    default:
      cout<<"invalid input....error....";
    }
    cout<<endl;
    
    cout<<"would you like to use this app once more..enter(Y/y)"<<endl;
    cin>>x;
   }
   while(x=='y' || x=='Y');

   cout<<"we appreciate you using this app";

   


   return 0; 
}