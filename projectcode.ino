/* 
 Name = Dighvijay singh
 CS_207  
 */



const int motionpin=A0;
const int ledpin=10;
const int speakerpin=12; 
int motionsensvalue=0;//sets the value to  zero
void setup()
{
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin, OUTPUT);
pinMode(motionpin,INPUT);
pinMode(speakerpin,OUTPUT);
}
void loop() 
{
// put your main code here, to run repeatedly:
// it readsthe analog data from pir motion sensor
motionsensvalue=analogRead(motionpin); 


//checks the value of the sensor in the serial monitor 
if (motionsensvalue>=300){
digitalWrite(ledpin,HIGH);
//turns on led and speaker
tone(speakerpin,10); 
Serial.println(motionsensvalue);
}
else {
//turns led off led and speaker
digitalWrite(ledpin,LOW);
noTone(speakerpin);
}
}
