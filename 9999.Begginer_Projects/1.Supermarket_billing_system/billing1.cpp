#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class shopping{
    private:
    int pcode;
    float price;
    float discount;
    string pname;

    public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping ::menu(){
    m:
    int choice;
    string email;
    string password;

    cout<<"SuperMarket Main Menu"<<endl;
    cout<<"1.Administrator\n2.Buyer\n3.Exit"<<"\n";
    cout<<"Please choose your Login Access rights"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Please login with administrator credentials"<<endl;
        cout<<"Enter Email ID: ";
        getline(cin,email);
        cout<<"Enter password: ";
        getline(cin,password);

        if(email == "angad@gmail.com" and password == "12345678"){
            administrator();
        }
        else{
            cout<<"Invalid Administrator Credentials"<<endl;
        }
        break;
    
    case 2:
    {
        buyer();
    }

    case 3:
    {
        exit();
    }

    default: 
    {
        cout<<"Invalid Selection, Please select from available options"<<endl;
    }
    }
    goto m;
}

void shopping :: administrator(){
    m:
    int choice;
    cout<<"Administrator Menu"<<endl;
    cout<<"1.Add a Product\n2.Modify a Product\n3.Delete a Product\n4.Back to main menu"<<endl;
    cout<<"Please Enter your choice"<<endl;

    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
        case 4:
        menu();
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }

    goto m;
}

void shopping :: buyer(){
    m:
    int choice;
    cout<<"1.Buy a Product\n2.Back to main menu"<<endl;
    cout<<"Please Enter your choice"<<endl;

    cin>>choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }

    goto m;
}

void shopping :: add(){
    fstream data;
    int c,token=0;
    float p;
    float d;
    string n;

    cout<<"Add new Product\n1.Product Code of the product: ";
    cin >> pcode;
    cout<<"2. Enter name of the product: ";
    cin >> pname;
    cout<<"Price of product: ";
    cin >> price;
    cout<<"Discount on product: ";
    cin >> discount;    

    data.open("database.txt", ios::in);

    if (!data){
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pname<<" "<<pcode<<" "<<price<<" "<<discount<<"\n";
        data.close();
    }
}