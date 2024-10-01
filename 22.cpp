/*#include <iostream>
#include <fstream>
using namespace std;
/*
   void calc(char*p,char ch){
       int i,j=0,sizes;
       char ch1,str1[10];
       while (*p!='\0'){
        if(*p!=ch){
            ch1=*p;
            str1[j]=ch1;
            j++;
        }
        p++;
       }
       str1[j]='\0';
       cout<<"string="<<str1<<endl;


      }
      int main(){
          calc("engineering",'e');
return 0;
}

class sample{
puplic:
    long int n;
};
    int main(){
    sample x;
    while(x.n!=0){
        cout<<"enter the number:";
        cin>>x.n;
        cout<<"waw="<<x.n<<endl;

    }
    cout<<"stop"<<endl;
    return 0;
    }

int main(){
    char* p1="programming";
    cout<<p1<<endl;
    p1=p1+4;
    cout<<p1<<endl;
    p1+=2;
    cout<<p1<<endl;
    p1=p1-2;
    cout<<p1<<endl;
    cout<<p1++<<endl;

struct num{
    int x;
    float y;
};
int main(){
    struct num*ptr;
    num n1;
    ptr=&n1;
    (*ptr).x=10;
    (*ptr).y=100.567;
    cout<<ptr->x;
    cout<<ptr->y;
}

void num(int&,int);
int x=10;
int main(){
int x=20,y=30;
cout<<x<<endl;
cout<<"the answer is\n";
num(x,y);
cout<<x<<endl;
cout<<y<<endl;

void test6(int x,int y, int z){
x=15,y=20,z=25;
int result=x>y&&x>z?++x:(y>z?y:z++);
cout<<"result="<<result;
cout<<"z="<<z<<"and x="<<x<<"and y="<<y;
}
int main(){
    int x,y,z;
    test6(x,y,z);
}
#include <iostream>

#include <cmath>

// Function to compute the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to compute the approximation of e
double approximateE(int n) {
    double e = 1.0;
    for (int i = 1; i <= n; i++) {
        e += 1.0 / factorial(i);
    }
    return e;
}

int main() {
    int n = 10; // Number of terms to use in the approximation
    double e_approx = approximateE(n);
    std::cout << "Approximation of e using " << n << " terms: " << e_approx << std::endl;
    std::cout << "Actual value of e: " << M_E << std::endl;
    std::cout << "Difference: " << std::fabs(e_approx - M_E) << std::endl;
    return 0;
}

int userfunc(int nol, int&no2){
cout<<"In function nol = "<<nol<<" no2="<<no2<<endl;
{ int nol = no2;
cout<<"In function again nol "<<nol<<" no2 = "<<no2<<endl;
}
no2++;
cout<<"In function outside branch nol="<<nol<<" no2 = "<<no2<<endl;
return no2;
}
int main() {
int no1=6,no2=5;
int nol=userfunc(no1,no2);
cout<<"In main nol = "<<nol<<" no2 "<<no2<<endl;
}

void test(char s1[], char s2[]) {
    int i = strlen(s1);
    for (int j = 0; s2[j] != '\0'; i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    cout << endl << s1 << endl << s2;
}

int main() {
    char s1[20] = "software"; // Increase the size to accommodate the concatenated string
    char s2[] = "Engineering"; // Remove the size specification
    test(s1, s2);
}

int main(){
   ofstream an("try.txt");
   if(an.is_open()){
    cout<<"the file is opened"<<endl;
   }
   an<<"what is your name";
}

#include<iostream>
using namespace std;

class Test
{
  protected:
    int x;
  public:
    Test (int i):x(i) { }
    void fun() const  { cout << "fun() const " << endl; }
    void fun()        {  cout << "fun() " << endl;     }
};

int main()
{
    Test t1 (1);
    const Test t2 (8);
    t1.fun();
    t2.fun();
    return 0;
}
#include <iostream>
using namespace std;

int fun(int=0, int = 0);

int main()
{
  cout << fun(5);
  return 0;
}
#include <iostream>
using namespace std;
void square (int *x, int *y)
{
	*x = (*x) * --(*y);
}
int main ( )
{
	int number = 30;
	square(&number, &number);
	cout << number;
	return 0;
}

#include <iostream>

struct check {
    int val;
    int getval() {
        return val;
    }
};

int main() {
    check c;
    c.val = 2;
    std::cout << c.getval();
    return 0;
}
/*
#include <iostream>
using namespace std;
int def(int a=9,int b=2,int c){
    return (a+b+c);
}
int main(){
    cout<<def(10);
    return 0;
}


#include <iostream>
using namespace std;
template <class T,class U>
class check{
T x;
U y;
puplic:
    check(){
    cout<<"A construction has been called"<<endl;
    }
    void swapp(T x,T y){
        T v = x;
        x=y;
        y=v;
    }
    };
    int main(){
        check<char,char>a;
        check<int,double>b;

    }
    */
    #include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream man;
    man.open("quit.txt", ios::in | ios::out);
    if (man.is_open()) {
        cout << "the file opened successfully:" << endl;
    } else {
        cout << "the file is not opened:" << endl;
    }
    man << "my name bayisa daba gutu dhiba tullu turo xanqii kooyyee i ama a software engineering student" << endl;
    man.seekg(24, ios::beg);
    char c;
        man >> c;
        cout << "The character at the middle of the last line is: " << c << endl;

    // Reopen the file in read mode to see the output of seekg
    man.close();
    man.open("quit.txt", ios::in);
    string line;
    while (getline(man, line)) {
        cout << line << endl;
    }

    man.close();
    return 0;
}
