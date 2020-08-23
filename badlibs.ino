String Storage[] = {"", "", "", "", "", "", "", "", "", "",""};

void setup() {
  Serial.begin(9600);   //Start the serial monitor
  Serial.println("Welcome to BadLibs™®®");
  Serial.println("Enter a BadLibs™®©® into the serial monitor in this format:");
  Serial.println("There was a [noun], who was very [adjective]. . .");
  Serial.println("Type '!help' to get a full list of the possible inserts for your BadLibs©®™™©™®™©");
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
  Serial.print("lnOnce upon a time, in a land not so far away, lived a ");
  String x = Storage[0];
  Serial.print(x);
  Serial.print("coder who loved to " );
  x = Storage[1];
  Serial.print(x);
  Serial.print("On their favorite holiday, ");
  x = Storage[2];
  Serial.print(x);
  Serial.print(", they decided to make a program that really showed how they felt about ");
  x = Storage[3];
  Serial.print(x);
  Serial.print(".");
  Serial.print(x);
  Serial.print(", the specific name of their favorite species of ");
  x = Storage[4];
  Serial.print(x);
  Serial.print(",");
  x = Storage[5];
  Serial.print(x);
  Serial.print("made them feel");
  x = Storage[6];
  Serial.print(x);
  Serial.print("The only problem with the code, written in ");
  x = Storage[7];
  Serial.print(x);
  Serial.print(", of course, was that the omputer had a virus.");
  Serial.print(" And not just any");
  x = Storage[8];
  Serial.print(x);
  Serial.print("virus. COVID-19.");
  Serial.print(" So naturally, the computer ahd to go online, just like all ");
  x = Storage[9];
  Serial.print(x);
  Serial.print("from ");
  x = Storage[10];
  Serial.print(x);
  
  
  
  
  
}
