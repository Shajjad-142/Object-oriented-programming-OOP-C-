//shajjad_shawon
//09-04-2023
//E-mail: 21225103142@cse.bubt.edu.bd (for any kind of information)
#include<iostream>
using namespace std;
class animal
{
    private:
              string a_t;
              int t;
    public:
              string n;
              string g;
              int c;
              int k;
              
    void setdata(string a_t,int t,string n,string g,int c,int k);
    
    void putdata()     {
                                cout<<"animal_type --> "<<a_t<<endl;
                                cout<<"total --> "<<t<<endl;
                                cout<<"name --> "<<n<<endl;
                                cout<<"gender --> "<<g<<endl;
                                cout<<"catagory --> "<<c<<endl;
                                cout<<"k --> "<<k<<endl;
                        }
};
void animal::setdata(string a,int b,string h,string e,int d,int f)
     {
           a_t=a;
           t=b;
           n=h;
           g=e;
           c=d;
           k=f;
     }
int main ()
            {
                animal o1;
                //o1.c=10;
                o1.setdata("mew",10,"cat","MALE",13,87 );
                o1.putdata();
                return 0;
            }
