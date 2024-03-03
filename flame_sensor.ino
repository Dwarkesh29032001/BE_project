

int led_pin = 13;// initializing the pin 9 as the led pin (LED indicator pin)
int relay1 = 2 ;   // Relay 1 control pin
int relay2 = 3 ;    // Relay 2 control pin
int relay3 = 4 ;    
int relay4 = 5 ;
int relay5 = 6 ;
int relay6 = 7 ;
int relay7 = 8 ;
int relay8 = 9 ;
int flame_sensor_pin = 10;// initializing pin 12 as the sensor output pin
int flame_pin = HIGH ; // state of sensor
 int a;
void setup ( ) {
  // Set relay pins as OUTPUT
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
 // Turn off all relays initially
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
 // Read the state of the flame sensor
flame_pin = digitalRead ( flame_sensor_pin ) ; 
if (flame_pin == LOW) 
{
 // Flame detected, execute sequence

 // Turn on LED for visual indication

  digitalWrite ( led_pin , HIGH) ;
  digitalWrite ( relay1 , HIGH) ; // stop moving forward
  digitalWrite ( relay2 , HIGH) ;
  // Turn on the pump
digitalWrite ( relay5 , HIGH ) ;
digitalWrite ( relay6 , LOW ) ; // Activate main arm
delay(4000);// Delay for a specified time
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
 // No flame detected, execute an alternate sequence

// Turn off LED
digitalWrite ( led_pin , LOW) ;
 // Turn off the water pump
digitalWrite ( relay2 , LOW) ; 
 // Move forward 
digitalWrite ( relay1 , HIGH) ; 

}
}
