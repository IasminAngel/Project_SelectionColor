// C++ code
// Iasmin Angel

int ledGreen = 5;
int ledYellow = 4; 
int ledRed = 3;


void setup()
{6
	pinMode (ledGreen, OUTPUT); 
  	pinMode (ledYellow, OUTPUT);
  	pinMode (ledRed, OUTPUT);
  	Serial.begin(9600);
}

void loop()
{
  	char letter = Serial.read();
  	
  	if(letter == 'a'){
    digitalWrite(ledGreen, HIGH);
      
    }else if (letter == 'b'){
    
    digitalWrite(ledGreen, LOW);
      
    }else if (letter == 'c'){
    
    digitalWrite(ledYellow, HIGH);
      
    }else if (letter == 'd'){
    
    digitalWrite(ledYellow, LOW);
      
    }else if (letter == 'e'){
    
    digitalWrite(ledRed, HIGH);
      
    }else if (letter == 'f'){
    
    digitalWrite(ledRed, LOW);
      
    }
  
  delay(100);
}