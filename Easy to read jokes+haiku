int menuPick;          //Declare variable for the menu
int J = 74;            //Declare J as 74 because the character "J" reads as 74 from the serial monitor
int H = 72;             //Declar H as 72 because the character "H" reads as 72 from the serial monitor

void setup() {
  Serial.begin(9600);  //Start the serial monitor
  
}

void loop() {                                                          
  Serial.println("Would you like to hear a joke(J) or a haiku(H)?");   //Print the menu and indicate pressing "J" for a joke and "H" for a haiku
                                                               
  menuPick = Serial.read();                  //Set the menupick variable to be the input from the serial monitor
  
  if (menuPick == J) {                       //If menuPick is equal to "J" If the user inputed "J"  
    giveJoke();                              //Give a Joke
  } 
  else if(menuPick == H) {                   //if menuPick is equal to "H".If the user inuted "H"
    //generateHaiku();                         //Generate a Haiku
  }
}

//FUNCTIONS----------------------------------------------------------------------------------------------------------------------

void giveJoke() {
  /* Below we define two arrays of strings for the knock knock jokes,
   * one that is the first line of the knock knock joke and one that
   * is the second line of the knock knock joke.
   */
  const  String firstKnockKnock[] = {"Brett", "Bacon", "Butter", "Norway", "Alda", "Annie", "Lena", "Adore", "I am", "Hike"};
  const  String secondKnockKnock[] = {"Brett You Do Not Know Who This Is", "I Am Bacon A Cake For Your Birthday",
  "I Butter Not Tell You It Is A Secret", "There Is Norway I Am Leaving Until You Open This Door", 
  "Alda Kids Like My Knock Knock Jokes", "Annie thing you can do I can better!", "Lena a little closer, and I’ll tell you another joke!", 
  "Adore is between you and me so please open up!", "Don’t you even know who you are?!", "I didn’t know you liked Japanese poetry!"};

  String stringInputStorage = "";            //Define and reset stringInputStorage from the last call of the function
  bool userResponded = false;                //Define and reset userResponded from the last call of the function
  randomSeed(analogRead(2));
  int j = random(0,10);       
  
  Serial.println("knock-knock");             //Start the joke
  Serial.println("");                        //Insert an empty line
    
    
  while (true) {
    stringInputStorage = Serial.readString();
    if (stringInputStorage.length() > 1 and userResponded != true) {
      Serial.println(stringInputStorage);
      Serial.println("");
      stringInputStorage = "";
      userResponded = true;
      Serial.println(firstKnockKnock[j]);
      Serial.println("");
    }
    if (userResponded == true) 
      if (stringInputStorage != "") {
      Serial.println(stringInputStorage);
      Serial.println("");
      stringInputStorage = "";
    }
    Serial.println(secondKnockKnock[j]);
    delay(1000);
  }
} 

//-------------------------------------------------------------------------------------------

