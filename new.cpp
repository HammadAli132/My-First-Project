//This is a program written for a parking incharge in which he/she can keep the record of the vehicles and their types. Also, he/she can get the total amount collected from the vehicles owners and the total amount of the vehicles that are parked currently.//

#include<iostream>
using namespace std;
int main()
{
   char ch;
   int total=0,record=0,c=0,r=0,b=0;
   while (1)
   {
   if (record <= 50)    //IT IS THE TOTAL NUMBER OF PARKING LOTS IN THE PARKING AREA//
   {                 
      //MENU FOR THE PARKING INCHARGE//
   cout<<"****************************************************************************************************************************\n";
   cout<<"Press 'r' for rikshaw.\nPress 'R' for removal of rikshaw.\nPress 'c' for car.\nPress 'C' for removal of car.\nPress 'b' for bus.\nPress 'B' for removal of bus.\nPress 't' for total.\nPress 'd' for deleting the record.\n Input = ";
   cin>>ch;
   if (ch == 'r')    //FOR RIKSHAWS' ENTRANCES//
   {
      r = r + 1;
      total = total + 100;
      record = record + 1;
   }
   else if (ch == 'R')     //FOR RIKSHAWS' LEAVINGS//
   {
      r = r - 1;
      record = record - 1;
   }
   else if (ch == 'c')     //FOR CARS' ENTRANCES//
   {
      c = c + 1;
      total = total + 200;
      record = record +1;
   }
   else if (ch == 'C')     //FOR CARS' LEAVINGS//
   {
      c = c + 1;
      record = record - 1;
   }
   else if (ch == 'b')     //FOR BUSES' ENTRANCES//
   {
      b = b + 1;
      total = total + 300;
      record = record +1;
   }
   else if (ch == 'B')     //FOR BUSES' LEAVINGS//
   {
      b = b - 1;
      record = record - 1;
   }
   else if (ch == 't')     //FOR VIEWING THE TOTAL AMOUNT AND NUMBER OF VEHICLES//
   {
      cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
      cout<<"Total amount = "<<total<<endl;
      cout<<"Total number of vehicles parked = "<<record<<endl;
      cout<<"Total number of rikshaws = "<<r<<endl;
      cout<<"Total number of cars = "<<c<<endl;
      cout<<"Total number of buses = "<<b<<endl;
   }
   else if (ch == 'd')     //FOR DELETING THE RECORD OF TOTAL AMOUNT AND VEHICLES//
   {
      total = 0;
      record = 0;
      r = 0;
      c = 0;
      b = 0;
      cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
      cout<<"The record has been deleted.\n";
   }
   cout<<"****************************************************************************************************************************\n";
   }
   else 
   {
      cout<<"The parking lots are completely occupied and there is no space for an extra vehicle.\n";
   }
   }
   return 0;
}