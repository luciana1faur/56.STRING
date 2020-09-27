#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Show the manipulation of a string: " << endl;
  cout << "----------------------" << endl;

  string txt = "welcome, w3resource";

  cout << "Sirul de cuvinte este: " << txt << endl;

  cout << "Lungimea sirului de caractere este: " << txt.length() << endl;
 
 cout << "Caracterul 0 al sirului este: " << txt.at(0) << endl;
  cout << endl;
 cout << "Caracterul 1 al sirului este: " << txt.at(1) << endl;
  cout << endl;
 cout << "Caracterul 0 al sirului (folosind matricea adica definind dimensiunea sirului de caractere) este: " << txt[0] << endl;
  cout << endl;
cout << "Caracterul 1 al sirului (folosind matricea adica definind dimensiunea sirului de caractere) este: " << txt[1] << endl;
  cout << endl;
cout << "Goleste sirul de caractere " << txt.empty() << endl;
  cout << endl;
cout << "Extrage din sirul de caractere incepand de la pozitia a 3-a, 4 caractere: " << txt.substr(3, 4) << endl;
  cout << endl;
cout << "Extrage din sirul de caractere incepand de la pozitia a 13-a, 6 caractere: " << txt.substr(13, 6) << endl;
  cout << endl;
cout << "Inlocuieste ceea ce extragi cu cuvantul 'went': " << txt.replace(3, 4, "went") << endl;
  cout << endl;
cout << "Inlocuieste ceea ce extragi cu cuvantul 'went': " << txt.replace(13, 6, "went") << endl;//Poti sa inlocuiesti si cu un sir mai mic decat ceea ce extragi
  cout << endl;
cout << "Adauga la sfarsitul sirului 'end': " << txt.append(" end") << endl;
  cout << endl;
cout << "Adauga la sfarsitul sirului ' end' folosind un operator: " << txt + " end" << endl;
  cout << endl;
cout << "Insereaza ' insert ' dupa a 3-a pozitie a sirului: " << txt.insert(3, " insert ") << endl;
  cout << endl;

  string txt1;
  txt1 = txt;
  cout <<"Noul text este: " << txt1 << endl;//Noul sir dupa toate operatiile efectuate si care se pastreaza 
  cout << endl;

  cout << "Introduce o propozitie: ";
  getline(cin, txt);//Trebuie trecut la fiecare citire de caractere (de ex o propozitie) cu spatii intre ele
  cout << "Propozitia este : " << txt << endl;
}