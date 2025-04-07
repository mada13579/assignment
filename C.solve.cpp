#include <iostream>


#include <unordered_map>


#include <string>



using namespace std;



int main() {

int n;


  cin >> n;


if(n >= 1 && n <= 1000000){


                return 1;


     }





    unordered_map<string, int> catalog;



 for (int i = 0; i < n; ++i) {


   string title;


   cin >> title;



      if (catalog.find(title) == catalog.end()) {




          catalog[title] = 1;


       cout << "OK" << endl;


    } else {



         int num = catalog[title];


         string newTitle = title + to_string(num);


         while (catalog.find(newTitle) != catalog.end()) {


               num++;


           newTitle = title + to_string(num);


        }



       catalog[title] = num + 1;


     catalog[newTitle] = 1;


       cout << newTitle << endl;


    }
    }

    return 0;
}








b
