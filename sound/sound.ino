#include <CapacitiveSensor.h>
 
#define speaker 11

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);     
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);     
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);      
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);         
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);  
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);
CapacitiveSensor   cs_2_11 = CapacitiveSensor(2,A0);
CapacitiveSensor   cs_2_12 = CapacitiveSensor(2,A1);
CapacitiveSensor   cs_2_13 = CapacitiveSensor(2,A2);
CapacitiveSensor   cs_2_14 = CapacitiveSensor(2,A3);
CapacitiveSensor   cs_2_15 = CapacitiveSensor(2,A4);
CapacitiveSensor   cs_2_16 = CapacitiveSensor(2,A5);
CapacitiveSensor   cs_2_17 = CapacitiveSensor(2,A6);
CapacitiveSensor   cs_2_18 = CapacitiveSensor(2,A7);
CapacitiveSensor   cs_2_19 = CapacitiveSensor(2,A8);
CapacitiveSensor   cs_2_20 = CapacitiveSensor(2,A9);
CapacitiveSensor   cs_2_21 = CapacitiveSensor(2,A10);
CapacitiveSensor   cs_2_22 = CapacitiveSensor(2,A11);
CapacitiveSensor   cs_2_23 = CapacitiveSensor(2,A12);
CapacitiveSensor   cs_2_24 = CapacitiveSensor(2,A13);
CapacitiveSensor   cs_2_25 = CapacitiveSensor(2,A14);
CapacitiveSensor   cs_2_26 = CapacitiveSensor(2,A15);     



void setup()                    
{
  cs_2_6.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example

  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(53, OUTPUT);
  
  Serial.begin(9600);
}

