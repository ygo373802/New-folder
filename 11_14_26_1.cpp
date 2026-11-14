#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void process_name(ifstream& in_file, double& total)
{
   string name,count;
   double percent;
   in_file >> name >> count >> percent;
   if (in_file.fail()) { return; } 
   if (total > 0) { cout << name << " "; }
   total = total - percent;
}
int main()
{  
   ifstream in_file;
   string name;
   cin >> name;
   in_file.open(name);
   if (in_file.fail()) { return 0; } 
   double boy_total = 50;
   double girl_total = 50;
   while (boy_total > 0 || girl_total > 0)
   {
      int rank;
      in_file >> rank;
      if (in_file.fail()) { return 0; } 
      cout << rank << " ";
      process_name(in_file, boy_total);
      process_name(in_file, girl_total);
      cout << endl;
   }
   return 0;
}