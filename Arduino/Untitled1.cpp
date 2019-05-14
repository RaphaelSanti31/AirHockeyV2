#include <iostream>
using namespace std;
bool state = false;
int finish = 8;
int score = 0;    
struct player {
	public:
		int score = 0;
		bool scored = false;
};

int gamescore(int signal,int score,bool scored) {
	if(scored == false and signal==false){
		score= score++;
		scored = true;
	}	
	else if (scored==true and signal==true){
		scored ==false;
	}
	
	return score;
};


int main (){
	player player1,player2;
	while(true){
	int signal1,signal2;
	cin >> signal1>>signal2;
	
	
	cout << gamescore(signal1,player1.score,player1,scored);
	cout << gamescore(signal2,player2.score,player2.scored);
		
	}
		
	
	
}






/*
class gamescore {
  public:
    int score = 0;
    bool scored = false;
    int finish = 8;
    
    gamescore(state){
    	score = score + 1;
        scored = true;
	
      if (state == false and not scored){
        gamescore.score = score + 1;
        gamescore.scored = true;
      }	
      if else (scored and a == True){
        scored = false;
      } 
      if (score == finish) {
        GameEnde(true);
      } 
  };
 };   

















/*

int check_signal(state) {
    
      if (state == false and not scored){
        gamescore.score = score + 1;
        gamescore.scored = true;
      }
      
      if else (scored and a == True){
        scored = false;
      }

      if (score == finish) {
        GameEnde(true);
      }
  }
    


int GameEnde(signal){
  if(signal == true){
   int Havayi_kapat == 0;
  }
  
}

int Reset (){
  
}


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

*/

