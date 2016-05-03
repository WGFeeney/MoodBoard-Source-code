//LED's
//Gender
int maleLedPin = 2;
int femaleLedPin = 3;

//Age
int youngLedPin = 4;
int teenLedPin = 5;
int middleLedPin = 6;
int oldLedPin = 7;

//Mood
int Led1Pin = 22;
int Led2Pin = 23;
int Led3Pin = 24;
int Led4Pin = 25;
int Led5Pin = 26;
int Led6Pin = 27;
int Led7Pin = 28;
int Led8Pin = 29;
int Led9Pin = 30;
int Led10Pin = 31;

//Buttons
//Gender
int malePin = 53;   
int femalePin = 52;

//Age
int youngPin = 51;
int teenPin = 50;
int middlePin = 49;
int oldPin = 48;

//Mood
int Pin1 = 47;
int Pin2 = 46;
int Pin3 = 45;
int Pin4 = 44;
int Pin5 = 43;
int Pin6 = 42;
int Pin7 = 41;
int Pin8 = 40;
int Pin9 = 39;
int Pin10 = 38;

int submitPin = 37;

//Vals
int maleVal = 0;
int femaleVal = 0;

int youngVal = 0;
int teenVal = 0;
int middleVal = 0;
int oldVal = 0;

int Val1 = 0;
int Val2 = 0;
int Val3 = 0;
int Val4 = 0;
int Val5 = 0;
int Val6 = 0;
int Val7 = 0;
int Val8 = 0;
int Val9 = 0;
int Val10 = 0;

int submitVal = 0;


//Variables
int gender;
int age;
int mood;

boolean hasPrinted = false;

void setup() {
  //Gender
  pinMode(maleLedPin, OUTPUT);  // declare LED as output
  pinMode(malePin, INPUT);    // declare pushbutton as input
  pinMode(femaleLedPin, OUTPUT);  // declare LED as output
  pinMode(femalePin, INPUT);    // declare pushbutton as input
  
  //Age
  pinMode(youngLedPin, OUTPUT);
  pinMode(youngPin, INPUT);
  pinMode(teenLedPin, OUTPUT);
  pinMode(teenPin, INPUT);
  pinMode(middleLedPin, OUTPUT);
  pinMode(middlePin, INPUT);
  pinMode(oldLedPin, OUTPUT);
  pinMode(oldPin, INPUT);
  
  //Mood
  pinMode(Led1Pin, OUTPUT);
  pinMode(Pin1, INPUT);
  pinMode(Led2Pin, OUTPUT);
  pinMode(Pin2, INPUT);
  pinMode(Led3Pin, OUTPUT);
  pinMode(Pin3, INPUT);
  pinMode(Led4Pin, OUTPUT);
  pinMode(Pin4, INPUT);
  pinMode(Led5Pin, OUTPUT);
  pinMode(Pin5, INPUT);
  pinMode(Led6Pin, OUTPUT);
  pinMode(Pin6, INPUT);
  pinMode(Led7Pin, OUTPUT);
  pinMode(Pin7, INPUT);
  pinMode(Led8Pin, OUTPUT);
  pinMode(Pin8, INPUT);
  pinMode(Led9Pin, OUTPUT);
  pinMode(Pin9, INPUT);
  pinMode(Led10Pin, OUTPUT);
  pinMode(Pin10, INPUT);
  
  pinMode(submitPin, INPUT);    // declare pushbutton as input
  Serial.begin(9600);
}

