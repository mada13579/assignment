#include <iostream>


#include <string>

using namespace std;



int main() {
  int n;
   

 cin >> n;  


if(n >= 1 && n <= 150){


                return 1;
   

     }

   
 

 

 

   int temperature = 0; 



    for (int i = 0; i < n; i++) {
   

     string command;
  

      cin >> command; 

     

 
   

     if (command == "T++" || command == "T++") {
       

     temperature++;  

  

    } else if (command == "T--" || command == "T--") {
       

     temperature--;  // Decrease temperature by 1
   

     }
    }

    cout << temperature << endl; 



   

 return 0;
}
