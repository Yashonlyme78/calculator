using namespace std;
#include <iostream>
int main(){
    
    for ( ; ; )
    {
        cout<<endl;
        cout<<endl;
        cout <<"Select which operation you wanna perform: "<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;
        cout<<"1. Addtion | 2. Subtraction | 3. Multiplication | 4. Division | 5. Exit  "<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;
        cout<<"Enter the number of operator: ";
        int a;
        cin>>a;
        if (a==1){
            int i2=0;
    
            cout<<"Enter amount of number you wanna add: "<<endl;
            int a;
            cin>>a; 
            for (int i=1 ; ; )
            {
                if (i<=a){
                    int i3;
                    cout<<"Enter a number"<<endl;
                    cin>>i3;
                    i2=i2+i3;
                    i++;
                }else{
                    break;
                }
            }
            cout<<"the sum is: "<<i2<<endl;
           
        }
        else if (a==2)
        {
            
            
    
            cout<<"Enter amount of number you wanna add: "<<endl;
            int a;
            cin>>a; 
            int i2=0;
            for (int i=1 ; ; )
            {
                if (i<=a){
                    int i3;
                    cout<<"Enter a number"<<endl;
                    cin>>i3;
                    i2=i2-i3;
                    i++;
                }else{
                    break
                    ;
                }
            }
            cout<<"the difference is: "<<i2<<endl;
           
        
         
        }
        else if (a==3)
        {
            cout<<"Enter amount of number you wanna add: "<<endl;
            int a;
            cin>>a; 
            int i2=1;
           for (int i=1 ; ; )
            {
                if (i<=a){
                   int i3;
                 cout<<"Enter a number"<<endl;
                  cin>>i3;
                 i2=i2*i3;
                    i++;
                }else{
                    break;
                }
            }
            cout<<"The multiplication is: "<<i2<<endl;
           
        
        }else if (a==4)
        {
            cout<<"Enter 1st number: ";
            int x1;
            cin>>x1;
            cout<<"Enter 2nd number: ";
            int x2;
            cin>>x2;
            int div=x2/x1;
            cout<<div<<endl;
        }else if (a==5)
        {
            cout<<"Thank you"<<endl;
            break;
        }
        else{
            cout<<"Enter from above options.";
        }
        
        
        
    }
    
}