#include <iostream>

using namespace std;


class Tester
        {    public:
                            int x ;
                           static int var ;
                            Tester(int a) {   x = a ; }
                           static void myFunction(int a)
                                {
	                        Tester obj(9) ;       	// Line 1
	                        obj.x=a ;               // Line 2
                                    cout<<obj.x;
                                }
           };
           int Tester::var=0;
          void main()
          {
            Tester myT(7) ;
            Tester::myFunction(15);
            cout<<myT.x ;
            cout<<Tester::var<<endl ;        		// Line 3




      return 0;
}


/*void SWAP (int x , int y )
{
    int temp = x ;
    x = y;
    y = temp ;

}
void SWAP2 (int& x , int& y )
{
    int temp = x ;
    x = y;
    y = temp ;
    }


        ///class complex

class complxed {
    private :
    int img ;
    int real;

    public:
            ///set func
            void setReal (int R) {real=R;}

            void setImg (int I) {img=I;};

            int getReal(){return real;}

            int getImg (){return img ;}

          void print (){

            if (img == 0 && real ==0 )

            cout<<0<<endl;

            else if (img ==1 && real ==0)
                cout << "i" << endl;

            else if (img ==0 && real> 0 )
                cout << real << endl;

            else if (img > 0 && real > 0)
                cout << (real+img)<< "i" << endl;

                else if (img == -1&& real ==0)
                {
                    cout <<"-i"<<endl;
                }
            else if (img < 0 && real==0)
                cout << (real-img) << "-i" << endl;
                else {
                    cout<<real - img<<"i"<<endl;
                }
            }

            ///add func
                complxed add(complxed b)
            {
                complxed c3;
                c3.setReal( getReal() + b.getReal());
                c3.setImg(getImg() + b.getImg());
                return c3;
            }
            ///ctor
            complxed (){
            real = img =0;
            cout<<"constactor01"<<endl;
                }
            complxed (int N){
            real = img = N;
            cout<<"constactor02"<<endl;
            }
            complxed (int R , int I){
            real = R;
            img = I;
            cout<<"constactor03"<<endl;
            }

            complxed (const complxed& oldc)
            {
                real =oldc.real;
                img =oldc.img;
                cout<<"copy constractor \n";
            }
            ~complxed (){
            cout<<" deconstractor"<<endl;
            }
            ///copy ctor by value
            complxed sum (complxed L){
            complxed result;
            result.real =real+ L.real;
            result.img = img + L.img;
            return result;
            }
        };



            ///sub func
         complxed subtract(complxed a, complxed b)
        {

            complxed c3;
            c3.setImg(a.getImg() - b.getImg());
            c3.setReal(a.getReal() - b.getReal());

            return c3;
}

int main()
{
              ///copy ctor
     complxed a1,
             a2(0),
            a3(1,0);

          a1= a3.sum(a2);
        cout<<"copy ctor value" <<endl;
a1.print();
            ///swap value

            int x =5 ;
                int y = 15;
                cout << x << "defult "<< y << endl;
                SWAP(x ,y);
                    cout << x << "swap "<< y << endl;

            ///REfRANCE
                cout << x << " defult "<< y << endl;
                SWAP2(x ,y);
                cout << x << " swap "<< y << endl;



            ///get & set values
        complxed c1 ;
        int real , img;

        cout <<"set img value"<< endl;
        cin >> img ;
        c1.setImg(img);


        cout <<"set real value"<< endl;
        cin >> real ;
        c1.setReal(real);


        cout <<"values"<< endl;
        c1.print();


        complxed c2 ;
        int real2 , img2;
        cout <<"set img value2"<< endl;
        cin >> img ;
        c2.setImg(img);


        cout <<"set real valu2e"<< endl;
        cin >> real ;
        c2.setReal(real);


        cout <<"values"<< endl;
        c2.print();


        ///add & sub

        complxed c3add = c1.add(c2);
                c3add.print();

            complxed c3sub = subtract(c1, c2);
        c3sub.print();
            cout <<  endl;
            cout <<endl;
*/

