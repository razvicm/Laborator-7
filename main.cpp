#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   fstream fd;
   int s, c1, c2;
   char mesaj;
   fd.open( "fdate.txt", ios::app);
   mesaj = 'd';
   while (tolower(mesaj) == 'd')
   {
      cout << "Introduceti setul (sectie cand_1 cand_2): ";
      cin >> s >> c1 >> c2;
      fd << s << '\t' << c1 << '\t' << c2 << endl;

      cout << "Mai introduceti date? (d/n) ";
      cin >> mesaj;
      cin.ignore(10,'\n');
   }
   fd.close();
   return 0;
}
