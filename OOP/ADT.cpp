#include <iostream>
using namespace std;
class Myarray{
    public:
    int size;
    int used=0;
    int *ptr;
    Myarray( int sizee){
        size=sizee;
        ptr=new int[size];
    }
    void newvalue(){
        int ele;
        cout<<"How many elements you want to enter"<<endl;
        cin>>ele;
        if (used+ele>size)
        {
            cout<<"\nYou reached out your array size"<<endl;
        }
        else{
       for(int i=used; i<used+ele;i++){
        cout<<"Enter value"<<endl;
        cin>>ptr[i];
    }
    used+=ele;
}
   }
   void show(){

    if (used==0){
        cout<<"\nArray is empty\n";
    }
    else{
    for (int i = 0; i < used; i++)
    {
        cout<<ptr[i]<<",";
    }
   }
}
};
int main() {
    int size,used,choice;
    cout<<"\nTotal size of array?"<<endl;
    cin>>size;
    
    Myarray a(size);
    
    do{
        cout<<"\n<-------------------------------------->\n"
            <<"\n1: Enter values\n"
            <<"2: Show values\n"
            <<"3: Show how much array has been used\n"
            <<"4: Show total array size\n"
            <<"5: Exit\n"
            <<"\n<-------------------------------------->\n";
            cin>>choice;
            switch (choice)
            {
            case 1:
                a.newvalue();
                break;
            case 2:
            a.show();
            break;
            case 3:
            cout<<"\nYou used "<<a.used<<" out of "<<a.size<<endl;
            break;
            case 4:
            cout<<"\nYour total array size is "<<a.size<<endl;
            break;
            case 5:
            cout<<"\nProgram exit successfully\n";
            break;
            default:
            cout<<"\nPress betweeen 1-5 only\n";
                break;
            }
    } while (choice!=5);
    
    
    return 0;
}
