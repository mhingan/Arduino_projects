#include <Keypad.h>

// Define dimensiunea tastaturii
const byte ROWS = 4; // patru rânduri
const byte COLS = 4; // patru coloane

// Definim layout-ul tastaturii
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Definim pinii la care sunt conectate rândurile și coloanele tastaturii
byte rowPins[ROWS] = {9, 8, 7, 6}; // Pinii la care sunt conectate rândurile
byte colPins[COLS] = {5, 4, 3, 2}; // Pinii la care sunt conectate coloanele

// Creăm un obiect Keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
  Serial.begin(9600);
}

void loop(){
  char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }
}
