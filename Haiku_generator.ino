String nounsL1[] = {"Camel ", "Person ", "Book ", "iPhone ", "Elephant "};
int nounSyllValsL1[] = {2, 2, 1, 2, 3};

String adjectivesL1[] = {"Purple ", "Gray ", "Hairy ", "Loud ", "Confident "};
int adjectiveSyllValsL1[] = {2, 1, 2, 1, 3};

String verbsL1[] = {"ran", "swam", "flew", "confounded", "entrenched"};
int verbSyllValsL1[] = {1, 1, 1, 3, 2};

String nounsL2[] = {"Bumblebee ", "Desk ", "Tea Infuser ", "Laptop ", "Frisbee ", "Calculator ", "Moon"}; 
int nounSyllValsL2[] = {3, 1, 4, 2, 2, 4, 1};

String adjectivesL2[] = {"Blue ", "Communicated ", "Musical ", "Manotonous ", "Peaceful "};
int adjectiveSyllValsL2[] = {1, 5, 3, 4, 2};

String verbsL2[] = {"Danced", "Ventured", "Decided", "Written", "Lived"};
int verbSyllValsL2[] = {1, 2, 3, 2, 1};

String nounsL3[] = {"Tree ", "Sun ", "Soccerball ", "Robot ", "Dancer "};
int nounSyllValsL3[] = {1, 1, 3, 1, 2};

String adjectivesL3[] = {"Colorful ", "Tall ", "Shallow ", "Boring ", "Sparse "};
int adjectiveSyllValsL3[] = {3, 1, 2, 2, 1};

String verbsL3[] = {"Hypnotized", "Fell", "Strengthened", "Enjoyed", "Threw"};
int verbSyllValsL3[] = {3, 1, 2, 2, 1};


int firstLineSyllVal = 0;
int secondLineSyllVal = 0;
int thirdLineSyllVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  while (firstLineSyllVal != 5) {
    if (firstLineSyllVal != 5) {
      firstLineSyllVal = 0;
    } 
    randomSeed(analogRead(8));
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
      
    } else if (firstLineSyllVal == 2) {
      for (int i = 0; i < 5; i ++) {
        if (nounSyllValsL1[i] == 1 || nounSyllValsL1[i] == 2) {
          Serial.print(nounsL1[i]);
          firstLineSyllVal = firstLineSyllVal + nounSyllValsL1[i];
          break;
        }
    }
    
  } else {
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
  Serial.println();
  }


  
  while(secondLineSyllVal != 7) {
    
    secondLineSyllVal = 0;
    randomSeed(analogRead(7));
    int j = random(0, 5);
    Serial.print(adjectivesL2[j]);
    secondLineSyllVal = secondLineSyllVal + adjectiveSyllValsL2[j];
    if (secondLineSyllVal == 4) {
      Serial.println(secondLineSyllVal);
      for (int i = 0; i < 7; i ++) {
        if (nounSyllValsL2[i] != 3 || nounSyllValsL2 != 4) {
          Serial.print(nounsL2[i]);
          secondLineSyllVal = secondLineSyllVal + nounSyllValsL2[i];
          break;
        }
      }
      
    } else {
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
    Serial.println();
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
      
    } else if (thirdLineSyllVal == 2) {
      for (int i = 0; i < 5; i ++) {
        if (nounSyllValsL3[i] == 1 || nounSyllValsL3[i] == 2) {
          Serial.print(nounsL3[i]);
          thirdLineSyllVal = thirdLineSyllVal + nounSyllValsL3[i];
          break;
        }
    }
    
  } else {
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
  Serial.println();
  }

  
}
