String Storage[] = {"", "", "", "", "", "", "", "", "", "",""};

void setup() {
  Serial.begin(9600);   //Start the serial monitor
  Serial.println("Welcome to BadLibs");
  Serial.println("Enter a BadLibs into the serial monitor in this format:");
  Serial.println("There was a [noun], who was very [adjective]. . .");
  
}

void loop() {
  Serial.println("Please supply an adjective");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[0] = stringStorage;
      stringStorage = "";
      break;
    }
  }
  Serial.println("Gimmme a verb");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[1] = stringStorage;
      stringStorage = "";
      break;
    }
  }
  Serial.println("Name a rather obsolete holiday");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[2] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("Give me a plural noun");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[3] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("Name a marsupial (or another animal you feel strongly about)");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[4] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("What about an adverb (something we struggled with-> it describes a verb!)");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[5] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("How are you feeling? Supply an emotion");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[6] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("Now give me a fun coding language!");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[7] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("Another adjective");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[8] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("Ok, now a plural noun");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[9] = stringStorage;
      stringStorage = "";
      break;
    }
  }
   Serial.println("Last one-Give me any year");
  while (true) {
    String stringStorage = Serial.readString();
    if (stringStorage != "") {
      Serial.println(stringStorage);
      Storage[10] = stringStorage;
      stringStorage = "";
      break;
    }
  }
  Serial.print("Once upon a time, in a land not so far away, lived a ");
  
  Serial.print(Storage[0]);
  Serial.print("coder who loved to " );
  Serial.print(Storage[1] + ".");
  Serial.println();
  Serial.print("On their favorite holiday, ");
  Serial.print(Storage[2]);
  Serial.print(" they decided to make a program that really showed how they felt about ");
  Serial.print(Storage[3] + ". ");
  Serial.print(Storage[3]);
  Serial.print(" the specific name of their favorite species of ");
  Serial.print(Storage[4]);
  Serial.print(" ");
  Serial.print(Storage[5]);
  Serial.print("made them feel ");
  Serial.print(Storage[6] + ".");
  Serial.println();
  Serial.print("The only problem with the code, written in ");
  Serial.print(Storage[7]);
  Serial.print(" of course, was that the computer had a virus.");
  Serial.println();
  Serial.print(" And not just any ");
  Serial.print(Storage[8]);
  Serial.print("virus. COVID-19.");
  Serial.println();
  Serial.print(" So naturally, the computer had to go online, just like all ");
  Serial.print(Storage[9]);
  Serial.print("from ");
  Serial.print(Storage[10]);
  
  
  
  
  
}
