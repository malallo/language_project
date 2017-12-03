#include <string>
#include <vector>

void frequency(std::string text, std::vector<int> v;){
  int count=0;
  for (int i = 0; i < (int) text.length() - 2; i+=3) {
		std::string test = text.substr(i,3);
    int a=0;
    int b=0;
    int c=0;
    for (int j=0; j< (int)test.length(), j++){
      if (test[j]==" ") {
        if (j==0) a=0;
        if (j==1) b=0;
        if (j==2) c=0;
      }
      if (test[j]=="a") {
        if (j==0) a=1;
        if (j==1) b=1;
        if (j==2) c=1;
      }
      if (test[j]=="b") {
        if (j==0) a=2;
        if (j==1) b=2;
        if (j==2) c=2;
      }
      if (test[j]=="c") {
        if (j==0) a=3;
        if (j==1) b=3;
        if (j==2) c=3;
      }
      if (test[j]=="d") {
        if (j==0) a=4;
        if (j==1) b=4;
        if (j==2) c=4;
      }
      if (test[j]=="e") {
        if (j==0) a=5;
        if (j==1) b=5;
        if (j==2) c=5;
      }
      if (test[j]=="f") {
        if (j==0) a=6;
        if (j==1) b=6;
        if (j==2) c=6;
      }
      if (test[j]=="g") {
        if (j==0) a=7;
        if (j==1) b=7;
        if (j==2) c=7;
      }
      if (test[j]=="h") {
        if (j==0) a=8;
        if (j==1) b=8;
        if (j==2) c=8;
      }
      if (test[j]=="i") {
        if (j==0) a=9;
        if (j==1) b=9;
        if (j==2) c=9;
      }
      if (test[j]=="j") {
        if (j==0) a=10;
        if (j==1) b=10;
        if (j==2) c=10;
      }
      if (test[j]=="k") {
        if (j==0) a=11;
        if (j==1) b=11;
        if (j==2) c=11;
      }
      if (test[j]=="l") {
        if (j==0) a=12;
        if (j==1) b=12;
        if (j==2) c=12;
      }
      if (test[j]=="m") {
        if (j==0) a=13;
        if (j==1) b=13;
        if (j==2) c=13;
      }
      if (test[j]=="n") {
        if (j==0) a=14;
        if (j==1) b=14;
        if (j==2) c=14;
      }
      if (test[j]=="o") {
        if (j==0) a=15;
        if (j==1) b=15;
        if (j==2) c=15;
      }
      if (test[j]=="p") {
        if (j==0) a=16;
        if (j==1) b=16;
        if (j==2) c=16;
      }
      if (test[j]=="q") {
        if (j==0) a=17;
        if (j==1) b=17;
        if (j==2) c=17;
      }
      if (test[j]=="r") {
        if (j==0) a=18;
        if (j==1) b=18;
        if (j==2) c=18;
      }
      if (test[j]=="s") {
        if (j==0) a=19;
        if (j==1) b=19;
        if (j==2) c=19;
      }
      if (test[j]=="t") {
        if (j==0) a=20;
        if (j==1) b=20;
        if (j==2) c=20;
      }
      if (test[j]=="u") {
        if (j==0) a=21;
        if (j==1) b=21;
        if (j==2) c=21;
      }
      if (test[j]=="v") {
        if (j==0) a=22;
        if (j==1) b=22;
        if (j==2) c=22;
      }
      if (test[j]=="w") {
        if (j==0) a=23;
        if (j==1) b=23;
        if (j==2) c=23;
      }
      if (test[j]=="x") {
        if (j==0) a=24;
        if (j==1) b=24;
        if (j==2) c=24;
      }
      if (test[j]=="y") {
        if (j==0) a=25;
        if (j==1) b=25;
        if (j==2) c=25;
      }
      if (test[j]=="z") {
        if (j==0) a=26;
        if (j==1) b=26;
        if (j==2) c=26;
      }
    }
    int location= (int)a*27^2+b*27+c;
    v[location]= v[location]+1
  }


int main(int argc, char *argv[]){
  if argc!=2 {
    exit(EXIT_FAILURE);
  }
  std::vector<int> v;
  for (int i=0; i<27^3; i++){
    v.push_back(0);
  }
  std::string text=argv[1];
  frequency (text, v);
}
