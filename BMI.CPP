#include<iostream>
 using namespace std;

 int main()
 {
      float weight,height,bmi;
      cout <<"weight(kg) , height (m)"<<endl;
      cin >>weight >> height;
      bmi= weight/height*height ;
      cout << "bmi"<<bmi<<endl;

       if (bmi>18.5)
       {
           cout<<"under weight";
       }

      else if (bmi>25)
      { 
          cout<<" over weight";
      }
      else
      {
           cout<<"normal";
      }
 }