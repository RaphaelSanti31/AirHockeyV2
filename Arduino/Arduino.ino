class gamescore {
  public:
    score = 0;
    scored = False;
    finish = 8;
  int check_signal(state) {
    
      if (state == False and not scored){
        score = score + 1;
        scored = True;
      }
      
      if else (scored and a == True){
        scored = False;
      }

      if (score == finish) {
        GameEnde(True);
      }
  }
    
}

int GameEnde (signal){
  if(signal == True){
   int Havayı_kapat == 0;
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
