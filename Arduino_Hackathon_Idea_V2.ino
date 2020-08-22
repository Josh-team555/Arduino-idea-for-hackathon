String firstKnockKnock[] = {"Brett", "Bacon", "Butter", "Norway", "Alda"};
String secondKnockKnock[] = {"BrettYouDoNotKnowWhoThisIs", "IAmBaconACakeForYourBirthday", "IButterNotTellYouItIsASecret", "ThereIsNorwayIAmLeavingUntilYouOpenThisDoor", "AldaKidsLikeMyKnockKnockJokes"};


void setup() {
  Serial.begin(9600);   //Start the serial monitor
  
}

void loop() {
  int i = random(0,3);  //Determine a random number for the first catagory
  
  if (i == 1) {
    //catagory one
    Serial.println("knock-knock");
    
    while (true) {
      if (Serial.available() > 0) {
        break;
      }
    }
    int j = random(0,6);
    int check = 0;
    if (check == 0) {
      Serial.println(firstKnockKnock[j]);
      check = 1;
    }    
    while (true) {
      if (Serial.available() > 0) {
        break;
       }
    }
    check = 0;
    if (check == 0) {    
     Serial.println(secondKnockKnock[j]);
     check = 1;
    }
      
      
  } else if(i == 2) {
    //catagory two
  }
  else {
    //catagory three
  }
  

}