void loop(){
  
  //Gender
  maleVal = digitalRead(malePin);  // read input value
if (maleVal == HIGH) {
  } else {
    gender = 0;
    age = 2;
    mood = 3;
    hasPrinted = false;
  }

  femaleVal = digitalRead(femalePin);  // read input value
if (femaleVal == HIGH) {
  } else {
    gender = 1;
    age = 3;
    age = 4;
    hasPrinted = false;
  }
  
  //Age
  youngVal = digitalRead(youngPin);  // read input value
if (youngVal == HIGH) {
  } else {
    age = 0;
    hasPrinted = false;
  }

  teenVal = digitalRead(teenPin);  // read input value
if (teenVal == HIGH) {
  } else {
    age = 1;
    hasPrinted = false;
  }

  middleVal = digitalRead(middlePin);  // read input value
if (middleVal == HIGH) {
  } else {
    age = 2;
    hasPrinted = false;
  }

  oldVal = digitalRead(oldPin);  // read input value
if (oldVal == HIGH) {
  } else {
    age = 3;
    hasPrinted = false;
  }
  
  //Mood
  Val1 = digitalRead(Pin1);  // read input value
if (Val1 == HIGH) {
  } else {
    mood = 0;
    hasPrinted = false;
  }

  Val2 = digitalRead(Pin2);  // read input value
if (Val2 == HIGH) {
  } else {
    mood = 1;
    hasPrinted = false;
  }

  Val3 = digitalRead(Pin3);  // read input value
if (Val3 == HIGH) {
  } else {
    mood = 2;
    hasPrinted = false;
  }

  Val4 = digitalRead(Pin4);  // read input value
if (Val4 == HIGH) {
  } else {
    mood = 3;
    hasPrinted = false;
  }

  Val5 = digitalRead(Pin5);  // read input value
if (Val5 == HIGH) {
  } else {
    mood = 4;
    hasPrinted = false;
  }

  Val6 = digitalRead(Pin6);  // read input value
if (Val6 == HIGH) {
  } else {
    mood = 5;
    hasPrinted = false;
  }

  Val7 = digitalRead(Pin7);  // read input value
if (Val7 == HIGH) {
  } else {
    mood = 6;
    hasPrinted = false;
  }

  Val8 = digitalRead(Pin8);  // read input value
if (Val8 == HIGH) {
  } else {
    mood = 7;
    hasPrinted = false;
  }

  Val9 = digitalRead(Pin9);  // read input value
if (Val9 == HIGH) {
  } else {
    mood = 8;
    hasPrinted = false;
  }

  Val10 = digitalRead(Pin10);  // read input value
if (Val10 == HIGH) {
  } else {
    mood = 9;
    hasPrinted = false;
  }

  submitVal = digitalRead(submitPin);  // read input value
if (submitVal == HIGH) {
  } else {
    if(!hasPrinted)
    {
    Serial.print(gender);
    Serial.print(", ");
    Serial.print(age);
    Serial.print(", ");
    Serial.print(mood);
    Serial.print('\n');
    hasPrinted = true;
    }
  }

switch (gender) {
    case 0:
      //do something when var equals 1
      digitalWrite(maleLedPin, HIGH);
      digitalWrite(femaleLedPin, LOW);
      break;
    case 1:
      //do something when var equals 2
      digitalWrite(femaleLedPin, HIGH);
      digitalWrite(maleLedPin, LOW);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  }

switch (age) {
    case 0:
      //do something when var equals 1
      digitalWrite(youngLedPin, HIGH);
      digitalWrite(teenLedPin, LOW);
      digitalWrite(middleLedPin, LOW);
      digitalWrite(oldLedPin, LOW);
      break;
    case 1:
      //do something when var equals 2
      digitalWrite(youngLedPin, LOW);
      digitalWrite(teenLedPin, HIGH);
      digitalWrite(middleLedPin, LOW);
      digitalWrite(oldLedPin, LOW);
      break;
      case 2:
      //do something when var equals 2
      digitalWrite(youngLedPin, LOW);
      digitalWrite(teenLedPin, LOW);
      digitalWrite(middleLedPin, HIGH);
      digitalWrite(oldLedPin, LOW);
      break;
      case 3:
      //do something when var equals 2
      digitalWrite(youngLedPin, LOW);
      digitalWrite(teenLedPin, LOW);
      digitalWrite(middleLedPin, LOW);
      digitalWrite(oldLedPin, HIGH);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  }

    switch (mood) {
    case 0:
      //do something when var equals 1
      digitalWrite(Led1Pin, HIGH);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
    case 1:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, HIGH);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
      case 2:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, HIGH);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
      case 3:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, HIGH);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
      case 4:
      //do something when var equals 1
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, HIGH);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
    case 5:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, HIGH);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
      case 6:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, HIGH);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
      case 7:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, HIGH);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, LOW);
      break;
      case 8:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, HIGH);
      digitalWrite(Led10Pin, LOW);
      break;
      case 9:
      //do something when var equals 2
      digitalWrite(Led1Pin, LOW);
      digitalWrite(Led2Pin, LOW);
      digitalWrite(Led3Pin, LOW);
      digitalWrite(Led4Pin, LOW);
      digitalWrite(Led5Pin, LOW);
      digitalWrite(Led6Pin, LOW);
      digitalWrite(Led7Pin, LOW);
      digitalWrite(Led8Pin, LOW);
      digitalWrite(Led9Pin, LOW);
      digitalWrite(Led10Pin, HIGH);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
    break;
  } 
}
 
