#include <iostream>
#include <string>

using namespace std;

int main() {


 string x;


 cin >> x;



if(x >= 1 && x <= 10000000000000000000){


                return 1;


     }




 string x;


 cin >> x;


  for (int i = 0; i < x.length(); ++i) {


     int d = x[i] - '0';

      int transformed = 9 - d;



     if (i == 0) {



          if (d > transformed) {


            x[i] = '0' + transformed;


  }
        } else

 {



           if (d > transformed) {


          x[i] = '0' + transformed;


         }
        }
    }

    cout << x << endl;


   return 0;
}
