#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
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
        cin.get();
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
        exit(1);
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
    cin>>choice;
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
    m:
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
    else{
        data>>c>>n>>p>>d;

        while(!data.eof()){
            if ( c == pcode){
                token++;
            }
            data>>c>>n>>p>>d;

        }
        data.close();

    if ( token == 1){
        cout<<"This product code already exists, Please intialize new code."<<endl;
        goto m; //Incase of duplicacy return to menu seeking new product code
    }
    else{
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pname<<" "<<pcode<<" "<<price<<" "<<discount<<"\n";
        data.close();
    }
        cout<<"Record Inserted"<<endl;
    }
}

void shopping :: edit(){
    fstream data,data1;
    int pkey,token=0;
    int c;
    float p,d;
    string n;

    cout<<"Modify the record"<<endl;
    cout<<"Enter the product Code: ";
    cin>>pkey;

    data.open("database.txt",ios::in);

    if(!data){
        cout<<"File doesnt exist"<<endl;
    }
    else{
        data1.open("database1.txt",ios::app|ios::out);

        data>>pcode>>pname>>price>>discount;
        while(!data.eof()){
            if(pkey == pcode){
                cout<<"Enter New Product code: ";
                cin>>c;
                cout<<"Enter name of product: ";
                cin>>n;
                cout<<"Enter Price of product: ";
                cin>>p;
                cout<<"Enter Discount: ";
                cin>>d;

                data<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout<<"Record Edited"<<endl;
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";

            }
            data>>pcode>>pname>>price>>discount;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token == 0){
            cout<<"Record not found"<<endl;
        }

    }
}

void shopping :: rem(){
    fstream data,data1;
    int pkey;
    int token =0 ;
    cout<<"Delete Product\nEnter product code: ";
    cin>>pkey;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"File odesnt exist"<<endl;
    }
    else{
        data1.open("database1.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>discount;
        while(!data.eof()){
            if (pcode == pkey)
            {
                cout<<"Deleted succesfully"<<endl;
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";

            }
            data>>pcode>>pname>>price>>discount;

        }
        data.close();
        data1.close();
        remove("databse.txt");
        rename("databse1.txt","databse.txt");

        if(token == 0){
            cout<<"File not found"<<endl;
        }

    }
}

void shopping :: list(){
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"Product Code\nPname\nPrice"<<endl;
    data>>pcode>>pname>>price>>discount;

    while(!data.eof()){
        cout<<pcode<<"\t"<<pname<<"\t"<<price<<"\n";
        data>>pcode>>pname>>price>>discount;

    }
    data.close();

}

void shopping :: receipt(){
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0,dis=0,total=0;

    cout<<"Receipt"<<endl;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"Empty Database"<<endl;
    }
    else{
        data.close();
        list();
        cout<<"Please place your order"<<endl;
        do{
            m:
            cout<<"Enter product code: ";
            cin>>arrc[c];
            cout<<"Enter quantity: ";
            cin>>arrq[c];
            for(int i=0;i<c;i++){
                if(arrc[c] == arrc[i]){
                    cout<<"Duplicate product code, please try again"<<endl;
                    goto m;
                }
            }
                c++;
                cout<<"Want to buy more? ";
                cin>>choice;
            }
            while(choice == 'y');

            cout<<"-----Receipt------"<<endl;
            cout<<"product code\tProduct name\tProduct Quantity\tPrice\tAmount\tAmount with discount"<<endl;

            for (int  i = 0; i < c; i++)
            {
                data.open("database.txt",ios::in);
                data>>pcode>>pname>>price>>discount;
                while(!data.eof()){
                    if(pcode == arrc[i]){
                        amount = price * arrq[i];
                        dis = amount - (amount*(dis/100));
                        total += dis;
                        cout<<"\n"<<pcode<<"\t"<<pname<<"\t"<<arrq[i]<<"\t"<<"\t"<<price<<"\t"<<amount<<"\t"<<dis;

                    }
                    data>>pcode>>pname>>price>>discount;
                }
            }
            data.close();
        }
        cout<<endl;
        cout<<"Total Amount"<<total;
    }

int main(){
    shopping s;
    s.menu();
}