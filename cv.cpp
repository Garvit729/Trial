#include<iostream>
using namespace std;
int main(){
// Welcome 
char ch;
ch=cin.get();

if(ch==' ' || '\n'){
	cout<<"whitespaces";
}

else if (ch>='A' && ch<='Z' || ch>='a  && ch<='z'){

	cout<<"letters";
}

else if (ch>='0'  && ch<='9'){
	cout<<"Digits";

}
else{
	cout<<"special symbols";
}


return 0;
}
