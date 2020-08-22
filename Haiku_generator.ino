String nouns[] = {"Camel ", "Person ", "Book ", "iPhone ", "Elephant "};
int nounSyllVals[] = {2, 2, 1, 2, 3};

String adjectives[] = {"Purple ", "Gray ", "Hairy ", "Loud ", "Confident "};
int adjectiveSyllVals[] = {2, 1, 2, 1, 3};
String verbs[] = {"ran", "swam", "flew", "confounded", "entrenched"};
int verbSyllVals[] = {1, 1, 1, 3, 2};

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
    firstLineSyllVal = 0;
    int j = random(0, 5);
    Serial.print(adjectives[j]);
    
    firstLineSyllVal = firstLineSyllVal + adjectiveSyllVals[j];
    
    if (firstLineSyllVal == 3) {
      
      for (int i = 0; i < 5; i ++) {
        if (nounSyllVals[i] == 1) {
          Serial.print(nouns[i]);
          firstLineSyllVal = firstLineSyllVal + nounSyllVals[i];
          break;
        }
      }
      
    } else if (firstLineSyllVal == 2) {
      for (int i = 0; i < 5; i ++) {
        if (nounSyllVals[i] == 1 || nounSyllVals[i] == 2) {
          Serial.print(nouns[i]);
          firstLineSyllVal = firstLineSyllVal + nounSyllVals[i];
          break;
        }
    }
    
  } else {
    j = random(0,5);
    Serial.print(nouns[j]);
    firstLineSyllVal = firstLineSyllVal + nounSyllVals[j];
  }
    
    int necesaryVal = 5 - firstLineSyllVal;    
     

    for (int i = 0; i < 5; i ++) {
        if (verbSyllVals[i] == necesaryVal) {
          Serial.print(verbs[i]);
          break;
        }
    }   
  
  
  delay(1000);
  Serial.println();
  }
}
