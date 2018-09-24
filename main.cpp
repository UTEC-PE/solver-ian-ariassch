#include <iostream>
#include "Node.h"

using namespace std;

void menu() {
      system("cls");
      cout<<"==========================================================="<<endl;
      cout<<"\t\tPractica Operaciones"<<endl;
      cout<<"==========================================================="<<endl;

      //string str="7/4*((a+b)*a)+3";
    //  string str="7/4*((a+-+--b)*a)+3";
      string str="2+(3)";
     // string str="7/4*((a+b)^4*a)+3";
      cout<<search(str, '+');
}


int main(int argc, char const *argv[]) {
    menu();


    cout << "\nPress enter to continue ..."; 
    cin.get(); 
    return EXIT_SUCCESS;
}

