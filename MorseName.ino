void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);  // Dot duration
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  // Inter-element gap
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);  // Dash duration
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);   // Inter-element gap
}

void blinkCharacter(char c) {
  switch (c) {
    case 'A': case 'a':
      dot(); dash();
      break;
    case 'B': case 'b':
      dash(); dot(); dot(); dot();
      break;
    case 'C': case 'c':
      dash(); dot(); dash(); dot();
      break;
    case 'D': case 'd':
      dash(); dot(); dot();
      break;
    case 'E': case 'e':
      dot();
      break;
    case 'F': case 'f':
      dot(); dot(); dash(); dot();
      break;
    case 'G': case 'g':
      dash(); dash(); dot();
      break;
    case 'H': case 'h':
      dot(); dot(); dot(); dot();
      break;
    case 'I': case 'i':
      dot(); dot();
      break;
    case 'J': case 'j':
      dot(); dash(); dash(); dash();
      break;
    case 'K': case 'k':
      dash(); dot(); dash();
      break;
    case 'L': case 'l':
      dot(); dash(); dot(); dot();
      break;
    case 'M': case 'm':
      dash(); dash();
      break;
    case 'N': case 'n':
      dash(); dot();
      break;
    case 'O': case 'o':
      dash(); dash(); dash();
      break;
    case 'P': case 'p':
      dot(); dash(); dash(); dot();
      break;
    case 'Q': case 'q':
      dash(); dash(); dot(); dash();
      break;
    case 'R': case 'r':
      dot(); dash(); dot();
      break;
    case 'S': case 's':
      dot(); dot(); dot();
      break;
    case 'T': case 't':
      dash();
      break;
    case 'U': case 'u':
      dot(); dot(); dash();
      break;
    case 'V': case 'v':
      dot(); dot(); dot(); dash();
      break;
    case 'W': case 'w':
      dot(); dash(); dash();
      break;
    case 'X': case 'x':
      dash(); dot(); dot(); dash();
      break;
    case 'Y': case 'y':
      dash(); dot(); dash(); dash();
      break;
    case 'Z': case 'z':
      dash(); dash(); dot(); dot();
      break;
    default:
      // For characters not defined in Morse code, blink an empty space
      delay(3000); // Duration of space between words
      break;
  }
  delay(1000); // Inter-character gap
}

void blinkName(String name) {
  for (int i = 0; i < name.length(); i++) {
    blinkCharacter(name.charAt(i));
  }
}

void loop() {
  blinkName("vidul");
  delay(3000);  // hold between blinks
}

// void loop() {
  
//   Serial.println("Enter your first name:");
//   while (Serial.available() == 0) {
//     // Wait for user input
//   }
  
//   String firstName = Serial.readStringUntil('\n'); // Read the input from the serial monitor until newline character is encountered
//   blinkName(firstName);
//   delay(3000);  // hold between blinks
// }