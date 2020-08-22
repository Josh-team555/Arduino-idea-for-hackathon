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
      String stringStorage = Serial.readString(); 
      if (stringStorage != "") {
        stringStorage = "";
        break;
      }
    }
    
    int j = random(0,6);
    Serial.println(firstKnockKnock[j]);
     
    while (true) {
      String stringStorage = Serial.readString(); 
      if (stringStorage != "") {
        stringStorage = "";
        break;
      }
    }
  
    Serial.println(secondKnockKnock[j]);
    delay(1000);
  } 
  
  else if(i == 2) {
    //catagory two
  }
  
  else {
    //catagory three
  }
  

}
