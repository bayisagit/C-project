#include <iostream>
using namespace std;
/*int addnumbers(int,int);
double addnumbers(double,double);
int main(){
    cout<<"the sum of the two numbers is: "<<addnumbers(10,20);
    cout<<"the sum of the two numbers is: "<<addnumbers(10.5,20.6);

return 0;}
int addnumbers(int a,int b){
    return a+b;
    }
    double addnumbers(double a,double b){
    return a+b;
    }
    void thisFunction(int);
    int m2;
    int main(){
    int m1;
    m1=1;
    m2=21;
    thisFunction(m1);
    cout<<m1<<" "<<m2<<endl;
    return 0;
    }
    void thisFunction(int a){
        int m2;
        m2=a+9;
        a++;
        cout<<a<<" "<<m2<<endl;
    }
    void arrayread(int arr[],int siz);
    void arrayprint(int arr[5],int siz);
    double getaverage(int arr[5]);
    int main (){
        int balance[5];
        arrayread(balance,5);
        arrayprint(balance,5);
        double ave=getaverage(balance);
        cout<<"\n\n the average of the numbers is "<<ave;
        return 0;
    }
    void arrayread(int arr[],int siz){
        for (int i=0;i<siz;++i){
            cout <<"enter the "<<i+1<<" element: ";
            cin>>arr[i];
        }
    }
    void arrayprint(int arr[],int siz){
        cout<<"\n the arrays element are ";
        for (int i=0;i<siz;++i){
            cout <<arr[i]<<" ";
        }

    }
    double getaverage(int arr[5]){
        int sum=0;
        for (int i=0;i<5;++i){
                sum +=arr[i];

        }
        return(double (sum)/5);


    }*/
    int biggest(int a,int b,int c){
         if (a>b&&a>c)
            {
            return a;
            }

         else if(b>c){

            return b;
     }

         else
         {
            return c;
         }
     }

    int main() {
        int x,y,z;
        cout<<"enter the three numbers: "<<endl;
        cin>>x>>y>>z;

        int biggest(int x,int y,int z);
        int maxnumber=biggest(x,y,z);
        cout<<"the largest number is: "<<maxnumber;



    return 0;
     }
