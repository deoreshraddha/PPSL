#include <iostream>
#include <vector>
using namespace std;

int main(){
     //Predefined list of numbers 
     vector <int> numbers ={12,7,9,4,20,15};
     
     //Variables to store sum,count of evens,and count of odds
     int sum=0,evenCount=0,oddCount=0;
     
     //Loop through the list to analyze numbers 
     for(int num:numbers){
        sum+=num;
        if(num%2==0){
        ++evenCount;
        }else{
        ++oddCount;
        }
     }
     
    //Calculate average 
    double average =static_cast<double>(sum)/numbers.size();
    
    //Display the results 
    cout <<"List of Numbers:";
    for(int num: numbers){
        cout <<num<<"  ";  
    }
    cout <<"\n\nAnalysis Results:"<<endl;
    cout <<"Sum:"<<sum<<endl;
    cout <<"Average:"<<average<<endl;
    cout <<"Count of Even Numbers:"<<evenCount<<endl;
    cout <<"Count of Odd Numbers:"<<oddCount<<endl;
    
    return 0;
}
  

   