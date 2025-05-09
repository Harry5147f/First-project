#include<iostream>
#include<string>
#include<cstdlib>
#include<array>
#include<ctime>
std::string win(){
	return "You win";
}
std::string lose(){
	return "You lose";
}
int main(){
	
int input, random, score=0;

while(true){
	srand(time(0));
	random=rand()%3;
std::array <std::string,3> RPS={"rock", "paper", "scissor"};
std::cout<<"1)Rock\n2)Paper\n3)Scissor\nEnter your choice";
std::cin>>input;
input--;
std::cout<<"Computer: "<<RPS[random] <<std::endl;
	std::cout<<"You: "<<RPS[input]<<std::endl;
if (input>2 || input<0){
	std::cout<<"Invalid option";
}
else{
if (random==input){
	std::cout<<"It's a draw";
}
else if (RPS[random]=="paper" && RPS[input]=="rock"){
std::cout<<lose();
}
else if (random==3 && input==2){
	std::cout<<lose();
}
else if(random==2 && input==1){
	std::cout<<lose();
}
else{
	std::cout<<win();
	score++;}
	std::cout<<"\n";
}}
	return 0;
}


	
