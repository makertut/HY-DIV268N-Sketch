// defines pins numbers


const int dirPin  = 3;

const int stepPin = 4; 

const int enPin   = 5;

void setup() {

  

  // Sets the two pins as Outputs

  pinMode(stepPin,OUTPUT); 

  pinMode(dirPin,OUTPUT);



  pinMode(enPin,OUTPUT);

  digitalWrite(enPin,LOW);

  

}

void loop() {

  

  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction

  // Makes 200 pulses for making one full cycle rotation

  for(int x = 0; x < 1600; x++) {

    digitalWrite(stepPin,HIGH); 

    delayMicroseconds(500); 

    digitalWrite(stepPin,LOW); 

    delayMicroseconds(500); 

  }

  delay(1000); // One second delay



  digitalWrite(dirPin,LOW); //Changes the rotations direction

  // Makes 400 pulses for making two full cycle rotation

  for(int x = 0; x < 1600; x++) {

    digitalWrite(stepPin,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepPin,LOW);

    delayMicroseconds(1000);

  }

  delay(1000);

  

}
