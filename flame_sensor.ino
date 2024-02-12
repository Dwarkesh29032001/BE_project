

int led_pin = 13 ;// initializing the pin 9 as the led pin
int relay1 = 2 ;
int relay2 = 3 ;
int relay3 = 4 ;
int relay4 = 5 ;
int relay5 = 6 ;
int relay6 = 7 ;
int relay7 = 8 ;
int relay8 = 9 ;
int flame_sensor_pin = 10 ;// initializing pin 12 as the sensor output pin
int flame_pin = HIGH ; // state of sensor
 int a;
void setup ( ) {
 
pinMode ( relay1 , OUTPUT ); 
pinMode ( relay2 , OUTPUT );
pinMode ( relay3 , OUTPUT );
pinMode ( relay4 , OUTPUT ); 
pinMode ( relay5 , OUTPUT );
pinMode ( relay6 , OUTPUT );
pinMode ( relay7 , OUTPUT ); 
pinMode ( relay8 , OUTPUT );
pinMode ( led_pin , OUTPUT );// declaring led pin as output pin
pinMode ( flame_sensor_pin , INPUT ); // declaring sensor pin as input pin for Arduino
Serial.begin ( 9600 );// setting baud rate at 9600
a=1;
digitalWrite ( relay1 , HIGH ) ;
digitalWrite ( relay2 , HIGH ) ;
digitalWrite ( relay3 , HIGH ) ;
digitalWrite ( relay4 , HIGH ) ;
digitalWrite ( relay5 , HIGH ) ;
digitalWrite ( relay6 , HIGH ) ;
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH ) ;
}
 
void loop ( ) {

flame_pin = digitalRead ( flame_sensor_pin ) ; 
if (flame_pin == LOW) 
{


  digitalWrite ( led_pin , HIGH) ;
  digitalWrite ( relay1 , HIGH) ; // stop movinh forword
  digitalWrite ( relay2 , HIGH) ;
  //pump on
digitalWrite ( relay5 , HIGH ) ;
digitalWrite ( relay6 , LOW ) ;  // main arm
delay(4000);
digitalWrite ( relay5 , HIGH ) ;
digitalWrite ( relay6 , HIGH ) ;
delay(100);
digitalWrite ( relay3 , LOW ) ;
digitalWrite ( relay4 , HIGH) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , LOW ) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , LOW ) ;
digitalWrite ( relay8 , HIGH ) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , LOW ) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , LOW ) ;
digitalWrite ( relay8 , HIGH) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , LOW) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , LOW ) ;
digitalWrite ( relay8 , HIGH) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , LOW) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , LOW ) ;
digitalWrite ( relay8 , HIGH) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);



delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , LOW ) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , LOW ) ;
digitalWrite ( relay8 , HIGH ) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , LOW ) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay7 , LOW ) ;
digitalWrite ( relay8 , HIGH) ;
delay(100);
digitalWrite ( relay7 , HIGH ) ;
digitalWrite ( relay8 , HIGH) ; 
delay(100);
digitalWrite ( relay3 , HIGH) ;
digitalWrite ( relay4 , HIGH) ;
delay(100);
digitalWrite ( relay5 , LOW) ;
digitalWrite ( relay6 , HIGH ) ;
delay(3700);
digitalWrite ( relay5 , HIGH ) ;
digitalWrite ( relay6 , HIGH) ;
delay(100);

digitalWrite ( relay3 , HIGH) ;
digitalWrite ( relay4 , HIGH) ;


}
 
else
{
digitalWrite ( led_pin , LOW) ;
digitalWrite ( relay2 , LOW) ; // water pump off
digitalWrite ( relay1 , HIGH) ; // going forword

}
}
