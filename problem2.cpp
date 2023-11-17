#include<bits/stdc++.h>
using namespace std;
class Cricketer 
{
    public:
    int jersey_no;
    string country;
};
int main ()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kholi = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "India";
   kholi->jersey_no = dhoni->jersey_no;
   kholi->country = dhoni->country;
   delete dhoni;
   cout << kholi->jersey_no << " " << kholi->country << endl;
   
    
    return 0;
}