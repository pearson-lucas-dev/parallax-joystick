/*
This is making an analog pin that we can read from for the joystick.
You will need a second pin if you would like to read more than one axis
*/
 int pin = A0;
 
 void setup(){
 pinMode(pin, INPUT);//This tells that pin to be able to be read from
 Serial.begin(9600);
 /*This setup Serial communication line for displaying text 
 in the Serial Monitor in the Arduino IDE*/
 }
 
 void loop(){
 /*
 Lower than 490 is either left or down.
 Higher than 505 is either right or up.
 
 This depends on which pin you are tied into on the joystick itself.
 
 I check for varying degrees of pressure on the joystick considering that usually the harder you press the faster 
 you want whatever action you are doing to go.
 
 */ 
 
 int val = analogRead(pin);
 
  if(val < 100){
    Serial.println("<<<<<<<<<<");
  }else if(val < 200){
    Serial.println("<<<<<<<");
  }else if(val < 300){
    Serial.println("<<<<<");
  }else if(val < 490){
    Serial.println("<<<");
  }else if(val > 900){in
    Serial.println(">>>>>>>>>>");
  }else if(val > 800){
    Serial.println(">>>>>>>");
  }else if(val > 700){
    Serial.println(">>>>>>");
  }else if(val > 505){
    Serial.println(">>>");
  }else{
    Serial.println("You havent moved the stick yet");
  }
  Serial.println("value is: "+String(val));
  delay(100); //Increase this delay to slow down input
 
 }
