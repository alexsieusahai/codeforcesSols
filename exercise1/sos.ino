// Alexander Sieusahai
// 1495197
// CMPUT 274 Section Fa17
// September 6th, 2017

// used the source code provided in the exercise description as a starting point

// onboard LED is attached to pin 13,
int ledPin = 13;
     
// slider of potentiometer attached to this analog input
int analogInPin = 0;
     
// length of a dot
int dotTime = 300;
     
// the pushbutton is attached to this digital input pin
int buttonPin = 9;


// below are two functions send a short and medium delay in which the led does not light up     
void sendShortGap()    {
    //inter-element gap
    digitalWrite(ledPin,LOW); //set ledPin to low voltage
    delay(dotTime*2); //do not interpret any more code for dotTime ms
}

void sendMediumGap()    {
    digitalWrite(ledPin,LOW);
    delay(dotTime*6); // assuming mediumGap is 3x longer
    // than shortGap
}

void sendDot()    {
    digitalWrite(ledPin,HIGH);
    delay(dotTime);
    //inter-element gap
    digitalWrite(ledPin,LOW);
    delay(dotTime);
}

void sendDash()    {
    //a dash is 3 dots long
    digitalWrite(ledPin,HIGH);
    delay(3*dotTime);
    // inter-element gap is one dot
    digitalWrite(ledPin,LOW);
    delay(dotTime);
}
     
void setup() {
    // configure ledPin to be a digital output
    pinMode(ledPin, OUTPUT);
}
         
void loop() {
    dotTime = analogRead(analogInPin);
    // set dotTime value according to potentiometer voltage
    
    
    /*  instead of writing tedious functions I opted for a 
      for loop and a set of conditionals to minimize space
      and increase immediate readability */
    
    for (int i = 1; i < 10; i++)    {
        if (i == 4 or i == 7)    {
        sendShortGap(); // if i==4, the O would begin being created,
	// so we would need to send a short gap
	// similar scenario for i==7
        }
        if (i <= 3 or i >= 7)    {
            sendDot();
    } else  {
            sendDash();
        }
    }
    sendMediumGap();
    // as to specification, after SOS in morse code is sent
    // a medium delay is set
}




