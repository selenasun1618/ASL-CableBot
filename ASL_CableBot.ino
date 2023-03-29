const int stepPin1 = 6; 	//pin for pulse (white)
const int dirPin1 = 7;		//pin for step direction (yellow)
const int stepPin2 = 1; 	//pin for pulse (white)
const int dirPin2 = 2;		//pin for step direction (yellow)

void setup(){
  //set pins as outputs
  pinMode(stepPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(stepPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);
}

void loop(){
  //step forward
  stepper1FWD(100);
  // TO DO: Add desired control
}

// motor 1 forward
void stepper1FWD(steps){
  digitalWrite(dirPin1, HIGH);
  for (int i = 0; i < steps; i++) {
    	step(stepPin1);
  }
}

// motor 1 reverse
void stepper1REV(steps){
  digitalWrite(dirPin1, LOW);
  for (int i = 0; i < steps; i++) {
    	step(stepPin1);
  }
}

// motor 2 forward
void stepper2FWD(steps){
  digitalWrite(dirPin2, HIGH);
  for (int i = 0; i < steps; i++) {
    	step(stepPin2);
  }
}

// motor 2 reverse
void stepper2REV(steps){
  digitalWrite(dirPin2, LOW);
  for (int i = 0; i < steps; i++) {
    	step(stepPin2);
  }
}

// take 1 step
void step(stepPin){
  digitalWrite(stepPin, HIGH);
  delay(1);
  digitalWrite(stepPin, LOW);
  delay(1);
}
