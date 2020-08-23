String firstKnockKnock[] = {"Brett", "Bacon", "Butter", "Norway", "Alda", "Annie", "Lena", "Adore", "I am", "Hike"};
String secondKnockKnock[] = {"Brett You Do Not Know Who This Is", "I Am Bacon A Cake For Your Birthday", "I Butter Not Tell You It Is A Secret", "There Is Norway I Am Leaving Until You Open This Door", "Alda Kids Like My Knock Knock Jokes", "Annie thing you can do I can better!", "Lena a little closer, and I’ll tell you another joke!", "Adore is between you and me so please open up!", "Don’t you even know who you are?!", "I didn’t know you liked Japanese poetry!"};


void setup() {
  Serial.begin(9600);   //Start the serial monitor
  
}

void loop() {
  int i = random(0,3);  //Determine a random number for the first catagory
  
  if (i == 1) {
    //catagory one
    Serial.println("knock-knock");
    Serial.println("");
    while (true) {
      String stringStorage = Serial.readString(); 
      if (stringStorage != "") {
        Serial.println(stringStorage);
        stringStorage = "";
        break;
      }
    }
    
    int j = random(0,10);
    Serial.println(firstKnockKnock[j]);
    Serial.println("");
     
    while (true) {
      String stringStorage = Serial.readString(); 
      if (stringStorage != "") {
        Serial.println(stringStorage);
        Serial.println("");
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
