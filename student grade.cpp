#include <iostream>
using namespace std;
int main ()
{
    cout<<"Enter the count of students : ";
   
    int n;
   
    cin>> n;
    
    for (int i=0 ; i<n ; i++){
	string name[n];
	
	cout<<"Enter student names : ";
	
	for (int i=0 ; i<n ; i++)
	
{	cin>>name[i];
}
    int grade[i];

    cout<<"Enter student Grade : ";
	
   	for (int i=0 ; i<n ; i++){
  
    cin>>grade[i];
    
}
	for (int i=0 ; i<n ; i++)
	
	cout<<endl<<name[i]<<" : "<<grade[i];
	
	
return 0;

}
}
	
