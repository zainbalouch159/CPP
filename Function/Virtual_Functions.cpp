#include <iostream>
#include <string>
using namespace std;
class CWH{
	protected:
		string title;
		float rating;
		public:
			CWH (){
				
			}
 virtual void display()=0;
};
class CWHVIDEO:public CWH{
	float videolength;
	public:
		CWHVIDEO(float vl){
			videolength = vl;
		}
		void display(){
			cout<<"Length of this video is "<<videolength<<" minutes"<<endl;
		}		
};
class CWHTEXT: public CWH{
	int word;
	public:
		CWHTEXT( int wc){
			word=wc;
		}
			void display(){
			cout<<"No of words in this text tutorial is: "<<word<<" words"<<endl;
		}				
};
int main(){
int word=500;
string title="Django tutorial";
float vlen = 4.56;
float rating = 4.89;


CWHVIDEO djvideo( vlen);
djvideo.display();;
CWHTEXT djtext(word);
djtext.display();
//CWH* tuts[3];
//tuts[0]= &djvideo;
//tuts[1]=&djtext;
//tuts[2]=&dj;
//tuts[0]->display();
//tuts[1]->display();
//tuts[2]->display();

return 0;
}

