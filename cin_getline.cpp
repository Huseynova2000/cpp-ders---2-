#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string fullname;
    string surname;

    getline(cin, fullname);

    getline(cin, surname);

    cout << "sizin tam adiniz " << fullname << endl;
    cout << "soyadinizi daxil edin" << surname << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string fullname;
    string ata;
    string yash;
    

    getline (cin, fullname);
    
cout << "adiniz ve soyadiniz  " << fullname << endl;
    
    getline (cin, ata );
    
 cout << "ata adi " << ata << endl;

    
    getline (cin,yash);   
    
 cout << "yashiniz"<< yash <<endl;
 
 
        
    return 0;
}