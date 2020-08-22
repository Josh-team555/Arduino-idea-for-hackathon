void setup() {
  Serial.begin(9600);   //Start the serial monitor
}

void loop() {
  int i = random(0,3);  //Determine a random number for the first catagory
  
  if (i == 1) {
    //catagory one
  }
  else if(i == 2) {
    //catagory two
  }
  else {
    //catagory three
  }
  

}