void loop()                    
{
  
  long start = millis();
  //digitalWrite(30, HIGH);
  long total1 =  cs_2_3.capacitiveSensor(3000);
  long total2 =  cs_2_4.capacitiveSensor(3000);
  long total3 =  cs_2_5.capacitiveSensor(3000);
  long total4 =  cs_2_6.capacitiveSensor(3000);
  long total5 =  cs_2_7.capacitiveSensor(3000);
  long total6 =  cs_2_8.capacitiveSensor(3000);
  long total7 =  cs_2_9.capacitiveSensor(3000);
  long total8 =  cs_2_10.capacitiveSensor(3000);
  long total9 =  cs_2_11.capacitiveSensor(3000);
  long total10 =  cs_2_12.capacitiveSensor(3000);
  long total11 =  cs_2_13.capacitiveSensor(3000);
  long total12 =  cs_2_14.capacitiveSensor(3000);
  long total13 =  cs_2_15.capacitiveSensor(3000);
  long total14 =  cs_2_16.capacitiveSensor(3000);
  long total15 =  cs_2_17.capacitiveSensor(3000);
  long total16 =  cs_2_18.capacitiveSensor(3000);
  long total17 =  cs_2_19.capacitiveSensor(3000);
  long total18 =  cs_2_20.capacitiveSensor(3000);
  long total19 =  cs_2_21.capacitiveSensor(3000);
  long total20 =  cs_2_22.capacitiveSensor(3000);
  long total21 =  cs_2_23.capacitiveSensor(3000);
  long total22 =  cs_2_24.capacitiveSensor(3000);
  long total23 =  cs_2_25.capacitiveSensor(3000);
  long total24 =  cs_2_26.capacitiveSensor(3000);
  
  //Serial.print(millis() - start);        // check on performance in milliseconds
  
  
  
     //FRECUENCIA EN HZ
     
  if (total1 > 500) {tone(speaker,130.81); //
  Serial.println("DO 3");
  digitalWrite(30, HIGH);
  }else if (total1 <= 500){
  digitalWrite(30, LOW);  
  }
  if (total2 > 500){ tone(speaker,207.65);//
  Serial.println("SOL# 3");
  digitalWrite(31, HIGH);
  }else if (total2 <= 500){
  digitalWrite(31, LOW);  
  }
  if (total3 > 500){ tone(speaker,329.63);//
  Serial.println("MI 4");
  digitalWrite(32, HIGH);
  }else if (total3 <= 500){
  digitalWrite(32, LOW);  
  }
  if (total4 > 500){ tone(speaker,138.59);
  Serial.println("DO# 3");
  digitalWrite(33, HIGH);
  }else if (total4 <= 500){
  digitalWrite(33, LOW);  
  }
  if (total5 > 500){ tone(speaker,370);//
  Serial.println("FA# 4");
  digitalWrite(34, HIGH);
  }else if (total5 <= 500){
  digitalWrite(34, LOW);  
  }
  if (total6 > 500) {tone(speaker,349.23);//
  Serial.println("FA 4");
  digitalWrite(35, HIGH);
  }else if (total6 <= 500){
  digitalWrite(35, LOW);  
  }
  if (total7 > 500) {tone(speaker,246.94);//
  Serial.println("SI 3");
  digitalWrite(36, HIGH);
  }else if (total7 <= 500){
  digitalWrite(36, LOW);  
  }
  if (total8 > 500) {tone(speaker,233.08);//
  Serial.println("LA# 3");
  digitalWrite(37, HIGH);
  }else if (total8 <= 500){
  digitalWrite(37, LOW);  
  }
  if (total9 > 500) {tone(speaker,415.3);//
  Serial.println("SOL# 4");
  digitalWrite(38, HIGH);
  }else if (total9 <= 500){
  digitalWrite(38, LOW);  
  }
  if (total10 > 500){ tone(speaker,146.83);
  Serial.println("RE 3");
  digitalWrite(39, HIGH);
  }else if (total10 <= 500){
  digitalWrite(39, LOW);  
  }
  if (total11 > 500){ tone(speaker,155.56);
  Serial.println("RE# 3");
  digitalWrite(40, HIGH);
  }else if (total11 <= 500){
  digitalWrite(40, LOW);  
  }
  if (total12 > 500){ tone(speaker,164.81);
  Serial.println("MI 3");
  digitalWrite(41, HIGH);
  }else if (total12 <= 500){
  digitalWrite(41, LOW);  
  }
  if (total13 > 500){ tone(speaker,277.18); //
  Serial.println("DO# 4");
  digitalWrite(42, HIGH);
  }else if (total13 <= 500){
  digitalWrite(42, LOW);  
  }
  if (total14 > 500){ tone(speaker,174.61);//
  Serial.println("FA 3");
  digitalWrite(43, HIGH);
  }else if (total14 <= 500){
  digitalWrite(43, LOW);  
  }
  if (total15 > 500){ tone(speaker,440);
  Serial.println("LA 4");
  digitalWrite(44, HIGH);
  }else if (total15 <= 500){
  digitalWrite(44, LOW);  
  }
  if (total16 > 500){ tone(speaker,261.63); //
  Serial.println("DO 4");
  digitalWrite(45, HIGH);
  }else if (total16 <= 500){
  digitalWrite(45, LOW);  
  }
  if (total17 > 500){ tone(speaker,220); //
  Serial.println("LA 3");
  digitalWrite(46, HIGH);
  }else if (total17 <= 500){
  digitalWrite(46, LOW);  
  }
  if (total18 > 500){ tone(speaker,392); //
  Serial.println("SOL 4");
  digitalWrite(47, HIGH);
  }else if (total18 <= 500){
  digitalWrite(47, LOW);  
  }
  if (total19 > 500){ tone(speaker,493.88);//
  Serial.println("SI 4");
  digitalWrite(48, HIGH);
  }else if (total19 <= 500){
  digitalWrite(48, LOW);  
  }
  if (total20 > 500){ tone(speaker,311.13);//
  Serial.println("RE# 4");
  digitalWrite(49, HIGH);
  }else if (total20 <= 500){
  digitalWrite(49, LOW);  
  }
  if (total21 > 500){ tone(speaker,466);//
  Serial.println("LA# 4");
  digitalWrite(50, HIGH);
  }else if (total21 <= 500){
  digitalWrite(50, LOW);  
  }
  if (total22 > 500){ tone(speaker,196);
  Serial.println("SOL 3");
  digitalWrite(51, HIGH);
  }else if (total22 <= 500){
  digitalWrite(51, LOW);  
  }
  if (total23 > 500){ tone(speaker,293.66);//
  Serial.println("RE 4");
  digitalWrite(52, HIGH);
  }else if (total23 <= 500){
  digitalWrite(52, LOW);  
  }
  if (total24 > 500){ tone(speaker,185); //
  Serial.println("FA# 3");
  digitalWrite(53, HIGH);
  }else if (total24 <= 500){
  digitalWrite(53, LOW);  
  }
  
  if (total1<=500  &  total2<=500  &  total3<=500 & total4<=500  &  total5<=500  &  total6<=500 &  total7<=500 &  total8<=500 &  total9<=500 &  total10<=500 &
    total11<=500 &  total12<=500 &  total13<=500 &  total14<=500 &  total15<=500 &  total16<=500 &  total17<=500 &  total18<=500 &  total19<=500
    &  total20<=500 &  total21<=500 &  total22<=500 &  total23<=500 &  total24<=500){
    noTone(speaker);
    //for(int i = 30; i< 54;i++){
      //digitalWrite(i, LOW);
    //}
 apagar();}
  delay(10);                             // arbitrary delay to limit data to serial port 
}
void apagar(){
  for(int i = 30; i< 54;i++){
    digitalWrite(i, LOW);
  }
}
