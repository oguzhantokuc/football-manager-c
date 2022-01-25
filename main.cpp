#include "Game.h"


int main(){
	system("color 3");
	string team="KYKSPOR";
//	cout<<"Choose a team";
//	cin>>team;
	Leauge lig1("FM KYK",5,team);
	cout<<lig1;

	lig1.transfer();
//	
//	lig1.macYap(lig1.getTeam()[0],lig1.getTeam()[1]);
//	lig1.macYap(lig1.getTeam()[2],lig1.getTeam()[3]);
//	lig1.Print();
    return 0;
}
