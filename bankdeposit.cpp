 #include <iostream>
using namespace std;
class bankdeposit{
	int principal;
	int year;
	float interestrate;
	float returnvalue;
	public:
//		bankdeposit(){}
		bankdeposit(int p, int y, float r);
		bankdeposit(int p, int y, int r);
		void show();
};
bankdeposit ::bankdeposit(int p, int y, int r){
	principal=p;
	year=y;
	interestrate=float(r)/100;
	returnvalue=principal;
	for(int i=0; i<y; i++){
		returnvalue=returnvalue*(1+interestrate);
	}
}
void bankdeposit ::show(){
	cout<<"Apna loan lia hai "<<principal <<endl
	<<year<<" saal bad apko dena hoga total "<<returnvalue<<" total interest upar laga hai "<<returnvalue-principal;
}

int main(){
int p, y, r;
float R;
cout<<"Kitna loan chia?"<<endl;
cin>>p;
cout<<"Kitna saal ka lia chia?"<<endl;
cin>>y;
cout<<"Kitna interest rate pr chia?"<<endl;
cin>>r;
bankdeposit b(p,y,r);
 b.show();
 b.a
return 0;
}