void generateHaiku()  {
  //haiku inits
  const  String nounsL1[] = {"Camel ", "Person ", "Book ", "iPhone ", "Elephant "};
  const  int nounSyllValsL1[] = {2, 2, 1, 2, 3};

  const  String adjectivesL1[] = {"Purple ", "Gray ", "Hairy ", "Loud ", "Confident "};
  const  int adjectiveSyllValsL1[] = {2, 1, 2, 1, 3};

  const  String verbsL1[] = {"ran", "swam", "flew", "confounded", "entrenched"};
  const  int verbSyllValsL1[] = {1, 1, 1, 3, 2};

  const  String nounsL2[] = {"Bumblebee ", "Desk ", "Tea Infuser ", "Laptop ", "Frisbee ", "Calculator ", "Moon"}; 
  const  int nounSyllValsL2[] = {3, 1, 4, 2, 2, 4, 1};

  const  String adjectivesL2[] = {"Blue ", "Communicated ", "Musical ", "Manotonous ", "Peaceful "};
  const  int adjectiveSyllValsL2[] = {1, 5, 3, 4, 2};

  const  String verbsL2[] = {"Danced", "Ventured", "Decided", "Written", "Lived"};
  const  int verbSyllValsL2[] = {1, 2, 3, 2, 1};

  const  String nounsL3[] = {"Tree ", "Sun ", "Soccerball ", "Robot ", "Dancer "};
  const  int nounSyllValsL3[] = {1, 1, 3, 1, 2};

  const  String adjectivesL3[] = {"Colorful ", "Tall ", "Shallow ", "Boring ", "Sparse "};
  const  int adjectiveSyllValsL3[] = {3, 1, 2, 2, 1};

  const  String verbsL3[] = {"Hypnotized", "Fell", "Strengthened", "Enjoyed", "Threw"};
  const  int verbSyllValsL3[] = {3, 1, 2, 2, 1};
  
  int firstLineSyllVal = 0;
  int secondLineSyllVal = 0;
  int thirdLineSyllVal = 0;
  
  while (firstLineSyllVal != 5) {
    if (firstLineSyllVal != 5) {
      firstLineSyllVal = 0;
    } 
    randomSeed(analogRead(3));
    int j = random(0, 5);
    
    Serial.print(adjectivesL1[j]);
    
    firstLineSyllVal = firstLineSyllVal + adjectiveSyllValsL1[j];
    
    if (firstLineSyllVal == 3) {
      for (int i = 0; i < 5; i ++) {
        if (nounSyllValsL1[i] == 1) {
          Serial.print(nounsL1[i]);
          firstLineSyllVal = firstLineSyllVal + nounSyllValsL1[i];
          break;
        }
      }     
    } 
    else if (firstLineSyllVal == 2) {
      for (int i = 0; i < 5; i ++) {
        if (nounSyllValsL1[i] == 1 || nounSyllValsL1[i] == 2) {
          Serial.print(nounsL1[i]);
          firstLineSyllVal = firstLineSyllVal + nounSyllValsL1[i];
          break;
        }
      }  
    } 
    else {
      j = random(0,5);
      Serial.print(nounsL1[j]);
      firstLineSyllVal = firstLineSyllVal + nounSyllValsL1[j];
    }
    
    int necesaryVal = 5 - firstLineSyllVal;    
     
    for (int i = 0; i < 5; i ++) {
        if (verbSyllValsL1[i] == necesaryVal) {
          Serial.print(verbsL1[i]);
          firstLineSyllVal = firstLineSyllVal + verbSyllValsL1[i];
          break;
        }
    }   
  
    delay(1000);
    Serial.println("/");
  }


  
  while(secondLineSyllVal != 7) {
    
    secondLineSyllVal = 0;
    
    randomSeed(analogRead(7));
    int j = random(0, 5);
    
    Serial.print(adjectivesL2[j]);
    
    secondLineSyllVal = secondLineSyllVal + adjectiveSyllValsL2[j];
    
    if (secondLineSyllVal == 4) {
      for (int i = 0; i < 7; i ++) {
        if (nounSyllValsL2[i] != 3 || nounSyllValsL2 != 4) {
          Serial.print(nounsL2[i]);
          secondLineSyllVal = secondLineSyllVal + nounSyllValsL2[i];
          break;
        }
      }  
    } 
    else {
      randomSeed(analogRead(10));
      j = random(0,5);
      Serial.print(nounsL2[j]);
      secondLineSyllVal = secondLineSyllVal + nounSyllValsL2[j];
    }
    int necesaryVal = 7 - secondLineSyllVal;
    for (int i = 0; i < 5; i ++) {
          if (verbSyllValsL2[i] == necesaryVal) {
            Serial.print(verbsL2[i]);
            secondLineSyllVal = secondLineSyllVal + verbSyllValsL2[i];
            break;
          }
     }
    delay(1000);
    Serial.println("/");
  }



  while (thirdLineSyllVal != 5) {
    if (thirdLineSyllVal != 5) {
      thirdLineSyllVal = 0;
    } 
    
    randomSeed(analogRead(12));
    int j = random(0, 5);
    
    Serial.print(adjectivesL3[j]);
    
    thirdLineSyllVal = thirdLineSyllVal + adjectiveSyllValsL3[j];
    
    if (thirdLineSyllVal == 3) {
      for (int i = 0; i < 5; i ++) {
        if (nounSyllValsL3[i] == 1) {
          Serial.print(nounsL3[i]);
          thirdLineSyllVal = thirdLineSyllVal + nounSyllValsL3[i];
          break;
        }
      } 
    } 
    else if (thirdLineSyllVal == 2) {
      for (int i = 0; i < 5; i ++) {
        if (nounSyllValsL3[i] == 1 || nounSyllValsL3[i] == 2) {
          Serial.print(nounsL3[i]);
          thirdLineSyllVal = thirdLineSyllVal + nounSyllValsL3[i];
          break;
        }
      } 
    } 
    else {
      randomSeed(analogRead(4));
      j = random(0,5);
      Serial.print(nounsL3[j]);
      thirdLineSyllVal = thirdLineSyllVal + nounSyllValsL3[j];
    }
  
    int necesaryVal = 5 - thirdLineSyllVal;    
     

    for (int i = 0; i < 5; i ++) {
        if (verbSyllValsL3[i] == necesaryVal) {
          Serial.print(verbsL3[i]);
          thirdLineSyllVal = thirdLineSyllVal + verbSyllValsL3[i];
          break;
        }
    }   
  
  delay(1000);
  Serial.println("/");
  }
}
