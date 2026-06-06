#include <iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
class vect{
    public:
    vector<int> arr;
    void input(){
        int n,v;
        cout<<"Kitna data enter krna hai?"<<endl;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cout<<"\n<---("<<i+1<<")--->\n"
                <<"Enter value"<<endl;
            cin>>v;
            arr.push_back(v);
        }
        cout<<"\nValues added successfully"<<endl;
    }
    void show(){
        cout<<"\n<------------------>\n";
        if(arr.empty()){
            cout<<"Vector is empty\n";
            cout<<"<------------------>\n";
            return;
        }
        for (int value:arr){
            cout<<value<<",";
        }
        cout<<"\n<------------------>\n";
    }
    void LoadFromFile(){
        arr.clear();
        ifstream file("data.text");
        int x;
        if(!file){
            cout<<"File not found"<<endl;
            return;
        }
        while(file>>x){
            arr.push_back(x);
        }
        file.close();
    }
    void SaveToFile(){
        ofstream file("data.text");
        for(int value:arr){
            file<<value<<" ";
        }
        file.close();
    }
    void binary_search(){
        if (arr.empty()) {
        cout << "Vector is empty, nothing to search!" << endl;
        return;
    }
        int element;
        int size=arr.size();
        cout<<"Which number you want to search?"<<endl;
        cin>>element;
        int low, mid,  hi gh;
        low=0;
        high=size-1;
        while(low<=high){
            mid=(low+high)/2;
            if(element==arr[mid]){
                cout<<element<<" found at index "<<mid+1<<endl;
                return;
            }
            if(element<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       
            cout<<"Not founded"<<endl;
        
    }
    
};
int main() {
    vect a;
    int choice;
    do
    {
        cout<<"\n<-------------------------->\n"
            <<"\n1: Enter values\n"
            <<"2: Show Values\n"
            <<"3: Load values from file\n"
            <<"4: Save values to file\n"
            <<"5: binary search\n"
            <<"0: Exit program\n"
            <<"\n<-------------------------->\n"<<endl;
            cin>>choice;
        switch (choice)
        {
        case 1:
            a.input();
            break;
        case 2:
        sort(a.arr.begin(), a.arr.end());
        a.show();
        break;
        case 3:
        a.LoadFromFile();
        cout<<"Values load from file successfully\n";
        break;
        case 4:
        a.SaveToFile();
        sort(a.arr.begin(),a.arr.end());
        cout<<"Values save in file successfully\n";
        break;
        case 5:
        sort(a.arr.begin(),a.arr.end());
        a.binary_search();
        break;
        case 0:
        cout<<"You exit program successfully\n";
        break;
        default:
        cout<<"Invalid Input\n";
            break;
        }
    } while (choice!=0);
    cout<<"\n<-------------------------->"<<endl;
    return 0;
}
